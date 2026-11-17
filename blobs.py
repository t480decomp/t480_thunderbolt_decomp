#!/usr/bin/env python3
"""blobs.py - extract the still-proprietary regions from the fetched vendor image.

The repository contains no proprietary blobs.  `make fetch` downloads the Lenovo
package and rebuilds build/TBT.bin (hash-checked); this script then slices the
opaque regions into build/blobs/, grouped by the section they belong to so the
directory stays readable:

  cio_dram_body.bin     CIO_DRAM data image
  cp.bin                CP link + 183-byte patch tail (contiguous)
  security.bin          CSS / RSA / SEC-DGST payloads and their residuals
  data_residuals.bin    DROM / ARC-PARM / PPS residual data
  dp_trailers.bin       the two 4-byte DP image trailers

`mkimage.py` reads these files at build time; only offsets and sizes live in
the repository.  A file may contain several non-contiguous pieces; the pieces
are listed in BLOBS and written back to their offsets by mkimage.py.
"""
import hashlib
import os
import sys

IMAGE_SHA = "fc9c47ff4b16f036a7f49900f9da1983a5db44ca46156238b7b42e636d317388"

BLOBS = [
    {"name": "cio_dram_body", "pieces": [(0x21E1A, 0x226CA)]},
    {"name": "cp", "pieces": [(0x619B, 0x6254)]},
    {"name": "security", "pieces": [
        (0x39214, 0x39278),   # CSS body + residual
        (0x39414, 0x39518),   # RSA value + residual
        (0x3A014, 0x3A114),   # SEC DGST digest + residual
    ]},
    {"name": "data_residuals", "pieces": [
        (0x4271, 0x4278),     # DROM tail
        (0x4665, 0x46B2),     # ARC PARM extended blocks
        (0x46D8, 0x471F),
        (0x4730, 0x4746),
        (0x3B044, 0x3B05C),   # PPS tail
    ]},
    {"name": "dp_trailers", "pieces": [(0xC250, 0xC254), (0x14252, 0x14256)]},
]

TOTAL = sum(e - s for b in BLOBS for s, e in b["pieces"])


def _check_image(path):
    data = open(path, "rb").read()
    got = hashlib.sha256(data).hexdigest()
    if got != IMAGE_SHA:
        sys.exit("%s is not the analysed image\n  expected %s\n  got      %s" %
                 (path, IMAGE_SHA, got))
    return data


def extract(image_path, outdir):
    data = _check_image(image_path)
    os.makedirs(outdir, exist_ok=True)
    out = {}
    for blob in BLOBS:
        chunks = []
        for start, end in blob["pieces"]:
            chunk = data[start:end]
            if len(chunk) != end - start:
                sys.exit("short read for %s (0x%05X-0x%05X)" % (blob["name"], start, end))
            chunks.append(chunk)
        payload = b"".join(chunks)
        with open(os.path.join(outdir, blob["name"] + ".bin"), "wb") as f:
            f.write(payload)
        out[blob["name"]] = payload
    print("blobs: extracted %d files (%d ranges, %d bytes) into %s" %
          (len(BLOBS), sum(len(b["pieces"]) for b in BLOBS), TOTAL, outdir))
    return out


def load(outdir):
    out = {}
    for blob in BLOBS:
        path = os.path.join(outdir, blob["name"] + ".bin")
        if not os.path.exists(path):
            return None
        chunk = open(path, "rb").read()
        want = sum(e - s for s, e in blob["pieces"])
        if len(chunk) != want:
            sys.exit("%s: expected %d bytes, got %d" % (path, want, len(chunk)))
        out[blob["name"]] = chunk
    return out


def ensure(image_path, outdir):
    """Load existing blobs, or extract them from the vendor image."""
    data = load(outdir)
    if data is not None:
        return data
    return extract(image_path, outdir)


if __name__ == "__main__":
    if len(sys.argv) != 3:
        sys.exit("usage: blobs.py <TBT.bin> <blob-directory>")
    extract(sys.argv[1], sys.argv[2])
