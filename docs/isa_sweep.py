#!/usr/bin/env python3
"""Naive multi-ISA coherence sweep (see probe/FINDINGS.md for why it needs calibration)."""
import capstone as C, random, sys

ARCHS = [
 ("x86-16", C.CS_ARCH_X86, C.CS_MODE_16), ("x86-32", C.CS_ARCH_X86, C.CS_MODE_32),
 ("x86-64", C.CS_ARCH_X86, C.CS_MODE_64),
 ("arm", C.CS_ARCH_ARM, C.CS_MODE_ARM), ("thumb", C.CS_ARCH_ARM, C.CS_MODE_THUMB),
 ("arm64", C.CS_ARCH_ARM64, C.CS_MODE_ARM),
 ("mips32le", C.CS_ARCH_MIPS, C.CS_MODE_MIPS32),
 ("ppc32be", C.CS_ARCH_PPC, C.CS_MODE_32|C.CS_MODE_BIG_ENDIAN),
 ("riscv32", C.CS_ARCH_RISCV, C.CS_MODE_RISCV32),
 ("sh", C.CS_ARCH_SH, C.CS_MODE_SH4),
 ("m68k", C.CS_ARCH_M68K, C.CS_MODE_M68K_000),
 ("sparc", C.CS_ARCH_SPARC, C.CS_MODE_32),
 ("sysz", C.CS_ARCH_SYSZ, C.CS_MODE_BIG_ENDIAN),
 ("tricore", C.CS_ARCH_TRICORE, C.CS_MODE_TRICORE_162),
 ("tms320c64x", C.CS_ARCH_TMS320C64X, C.CS_MODE_BIG_ENDIAN),
 ("m680x", C.CS_ARCH_M680X, C.CS_MODE_M680X_6809),
 ("mos65xx", C.CS_ARCH_MOS65XX, C.CS_MODE_MOS65XX_6502),
 ("xcore", C.CS_ARCH_XCORE, C.CS_MODE_BIG_ENDIAN),
 ("bpf", C.CS_ARCH_BPF, C.CS_MODE_BPF_CLASSIC|C.CS_MODE_BIG_ENDIAN),
]

def analyse(blob, arch, mode, limit=20000):
    try:
        md = C.Cs(arch, mode)
    except Exception:
        return None
    md.detail = True
    starts = {}; insns = 0; cov = 0; branches = []
    off = 0; n = len(blob)
    while off < n and insns < limit:
        got = False
        for ins in md.disasm(blob[off:off+16], off):
            starts[ins.address] = True
            insns += 1; cov += ins.size
            try:
                g = ins.groups
            except Exception:
                g = ()
            if any(gr in (C.CS_GRP_JUMP, C.CS_GRP_CALL) for gr in g):
                try:
                    for op in ins.operands:
                        if op.type == C.CS_OP_IMM:
                            branches.append(op.imm); break
                except Exception:
                    pass
            off = ins.address + ins.size
            got = True
            break
        if not got:
            off += 1
    inr = [t for t in branches if 0 <= t < n]
    land = sum(1 for t in inr if t in starts)
    back = sum(1 for t in inr if t < 0)  # unused
    return dict(cov=cov/max(n,1), insns=insns, land=land/max(len(inr),1), resolved=len(inr))

def run(name, blob, sample=8192):
    print("%-11s %6d B" % (name, len(blob)))
    b = blob[:sample]
    for label, arch, mode in ARCHS:
        r = analyse(b, arch, mode)
        if r is None or r["resolved"] < 20:
            continue
        sh = bytearray(b); random.Random(1).shuffle(sh)
        rb = analyse(bytes(sh), arch, mode)
        if rb is None:
            continue
        excess = (r["land"] - rb["land"]) * 100
        flag = "  <== CODE-LIKE" if excess > 15 else ""
        print("   %-11s cov %5.1f%%  land %5.1f%%  base %5.1f%%  excess %+5.1f%s"
              % (label, 100*r["cov"], 100*r["land"], 100*rb["land"], excess, flag))

# usage: python3 probe/isa_sweep.py [image]     (needs capstone: pip install capstone)
import os
import sys as _sys

HERE = os.path.dirname(os.path.abspath(__file__))          # docs/probe or repo/probe
_CANDIDATES = [
    _sys.argv[1] if len(_sys.argv) > 1 else None,
    os.path.join(HERE, '..', 'build', 'TBT.bin'),                          # docs/ staging layout
    os.path.join(HERE, '..', '..', 'tbt-firmware-decomp', 'build', 'TBT.bin'),
    os.path.join(HERE, '..', '..', 'build', 'TBT.bin'),                    # repo layout
    os.path.join('build', 'TBT.bin'),
]
_IMG = next((p for p in _CANDIDATES if p and os.path.exists(p)), None)
if not _IMG:
    _sys.exit('missing TBT.bin - run "make fetch" in the code repo first')
d = open(_IMG, 'rb').read()
print("image: %s" % _IMG)
for name, lo, hi in [("sec8",0x14258,0x1AAC8),("sec9",0x1AACA,0x1C086),("sec10",0x1C088,0x21DD8)]:
    run(name, d[lo:hi])
    print()
run("ARC-code", d[0x22800:0x38E00], sample=8192)
