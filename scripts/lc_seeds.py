#!/usr/bin/env python3
"""lc_seeds.py - write build/seeds_lc.txt from the call targets in lc.asm.

The Ghidra 8051 decompiler is seeded with the reset/vector addresses and every
`sub_xxxx` label produced by the recovery in scripts/emit_listing.py.
"""
import os
import re

HERE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
seeds = {0x0, 0x3, 0xB, 0x13, 0x100, 0x113, 0x116, 0x11B, 0x1FA, 0x25E}
for line in open(os.path.join(HERE, "lc.asm")):
    m = re.match(r"sub_([0-9A-F]{4}):", line)
    if m:
        seeds.add(int(m.group(1), 16))
path = os.path.join(HERE, "build", "seeds_lc.txt")
os.makedirs(os.path.dirname(path), exist_ok=True)
open(path, "w").write("".join("%x\n" % a for a in sorted(seeds)))
print("wrote %s (%d seeds)" % (os.path.relpath(path), len(seeds)))
