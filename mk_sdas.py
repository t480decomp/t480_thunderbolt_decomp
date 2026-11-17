#!/usr/bin/env python3
"""mk_sdas.py - convert a listing from emit_listing.py into sdas8051 assembly.

The point is a byte-exact round trip: assemble the regenerated source with SDCC's
sdas8051 and compare the bytes against the original image. Any difference means the
listing does not faithfully describe the code.
"""
import re
import sys
import dis8051

SFR_INV = {v: k for k, v in dis8051.SFR.items()}
BRANCH = {"sjmp", "ajmp", "ljmp", "acall", "lcall", "jz", "jnz", "jc", "jnc",
          "jb", "jnb", "jbc", "cjne", "djnz"}


def bit_addr(tok):
    tok = tok.split("/")[0].strip()
    m = re.match(r"^([A-Za-z][A-Za-z0-9]*)\.([0-7])$", tok)
    if m and m.group(1) in SFR_INV:
        return SFR_INV[m.group(1)] + int(m.group(2))
    m = re.match(r"^0x([0-9A-Fa-f]{2})\.([0-7])$", tok)
    if m:
        return int(m.group(1), 16) + int(m.group(2))
    m = re.match(r"^bit\s+0x([0-9A-Fa-f]{2})$", tok)
    if m:
        return int(m.group(1), 16)
    return None


def conv_operand(op, mnemonic, is_last, labels, covered):
    op = op.strip()
    if op == "A":
        return "a"
    if op == "C":
        return "c"
    if op == "AB":
        return "ab"
    if op == "DPTR":
        return "dptr"
    if op == "@DPTR":
        return "@dptr"
    if op == "@A+DPTR":
        return "@a+dptr"
    if op == "@A+PC":
        return "@a+pc"
    if re.match(r"^@R[0-7]$", op):
        return "@r" + op[2]
    if re.match(r"^R[0-7]$", op):
        return "r" + op[1]
    m = re.match(r"^[A-Za-z][A-Za-z0-9]*\(0x([0-9A-Fa-f]{2})\)$", op)
    if m:
        return "0x" + m.group(1).lower()
    if re.match(r"^#0x[0-9A-Fa-f]+$", op):
        return op.lower()
    if re.match(r"^0x[0-9A-Fa-f]{4}$", op):
        addr = int(op, 16)
        if mnemonic in BRANCH and is_last:
            if addr in covered:
                labels.add(addr)
                return "L%04x" % addr
            return op.lower()
        return op.lower()
    if re.match(r"^0x[0-9A-Fa-f]+$", op):
        return op.lower()
    ba = bit_addr(op)
    if ba is not None:
        return "0x%02x" % ba
    return None


def main():
    src = sys.argv[1]
    out = sys.argv[2]
    lines = open(src).read().splitlines()
    insns = []          # (addr, bytes, text)
    for l in lines:
        m = re.match(r"\s+([0-9A-F]{4}): ([0-9A-F ]+?)\s{2,}(?!DB )(.+?)(?:\s+;.*)?$", l.rstrip())
        if not m:
            continue
        addr = int(m.group(1), 16)
        raw = bytes.fromhex(m.group(2))
        insns.append((addr, raw, m.group(3).strip()))
    covered = {a for a, _, _ in insns}
    labels = set()
    body = []
    for addr, raw, text in insns:
        if text.upper().startswith("DB "):
            body.append((addr, len(raw), "\t.db\t0x%02x" % raw[0]))
            continue
        m = re.match(r"^([A-Z]+)\s*(.*)$", text)
        if not m:
            body.append((addr, len(raw), ".db 0x%02x" % raw[0]))
            continue
        mn = m.group(1).lower()
        rest = m.group(2).strip()
        ops = [o for o in rest.split(",")] if rest else []
        conv = [conv_operand(o, mn, i == len(ops) - 1, labels, covered) for i, o in enumerate(ops)]
        if any(c is None for c in conv):
            body.append((addr, len(raw), "***CONVFAIL*** " + text))
            continue
        body.append((addr, len(raw), "\t%s\t%s" % (mn, ",".join(conv))))

    o = ["\t.module tbimg", "\t.area CODE (ABS)", "\t.org 0x%04x" % insns[0][0]]
    expect = None
    for addr, ln, text in body:
        if text.startswith("***"):
            o.append("\t; %s" % text)
            expect = None
            continue
        if addr in labels:
            o.append("L%04x:" % addr)
        if expect is None or addr != expect:
            o.append("\t.org 0x%04x" % addr)
        o.append(text)
        expect = addr + ln
    open(out, "w").write("\n".join(o) + "\n")
    nconv = sum(1 for _, _, t in body if t.startswith("***"))
    print("wrote %s: %d instructions, %d labels, %d conversion failures" % (out, len(body), len(labels), nconv))


if __name__ == "__main__":
    main()
