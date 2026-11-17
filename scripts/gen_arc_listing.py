#!/usr/bin/env python3
"""gen_arc_listing.py - regenerate the ARC objdump listings from the vendor image.

The ARC sections are code for the same core; binutils disassembles a wrapped raw
blob.  Two sections are described:

    main   0x22800 ARC_CACHE firmware image       -> arc/arc_code_22800.asm
    ucode  0x1AACA ARC controller ucode patch      -> arc/arc_ucode_1aaca.asm

The ucode listing is linked at logical 0: the patch is overlaid at the start of the
ARC address space and its branches directly target the base image by address.
"""
import os
import struct
import subprocess
import sys

HERE = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
EM_ARC_COMPACT = 93

SECTIONS = {
    "main": (0x22800, 0x16600, 0x22800, "arc/arc_code_22800.asm", 0x22814),
    "ucode": (0x1AACA, 0x015BC, 0x00000, "arc/arc_ucode_1aaca.asm", 0x00080),
}


def wrap(blob, base, entry):
    """minimal ELF32 EXEC carrying the blob at `base` (same layout as the build repo)"""
    ehsize, phentsize, shentsize = 52, 32, 40
    data_off = 0x1000
    shstr = b"\x00.text\x00.shstrtab\x00"
    shstr_off = data_off + len(blob)
    phoff = ehsize
    shoff = shstr_off + len(shstr)
    e = bytearray()
    e += b"\x7fELF" + bytes([1, 1, 1, 0]) + b"\x00" * 8
    e += struct.pack("<HHIIIIIHHHHHH", 2, EM_ARC_COMPACT, 1, entry, phoff, shoff, 0,
                     ehsize, phentsize, 1, shentsize, 3, 2)
    e += struct.pack("<IIIIIIII", 1, data_off, base, base, len(blob), len(blob), 5, 4)
    e += b"\x00" * (data_off - len(e))
    e += blob
    e += shstr
    e += b"\x00" * shentsize
    e += struct.pack("<IIIIIIIIII", 1, 1, 6, base, data_off, len(blob), 0, 0, 4, 0)
    e += struct.pack("<IIIIIIIIII", 7, 3, 0, 0, shstr_off, len(shstr), 0, 0, 1, 0)
    return bytes(e)


def main():
    image = open(os.path.join(HERE, "build", "TBT.bin"), "rb").read()
    objdump = os.environ.get("ARC_OBJDUMP")
    if not objdump:
        for cand in (os.path.join(HERE, "tools", "usr", "bin", "arc-linux-gnu-objdump"),
                     os.path.join(HERE, "tools", "bin", "arc-linux-gnu-objdump")):
            if os.path.exists(cand):
                objdump = cand
                break
    if not objdump or not os.path.exists(objdump):
        sys.exit("missing arc-linux-gnu-objdump: set ARC_OBJDUMP or copy it to tools/")
    os.makedirs(os.path.join(HERE, "arc"), exist_ok=True)
    wanted = [a for a in sys.argv[1:] if not a.startswith("-")] or sorted(SECTIONS)
    for name in wanted:
        lo, length, base, listing, entry = SECTIONS[name]
        blob = image[lo:lo + length]
        elf = os.path.join(HERE, "build", "arc_%s.elf" % name)
        open(elf, "wb").write(wrap(blob, base, entry))
        with open(os.path.join(HERE, listing), "wb") as f:
            subprocess.run([objdump, "-d", os.path.relpath(elf, HERE)],
                           cwd=HERE, stdout=f, check=True)
        print("wrote %s (%d bytes blob, base 0x%05X)" % (listing, len(blob), base))


if __name__ == "__main__":
    main()
