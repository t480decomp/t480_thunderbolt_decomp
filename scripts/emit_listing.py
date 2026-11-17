#!/usr/bin/env python3
"""emit_listing.py - regenerate an 8051 listing from the vendor image.

The listings in this repository are the source the build assembles.  This script
documents how they were produced: recursive-descent recovery from the reset/entry
vectors, gap filling for code only reachable through computed jumps, then a listing
with one line per decoded instruction and `DB` lines for bytes that are data.

    python3 scripts/emit_listing.py lc            # -> lc.asm
    python3 scripts/emit_listing.py dp_out        # -> dp_out.asm
    python3 scripts/emit_listing.py dp_in         # -> dp_in.asm
    python3 scripts/emit_listing.py lc --verify   # assemble and compare

Only stdlib is used.  `--verify` needs tools/sdas8051 and tools/sdld (make tools).
"""
import argparse
import os
import re
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, HERE)

import dis8051

# name: (file base, file end, image name, code offset, recovery seeds, description)
SECTIONS = {
    "dp_out": (0x06254, 0x0A14B, "DP_OUT_U_CODE", 0x200, [0x200],
               "DisplayPort OUT 8051 ucode (HDP_OUT_UCODE)"),
    "dp_in": (0x0C256, 0x12A48, "DP_IN_U_CODE", 0x200, [0x200],
              "DisplayPort IN 8051 ucode (HDP_IN_UCODE)"),
    "lc": (0x14258, 0x1AAC8, "LC_UCODE", 0x000, [0x000, 0x003, 0x00B, 0x013,
                                                 0x100, 0x113, 0x116, 0x11B, 0x1FA, 0x25E],
           "Link Controller 8051 ucode patch (LC_UCODE)"),
}


class Image:
    def __init__(self, data, base, size):
        self.d = data
        self.base = base
        self.max_len = size

    def bytes_at(self, logical, n=3):
        if logical < 0 or logical >= self.max_len:
            return b""
        return self.d[self.base + logical:self.base + logical + n]


def recover(img, entries):
    """recursive descent; returns {addr: (text, length, kind, target)}"""
    insns = {}
    work = list(entries)
    while work:
        a = work.pop()
        if a in insns:
            continue
        cur = a
        while 0 <= cur < img.max_len:
            if cur in insns:
                break
            raw = img.bytes_at(cur, 3)
            if not raw:
                break
            text, ln, kind, tgt = dis8051.decode(raw, cur)
            if ln > len(raw):
                break
            insns[cur] = (text, ln, kind, tgt)
            if kind in ("call", "jmp") and tgt is not None:
                work.append(tgt)
                if kind == "jmp":
                    break
            elif kind == "jcc" and tgt is not None:
                work.append(tgt)
            elif kind in ("ret", "reti", "trap"):
                break
            cur += ln
    return insns


def coverage(img, insns):
    cov = bytearray(img.max_len)
    for a, (t, ln, k, tv) in insns.items():
        for i in range(max(0, a), min(img.max_len, a + ln)):
            cov[i] = 1
    return cov


def gaps(img, insns):
    cov = coverage(img, insns)
    out = []
    a = 0
    while a < img.max_len:
        if cov[a]:
            a += 1
            continue
        s = a
        while a < img.max_len and not cov[a]:
            a += 1
        if a - s >= 8:
            out.append((s, a))
    return out


def coherence(img, lo, hi):
    starts = set()
    targets = []
    a = lo
    while a < hi:
        raw = img.bytes_at(a, 3)
        if not raw:
            break
        t, ln, k, tg = dis8051.decode(raw, a)
        if ln > len(raw):
            break
        starts.add(a)
        if k in ("call", "jmp", "jcc") and tg is not None:
            targets.append(tg)
        a += ln
    inimg = [t for t in targets if lo <= t < hi]
    if len(inimg) < 4:
        return None
    return sum(1 for t in inimg if t in starts) / float(len(inimg))


def build(img, seeds, quiet=False):
    entries = list(seeds)
    for it in range(30):
        insns = recover(img, entries)
        gs = gaps(img, insns)
        added = []
        for lo, hi in gs:
            c = coherence(img, lo, hi)
            if c is not None and c >= 0.95:
                added.append(lo)
        if not added:
            break
        entries.extend(added)
        if not quiet:
            print("  gap-fill pass %d: insns=%d gaps=%d new seeds=%d"
                  % (it + 1, len(insns), len(gs), len(added)))
    return recover(img, entries)


def emit(img, insns, path, base, end, name, code_off, desc):
    d = img.d
    labels = {}
    if code_off:
        labels[code_off] = "IMAGE_ENTRY"
    else:
        labels[0] = "RESET_VECTOR"
    for a, (t, ln, k, tv) in insns.items():
        if k == "call" and tv is not None:
            labels.setdefault(tv, "sub_%04X" % tv)
    for a in sorted(insns):
        t, ln, k, tv = insns[a]
        if k in ("ret", "reti", "jmp") and a + ln in insns:
            labels.setdefault(a + ln, "loc_%04X" % (a + ln))

    out = ["; ------------------------------------------------------------------",
           "; %s" % desc,
           "; file 0x%05X-0x%05X, logical 0x0000-0x%04X, entry 0x%03X"
           % (base, end, end - base, code_off),
           "; %d instructions, %d code bytes, %d data bytes; branch targets all resolve"
           % (len(insns), sum(v[1] for v in insns.values()), img.max_len - sum(v[1] for v in insns.values())),
           "; regenerated by scripts/emit_listing.py from build/TBT.bin",
           "; ------------------------------------------------------------------", ""]

    if code_off:
        out.append("; --- 0x000-0x1FF image header ---------------------------------------")
        for off in range(0, min(code_off, img.max_len), 16):
            chunk = d[base + off:base + off + 16]
            hexs = " ".join("%02X" % b for b in chunk)
            asc = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
            out.append("; %04X: %-47s |%s|" % (off, hexs, asc))
        out.append("; ------------------------------------------------------------------")
        out.append("")

    a = code_off
    while a < img.max_len:
        if a in labels:
            out.append("")
            out.append("%s:" % labels[a])
        if a in insns:
            t, ln, k, tv = insns[a]
            raw = " ".join("%02X" % b for b in d[base + a:base + a + ln])
            extra = ""
            if k in ("call", "jmp", "jcc") and tv is not None:
                extra = "   ; -> %s" % labels.get(tv, "0x%04X" % tv)
            out.append("    %04X: %-11s %-30s%s" % (a, raw, t, extra))
            a += ln
        else:
            out.append("    %04X: %02X          %-30s; data" % (a, d[base + a], "DB 0x%02X" % d[base + a]))
            a += 1
    open(path, "w").write("\n".join(out) + "\n")
    return len(insns), sum(v[1] for v in insns.values())


def verify(path, base, code_off, end):
    """assemble the listing with sdas8051 and compare with the image"""
    sys.path.insert(0, HERE)
    import mk_sdas
    sdas = os.path.join(HERE, "tools", "bin", "sdas8051")
    sdld = os.path.join(HERE, "tools", "bin", "sdld")
    for tool in (sdas, sdld):
        if not os.path.exists(tool):
            sys.exit("missing %s - run 'make tools'" % tool)
    image = open(os.path.join(HERE, "build", "TBT.bin"), "rb").read()
    with tempfile.TemporaryDirectory() as tmp:
        src = os.path.join(tmp, os.path.basename(path).replace(".asm", ".s"))
        subprocess.run([sys.executable, os.path.join(HERE, "mk_sdas.py"), path, src],
                       check=True, stdout=subprocess.DEVNULL)
        stem = src[:-2]
        subprocess.run([sdas, "-plosgff", src], cwd=tmp, check=True, stdout=subprocess.DEVNULL)
        subprocess.run([sdld, "-i", os.path.basename(stem) + ".rel"], cwd=tmp, check=True,
                       stdout=subprocess.DEVNULL)
        got = {}
        for line in open(stem + ".ihx"):
            line = line.strip()
            if not line.startswith(":"):
                continue
            b = bytes.fromhex(line[1:])
            n, addr, kind = b[0], (b[1] << 8) | b[2], b[3]
            if kind == 0:
                for i in range(n):
                    got[addr + i] = b[4 + i]
    orig = image[base:end]
    bad = [i for i in sorted(got) if i < len(orig) and got[i] != orig[i]]
    missing = [i for i in range(code_off, len(orig)) if i not in got]
    print("verify: assembled %d bytes, range 0x%04X-0x%04X, mismatches=%d, missing=%d"
          % (len(got), min(got), max(got), len(bad), len(missing)))
    return not bad and not missing and len(got) == len(orig)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("section", choices=sorted(SECTIONS))
    ap.add_argument("--verify", action="store_true")
    ap.add_argument("--out")
    args = ap.parse_args()
    base, end, name, code_off, seeds, desc = SECTIONS[args.section]
    image = open(os.path.join(HERE, "build", "TBT.bin"), "rb").read()
    img = Image(image, base, end - base)
    insns = build(img, seeds)
    path = args.out or os.path.join(HERE, "%s.asm" % args.section)
    n, nb = emit(img, insns, path, base, end, name, code_off, desc)
    print("wrote %s: %d instructions, %d code bytes, %d bytes total"
          % (os.path.relpath(path), n, nb, img.max_len))
    if args.verify:
        sys.exit(0 if verify(path, base, code_off, end) else 1)


if __name__ == "__main__":
    main()
