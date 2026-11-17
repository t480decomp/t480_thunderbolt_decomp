#!/usr/bin/env python3
"""mkimage.py - splice the assembled code into the vendor image and write build/TBT.rom.

Input : build/TBT.bin      the vendor image fetched by fetch_firmware.sh (hash-checked)
        build/regen/*.bin  code assembled from the listings by asm8051.py / asm_arc.py
Output: build/TBT.rom      the same image with the code and decoded structure replaced

The code comes from the listings; the container words, chain sizes, section names, Digital
header, CP patch records, DP image headers, package metadata and ARC filler come from
`structgen.py`. Everything else is carried from the vendor image, so this is a *code + structure*
build: edit a listing or a structure field, run `make`, and the result differs exactly where you
edited it (the per-region report tells you how many bytes changed).
"""
import hashlib
import os
import sys

import blobs
import structgen

HERE = os.path.dirname(os.path.abspath(__file__))
IMAGE = os.path.join(HERE, "build", "TBT.bin")
ROM = os.path.join(HERE, "build", "TBT.rom")
REGEN = os.path.join(HERE, "build", "regen")

IMAGE_SHA = "fc9c47ff4b16f036a7f49900f9da1983a5db44ca46156238b7b42e636d317388"

# (blob, blob offset where the code starts, destination file offset, expected length, label)
SPLICES = [
    ("dp_out_u_code.bin", 0x200, 0x06454, 0x3CF7, "8051 DP_OUT"),   # 15,607 B of code
    ("dp_in_u_code.bin", 0x200, 0x0C456, 0x65F2, "8051 DP_IN"),     # 26,098 B of code
    ("lc_u_code.bin", 0x000, 0x14258, 0x6870, "8051 LC"),           # 26,736 B
    ("arc_ucode.bin", 0x000, 0x1AACA, 0x015BC, "ARC ucode"),       # 5,564 B
    ("arc_block.bin", 0x000, 0x22800, 0x16600, "ARC block"),        # 91,648 B
    ("cm_code.bin", 0x000, 0x3BC90, 0x4370, "Cortex-M"),            # 17,264 B
]


def main():
    if not os.path.exists(IMAGE):
        sys.exit("missing %s - run 'make fetch' first" % IMAGE)
    vendor = open(IMAGE, "rb").read()
    got = hashlib.sha256(vendor).hexdigest()
    if got != IMAGE_SHA:
        sys.exit("build/TBT.bin is not the analysed image\n  expected %s\n  got      %s"
                 % (IMAGE_SHA, got))

    img = bytearray(vendor)

    # structural regions first: these must not overlap the code splices below
    struct = structgen.structural_regions()
    for (a, b), (_blob, _lo, off, want, _label) in (
            [( (s[0], s[1]), sp) for s in struct for sp in SPLICES]):
        if a < off + want and off < b:
            sys.exit("structural region 0x%05X-0x%05X overlaps %s" % (a, b, _label))
    print("%-28s %-9s %s" % ("structural region", "size", "result"))
    total_diff = 0
    for off, end, data in struct:
        if end - off != len(data):
            sys.exit("structural region 0x%05X: length mismatch" % off)
        img[off:end] = data
        diff = [i for i in range(len(data)) if data[i] != vendor[off + i]]
        total_diff += len(diff)
        where = ""
        if diff:
            where = "  first: %s" % ", ".join("0x%05X" % (off + i) for i in diff[:4])
            if len(diff) > 4:
                where += " …"
        print("%-28s %-9d %s%s" % ("0x%05X-0x%05X" % (off, end), len(data),
                                   "identical to vendor" if not diff else "%d byte(s) changed" % len(diff),
                                   where))
    print()
    print("%-16s %-9s %s" % ("vendor blob", "size", "result"))
    blobdata = blobs.ensure(IMAGE, os.path.join(HERE, "build", "blobs"))
    for blob in blobs.BLOBS:
        name = blob["name"]
        data = blobdata[name]
        want = sum(e - s for s, e in blob["pieces"])
        if len(data) != want:
            sys.exit("blob %s: length mismatch" % name)
        pos = 0
        diff = []
        for start, end in blob["pieces"]:
            piece = data[pos:pos + (end - start)]
            pos += len(piece)
            img[start:end] = piece
            diff.extend(start + i for i in range(len(piece)) if piece[i] != vendor[start + i])
        total_diff += len(diff)
        print("%-16s %-9d %s" % (name, len(data),
              "identical to vendor" if not diff else "%d byte(s) changed" % len(diff)))
    print()
    print("%-14s %-9s %s" % ("code region", "size", "result"))
    for blob_name, lo, off, want, label in SPLICES:
        path = os.path.join(REGEN, blob_name)
        if not os.path.exists(path):
            sys.exit("missing %s - run the assembler step first" % path)
        blob = open(path, "rb").read()
        data = blob[lo:]
        if len(data) != want:
            sys.exit("%s: assembled %d bytes, expected %d.\n"
                     "Changing the size of a code region is not supported by this splice - the\n"
                     "surrounding layout would shift. Keep edits size-preserving, or use the\n"
                     "tbt-firmware-build repository to rebuild the whole image." %
                     (label, len(data), want))
        img[off:off + len(data)] = data
        diff = [i for i in range(len(data)) if data[i] != vendor[off + i]]
        total_diff += len(diff)
        where = ""
        if diff:
            where = "  first: %s" % ", ".join("0x%05X" % (off + i) for i in diff[:4])
            if len(diff) > 4:
                where += " …"
        print("%-14s %-9d %s%s" % (label, len(data),
                                   "identical to vendor" if not diff else "%d byte(s) changed" % len(diff),
                                   where))

    os.makedirs(os.path.dirname(ROM), exist_ok=True)
    open(ROM, "wb").write(bytes(img))
    print()
    print("image : %s (%d bytes)" % (os.path.relpath(ROM, HERE), len(img)))
    print("sha256: %s" % hashlib.sha256(bytes(img)).hexdigest())
    if total_diff:
        print("        vendor %s" % IMAGE_SHA)
        print("\nRESULT: built with %d edited byte(s)" % total_diff)
    else:
        print("\nRESULT: identical to the vendor image (no listing edits)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
