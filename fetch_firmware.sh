#!/usr/bin/env bash
# fetch_firmware.sh - obtain the analysed firmware image from Lenovo's public update package.
#
# This repository contains no firmware. This script downloads the official Lenovo Thunderbolt
# update, unpacks it with innoextract, rebuilds the exact 1 MiB image the analysis was performed
# on, and verifies it against the known SHA-256 before writing it into the working tree.
#
#   ./fetch_firmware.sh [output-path]      (default: build/TBT.bin)
#
# Both hashes below are checkpoints: if either mismatches, Lenovo has changed the package and the
# analysis in this repository may no longer describe the image you just downloaded.
set -euo pipefail
cd "$(dirname "$0")"

URL="https://download.lenovo.com/pccbbs/mobiles/n24th13w.exe"
PKG_SHA="a500a93fe6a3728aa6676c70f98cf46785ef15da7c5b1ccd7d3a478d190a28a8"
PAYLOAD_SHA="dbccd2ef36a9e4bb0d60aa938f4295f3959fa134775aa037644686d8c975d297"
IMAGE_SHA="fc9c47ff4b16f036a7f49900f9da1983a5db44ca46156238b7b42e636d317388"
IMAGE_SIZE=1048576

OUT="${1:-build/TBT.bin}"
CACHE="${XDG_CACHE_HOME:-$HOME/.cache}/tbt-firmware"
PKG="$CACHE/n24th13w.exe"

sha256() { command -v sha256sum >/dev/null && sha256sum "$1" | cut -d' ' -f1 \
                                        || shasum -a 256 "$1" | cut -d' ' -f1; }

# 0. someone already has the payload
if [ -n "${TBT_SOURCE:-}" ]; then
    [ -f "$TBT_SOURCE" ] || { echo "error: TBT_SOURCE=$TBT_SOURCE not found" >&2; exit 1; }
    echo "fetch: using supplied payload $TBT_SOURCE"
    SRC="$TBT_SOURCE"
    python3 - "$SRC" "$OUT" "$IMAGE_SIZE" "$IMAGE_SHA" "$PAYLOAD_SHA" <<'PY2'
import hashlib, os, sys
src, out, size, image_sha, payload_sha = sys.argv[1], sys.argv[2], int(sys.argv[3]), sys.argv[4], sys.argv[5]
data = open(src, "rb").read()
digest = hashlib.sha256(data).hexdigest()
if len(data) == size and digest == image_sha:
    image = data                                     # already the padded 1 MiB analysis image
elif digest == payload_sha and len(data) <= size:
    image = data + b"\x00" * (size - len(data))        # the 256 KiB payload from Lenovo
else:
    sys.exit("error: %s is neither the 256 KiB payload nor the 1 MiB image\n"
             "  payload sha256 %s\n  image   sha256 %s\n  got            %s"
             % (src, payload_sha, image_sha, digest))
if hashlib.sha256(image).hexdigest() != image_sha:
    sys.exit("error: rebuilt image hash mismatch")
os.makedirs(os.path.dirname(out) or ".", exist_ok=True)
open(out, "wb").write(image)
print("fetch: wrote %s (%d bytes, sha256 %s)" % (out, len(image), image_sha))
PY2
    echo "fetch: done - $OUT is ready for the pipeline"
    exit 0
fi

# 1. download (cached)
mkdir -p "$CACHE"
if [ -f "$PKG" ] && [ "$(sha256 "$PKG")" = "$PKG_SHA" ]; then
    echo "fetch: using cached package ($PKG)"
else
    echo "fetch: downloading $URL"
    curl -fL --retry 3 --retry-delay 2 -o "$PKG.part" "$URL" || {
        rm -f "$PKG.part"
        echo "error: download failed; place the package at $PKG manually" >&2
        exit 1
    }
    mv "$PKG.part" "$PKG"
fi

got=$(sha256 "$PKG")
if [ "$got" != "$PKG_SHA" ]; then
    echo "error: package hash mismatch" >&2
    echo "  expected $PKG_SHA" >&2
    echo "  got      $got" >&2
    exit 1
fi
echo "fetch: package verified ($PKG_SHA)"
[ -f "$PKG" ] && touch "$PKG" 2>/dev/null || true

# 2. innoextract: env override -> tools/ -> PATH (toolchain.py); only needed for the .exe
INNO="$(python3 -c 'import toolchain; print(toolchain.innoextract() or "")' 2>/dev/null || true)"
if [ -z "$INNO" ]; then
    echo "fetch: innoextract not found; trying bootstrap_tools.sh"
    ./bootstrap_tools.sh || true
    INNO="$(python3 -c 'import toolchain; print(toolchain.innoextract() or "")' 2>/dev/null || true)"
fi
if [ -z "$INNO" ]; then
    cat >&2 <<'MSG'
error: innoextract is needed to unpack Lenovo's installer, and was not found.

  Debian / Ubuntu   sudo apt install innoextract
  Fedora            sudo dnf install innoextract
  Arch              sudo pacman -S innoextract
  macOS             brew install innoextract

Or skip the installer entirely if you already have the 256 KiB TBT.bin payload:

  TBT_SOURCE=/path/to/TBT.bin ./fetch_firmware.sh

MSG
    exit 1
fi

# 3. extract
TMP="$(mktemp -d)"
trap 'rm -rf "$TMP"' EXIT
echo "fetch: extracting with $("$INNO" --version | head -1)"
"$INNO" -e -s -d "$TMP" "$PKG" >/dev/null

SRC="$(find "$TMP" -type f -name 'TBT.bin' | head -1)"
[ -n "$SRC" ] || { echo "error: TBT.bin not found inside the package" >&2; exit 1; }

got=$(sha256 "$SRC")
if [ "$got" != "$PAYLOAD_SHA" ]; then
    echo "error: extracted TBT.bin hash mismatch" >&2
    echo "  expected $PAYLOAD_SHA" >&2
    echo "  got      $got" >&2
    exit 1
fi
echo "fetch: extracted TBT.bin verified ($PAYLOAD_SHA, $(stat -c%s "$SRC" 2>/dev/null || wc -c <"$SRC") bytes)"

# 4. rebuild the 1 MiB analysis image (the payload plus its zero padding)
mkdir -p "$(dirname "$OUT")"
python3 - "$SRC" "$OUT" "$IMAGE_SIZE" "$IMAGE_SHA" <<'PY'
import hashlib, sys
src, out, size, want = sys.argv[1], sys.argv[2], int(sys.argv[3]), sys.argv[4]
data = open(src, "rb").read()
if len(data) > size:
    sys.exit("error: payload larger than %d bytes" % size)
image = data + b"\x00" * (size - len(data))
got = hashlib.sha256(image).hexdigest()
if got != want:
    sys.exit("error: rebuilt image hash mismatch\n  expected %s\n  got      %s" % (want, got))
open(out, "wb").write(image)
print("fetch: wrote %s (%d bytes, sha256 %s)" % (out, len(image), got))
PY

echo "fetch: done - $OUT is ready for the pipeline"
