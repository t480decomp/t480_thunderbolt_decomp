#!/usr/bin/env python3
"""asm_cm.py - assemble the Cortex-M listing into build/regen/cm_code.bin.

    cm.asm -> arm-none-eabi-as -mthumb -> objcopy -O binary -> build/regen/cm_code.bin

The listing is linked at 0 (the image's link address); mkimage.py splices it at
NVM offset 0x3BC90 and compares every byte with the fetched vendor image.
"""
import os
import subprocess
import sys

import toolchain

HERE = os.path.dirname(os.path.abspath(__file__))
REGEN = os.path.join(HERE, "build", "regen")
SIZE = 0x4370


def main():
    asm = toolchain.require(toolchain.arm_as(), "arm-none-eabi-as")
    objcopy = toolchain.require(toolchain.arm_objcopy(), "arm-none-eabi-objcopy")
    os.makedirs(REGEN, exist_ok=True)
    obj = os.path.join(REGEN, "cm_code.o")
    out = os.path.join(REGEN, "cm_code.bin")
    r = subprocess.run([asm, "-mthumb", "-o", obj, os.path.join(HERE, "cm.asm")])
    if r.returncode:
        sys.exit("arm-none-eabi-as failed")
    subprocess.run([objcopy, "-O", "binary", obj, out], check=True)
    data = open(out, "rb").read()
    if len(data) != SIZE:
        sys.exit("cm.asm assembled to %d bytes, expected %d" % (len(data), SIZE))
    print("cm: assembled %d bytes -> %s" % (len(data), os.path.relpath(out, HERE)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
