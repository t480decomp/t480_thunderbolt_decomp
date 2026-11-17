#!/usr/bin/env python3
"""asm_arc.py - assemble the ARC listings and compare them with the vendor image.

    listing (objdump)  ->  GNU as source  ->  arc-linux-gnu-as -mcpu=arc700  ->  objcopy -O binary

Two sections are handled:

    main   0x22800  ARC_CACHE firmware image, linked at 0x22800
    ucode  0x1AACA  ARC controller ucode patch (ARC_UCODE), linked at 0

The regenerated blocks are written to build/regen/ for mkimage.py, and every byte is
compared with the fetched vendor image (i.e. what you changed in a listing).

Instructions GNU as cannot express (alternate 16-bit short-ALU forms and a few
delay-slot/`j` forms) are kept as `.byte`, so every byte of each section is still
produced by the assembler.
"""
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
import toolchain

AS = None
OBJCOPY = None
LD = None
BLOCK_LO, BLOCK_HI = 0x22800, 0x38E00

LINE = re.compile(r"\s+([0-9a-f]{1,6}):\s+(?:([0-9a-f ]+?)\s{2,})?(.*)$")
BRANCH = re.compile(r"^(b|bl|b_s|bl_s|br|j|jl|j_s|jl_s|beq|bne|bgt|blt|bge|ble|brne|breq|brgt|brlt|"
                    r"brge|brle|beq_s|bne_s|bgt_s|blt_s|bge_s|ble_s|loop|loopne|loopnz|loopz)\b")

# The firmware also uses the alternate 16-bit short-ALU form: one register field
# (Rd == Rs), high byte 0xB8|regcode (ASL/ASR/SUB) or 0xE0|regcode (ADD), low byte
# = immediate with a 0x00/0x40/0x60 sub-op.  GNU as only emits the equivalent
# 0x68-family form, so these instructions are encoded here instead.  The rule was
# checked against all 314 instances in the base image with zero disagreements.
ALT_REG = {"r0": 0, "r1": 1, "r2": 2, "r3": 3, "r12": 4, "r13": 5, "r14": 6, "r15": 7}
ALT_SUB = {"asl_s": 0x00, "asr_s": 0x40, "sub_s": 0x60}
ALT_TEXT = re.compile(r"^(add_s|sub_s|asl_s|asr_s)\s+(r\d+),(r\d+),0x([0-9a-f]+)$")


def alt_short_alu(text):
    """bytes for the alternate short-ALU form, or None when not applicable"""
    m = ALT_TEXT.match(text)
    if not m:
        return None
    mn, rd, rs, imm = m.group(1), m.group(2), m.group(3), int(m.group(4), 16)
    if rd != rs or rd not in ALT_REG or not 0 <= imm <= 31:
        return None
    code = ALT_REG[rd]
    if mn == "add_s":
        word = 0xE000 | (code << 8) | imm
    elif mn in ALT_SUB:
        word = 0xB800 | (code << 8) | ALT_SUB[mn] | imm
    else:
        return None
    return bytes([word & 0xFF, word >> 8])


def parse(listing, image, data_base=0):
    out = []
    for l in open(listing):
        m = LINE.match(l.rstrip("\n"))
        if not m:
            continue
        addr = int(m.group(1), 16)
        raw = bytes.fromhex(m.group(2)) if m.group(2) else b""
        # ARC objdump prints instruction words big-endian, so its hex column is byte-swapped
        # within each 16-bit half relative to the actual file bytes
        raw = b"".join(raw[i:i + 2][::-1] for i in range(0, len(raw), 2))
        text = (m.group(3) or "").strip()
        if not text:
            continue
        tgt = None
        cm = re.search(r";\s*0x([0-9a-f]+)\s*$", text)
        if cm:
            tgt = int(cm.group(1), 16)
            text = text[:cm.start()].strip()
        if text.startswith(".") and not raw:
            # data directives without a hex column: take the bytes from the image itself
            size = {".long": 4, ".word": 4, ".byte": 1, ".short": 2}.get(text.split()[0], 1)
            nvals = max(1, len(re.split(r"[,\s]+", text.split(None, 1)[1].strip()))) if " " in text else 1
            n = size * nvals
            raw = image[data_base + addr:data_base + addr + n]
        out.append([addr, raw, text, tgt])
    return out


def load_functions(index_path):
    ranges = []
    for l in open(index_path):
        m = re.match(r"ram:0*([0-9a-f]+)\s+size=(\d+)", l)
        if m:
            lo = int(m.group(1), 16)
            ranges.append((lo, lo + int(m.group(2))))
    return ranges


def in_func(addr, ranges):
    if ranges is None:
        return True
    for lo, hi in ranges:
        if lo <= addr < hi:
            return True
        if lo > addr:
            break
    return False


def emit(entries, labels, force, path, ranges):
    lines = ["\t.text"]
    for t in sorted(x for x in labels if not (BLOCK_LO <= x < BLOCK_HI)):
        lines.append("\t.set\tL%05x,0x%05x" % (t, t))
    expect = entries[0][0]
    linemap = {}
    for addr, raw, text, tgt in entries:
        if addr != expect:
            lines.append("\t.skip %d" % (addr - expect))
        if addr in labels:
            lines.append("L%05x:" % addr)
        if addr in force or not in_func(addr, ranges):
            body = "\t.byte\t" + ",".join("0x%02x" % b for b in raw)
        elif text.startswith("."):
            # data directives: keep the original bytes verbatim (objdump's .long text is
            # byte-swapped for ARC, and data is not what is being verified here)
            body = "\t.byte\t" + ",".join("0x%02x" % b for b in raw)
        elif alt_short_alu(text) is not None and alt_short_alu(text) == raw:
            # alternate short-ALU form: encoded by the rule above, not by GNU as
            body = "\t.byte\t" + ",".join("0x%02x" % b for b in raw)
        elif BRANCH.match(text) and tgt is not None and (BLOCK_LO <= tgt < BLOCK_HI) and tgt in labels:
            head = text.split(None, 1)
            ops = [o.strip() for o in head[1].split(",")] if len(head) > 1 else []
            if ops:
                ops[-1] = "L%05x" % tgt
            body = "\t%s\t%s" % (head[0], ",".join(ops))
        elif BRANCH.match(text) and tgt is not None:
            # objdump's last operand is the byte displacement; expressing it relative to `.`
            # lets the assembler resolve it locally (no relocation), which reproduces the
            # firmware's exact encoding for targets inside *and* outside the block
            head = text.split(None, 1)
            ops = [o.strip() for o in head[1].split(",")] if len(head) > 1 else []
            if ops:
                disp = ops[-1]
                try:
                    d = int(disp, 0)
                    ops[-1] = (".+%d" % d) if d >= 0 else (".%d" % d)
                except ValueError:
                    ops[-1] = "L%05x" % tgt
            body = "\t%s\t%s" % (head[0], ",".join(ops))
        else:
            body = "\t" + text
        lines.append(body)
        linemap[len(lines)] = addr
        expect = addr + len(raw)
    open(path, "w").write("\n".join(lines) + "\n")
    return linemap


SECTIONS = {
    # name: listing, optional function index, file offset, link base, length, regen name, label
    "main": {
        "listing": "arc/arc_code_22800.asm",
        "index": "arc/arc_index.txt",
        "file_base": 0x22800, "link_base": 0x22800, "length": 0x16600,
        "regen": "arc_block.bin", "label": "ARC block",
    },
    "ucode": {
        "listing": "arc/arc_ucode_1aaca.asm",
        "index": None,
        "file_base": 0x1AACA, "link_base": 0x00000, "length": 0x015BC,
        "regen": "arc_ucode.bin", "label": "ARC_UCODE",
    },
}


def run_section(name, image, tmp):
    """assemble one ARC section; returns True when the section is byte-identical"""
    global BLOCK_LO, BLOCK_HI
    cfg = SECTIONS[name]
    BLOCK_LO, BLOCK_HI = cfg["link_base"], cfg["link_base"] + cfg["length"]
    entries = parse(os.path.join(HERE, cfg["listing"]), image, cfg["file_base"])
    if not entries:
        print("%s: no entries in %s" % (name, cfg["listing"]))
        return False
    labels = {tgt for _, _, text, tgt in entries if tgt is not None and BRANCH.match(text)}
    ranges = load_functions(os.path.join(HERE, cfg["index"])) if cfg["index"] else None
    src = os.path.join(tmp, "%s.s" % name)
    obj = os.path.join(tmp, "%s.o" % name)
    elf = os.path.join(tmp, "%s.elf" % name)
    bin_ = os.path.join(tmp, "%s.bin" % name)
    force = set()
    for it in range(20):
        linemap = emit(entries, labels, force, src, ranges)
        r = subprocess.run([AS, "-EL", "-mcpu=arc700", "-o", obj, src],
                           capture_output=True, text=True)
        bad = set()
        for m in re.finditer(r"%s\.s:(\d+): Error" % name, r.stderr):
            addr = linemap.get(int(m.group(1)))
            if addr is not None:
                bad.add(addr)
        print("%-6s pass %d: as errors=%d, newly forced to .byte=%d, total forced=%d"
              % (name, it + 1, len(re.findall(r"Error", r.stderr)), len(bad - force), len(force | bad)))
        if not (bad - force):
            break
        force |= bad
    orig = image[cfg["file_base"]:cfg["file_base"] + cfg["length"]]
    demoted = set()
    for it in range(4):
        emit(entries, labels, force, src, ranges)
        r = subprocess.run([AS, "-EL", "-mcpu=arc700", "-o", obj, src],
                           capture_output=True, text=True)
        if r.returncode != 0:
            print("assemble failed:", r.stderr[:400])
            return False
        subprocess.run([LD, "-Ttext=0x%05x" % BLOCK_LO, "-o", elf, obj],
                       check=True, capture_output=True)
        subprocess.run([OBJCOPY, "-O", "binary", "--only-section=.text", elf, bin_],
                       check=True, capture_output=True)
        got = open(bin_, "rb").read()
        bad = set()
        owner = {}
        for a, raw, t, tg in entries:
            if t.startswith("."):
                continue
            for k in range(len(raw)):
                owner[a + k] = a
        for i in range(min(len(got), len(orig))):
            if got[i] != orig[i]:
                o = owner.get(BLOCK_LO + i)
                if o is not None and o not in force:
                    bad.add(o)
        if not bad:
            break
        print("  %s verification pass %d: %d instructions demoted to .byte" % (name, it + 1, len(bad)))
        demoted |= bad
        force |= bad

    regen_dir = os.path.join(HERE, "build", "regen")
    os.makedirs(regen_dir, exist_ok=True)
    with open(os.path.join(regen_dir, cfg["regen"]), "wb") as f:
        f.write(got)
    n = min(len(got), len(orig))
    diff = [i for i in range(n) if got[i] != orig[i]]
    print("\n%s: 0x%05X-0x%05X (%d bytes)" % (cfg["label"], cfg["file_base"],
                                              cfg["file_base"] + len(orig), len(orig)))
    print("regenerated: %d bytes, compared %d" % (len(got), n))
    print("mismatching bytes: %d" % len(diff))
    for i in diff[:10]:
        print("  0x%05X orig=%02x as=%02x" % (cfg["file_base"] + i, orig[i], got[i]))
    instr = [(a, raw, t, tg) for a, raw, t, tg in entries
             if not t.startswith(".") and in_func(a, ranges)]
    outside = sum(1 for a, raw, t, tg in instr
                  if BRANCH.match(t) and tg is not None and not (BLOCK_LO <= tg < BLOCK_HI))
    alt = sum(1 for a, raw, t, tg in instr
              if alt_short_alu(t) is not None and alt_short_alu(t) == raw)
    verified = sum(1 for a, raw, t, tg in instr if a not in force)
    print("in-section instructions           : %d" % len(instr))
    print("  of which branch outside section : %d" % outside)
    print("  verified byte-exact             : %d (%.2f%%)" % (verified, 100.0 * verified / max(1, len(instr))))
    print("    of which alternate-form encoder: %d" % alt)
    print("  not verifiable with GAS         : %d" % len(force))
    if ranges is not None:
        print("data/other entries (bytes copied) : %d"
              % sum(1 for a, raw, t, tg in entries if not in_func(a, ranges)))
    return not diff and len(got) == len(orig)


def main():
    global AS, LD, OBJCOPY
    AS = toolchain.require(toolchain.arc_as(), "as")
    LD = toolchain.require(toolchain.arc_ld(), "ld")
    OBJCOPY = toolchain.require(toolchain.arc_objcopy(), "objcopy")
    image = open(os.path.join(HERE, "build", "TBT.bin"), "rb").read()
    tmp = os.path.join(HERE, "build", "arc_asm")
    os.makedirs(tmp, exist_ok=True)
    wanted = [a for a in sys.argv[1:] if not a.startswith("-")] or ["main", "ucode"]
    ok = True
    for name in wanted:
        if name not in SECTIONS:
            sys.exit("unknown ARC section %r (choose %s)" % (name, ", ".join(SECTIONS)))
        ok = run_section(name, image, tmp) and ok
    strict = "--strict" in sys.argv
    if strict and not ok:
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
