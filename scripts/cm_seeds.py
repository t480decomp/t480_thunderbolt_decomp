#!/usr/bin/env python3
"""cm_seeds.py - write build/seeds_cm.txt: every Thumb push-prologue in the
Cortex-M image at 0x3BC90.

The image is linked at 0 and its functions are entered through pointers, so the
Ghidra decompiler is seeded with the `push {…,lr}` prologues found by objdump
instead of relying on the call graph alone.
"""
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
IMAGE = os.path.join(HERE, "build", "TBT.bin")
OBJDUMP = os.environ.get("ARM_OBJDUMP", "arm-none-eabi-objdump")

def main():
    data = open(IMAGE, "rb").read()
    blob = data[0x3BC90:0x40000]
    path = os.path.join(HERE, "build", "cm_code.bin")
    open(path, "wb").write(blob)
    listing = subprocess.run([OBJDUMP, "-D", "-b", "binary", "-m", "arm",
                              "-M", "force-thumb", path],
                             capture_output=True, text=True, check=True).stdout
    seeds = set()
    for line in listing.splitlines():
        m = re.match(r"\s+([0-9a-f]+):.*\bpush\b", line)
        if m:
            seeds.add(int(m.group(1), 16))
    out = os.path.join(HERE, "build", "seeds_cm.txt")
    open(out, "w").write("".join("%x\n" % a for a in sorted(seeds)))
    print("wrote %s (%d push-prologue seeds)" % (os.path.relpath(out), len(seeds)))

if __name__ == "__main__":
    sys.exit(main())
