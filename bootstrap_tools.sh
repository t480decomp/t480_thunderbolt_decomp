#!/usr/bin/env bash
# bootstrap_tools.sh - make the assemblers available without assuming a distribution.
#
# Order of preference:
#
#   1. already available        env override (ARC_AS …), tools/, or PATH      -> nothing to do
#   2. static toolchain tarball  TOOLCHAIN_URL / ./toolchain.url              -> download + verify
#   3. distro package            apt / dnf / pacman / zypper / apk / brew      -> printed, or
#                                auto-unpacked on RPM systems (no root needed)
#
# Tier 2 is the distribution-agnostic path: the tarball holds statically linked x86_64 binaries
# (built with musl, so they do not care about your glibc version):
#
#     bin/arc-linux-gnu-{as,ld,objcopy}  bin/arm-none-eabi-{as,ld,objcopy}
#     bin/sdas8051   bin/sdld
#
# Create it with scripts/build-toolchain.sh and attach it to a release; then either set
# TOOLCHAIN_URL/TOOLCHAIN_SHA256 or drop those values into ./toolchain.url and ./toolchain.sha256.
#
# Usage: ./bootstrap_tools.sh [--print-install] [--install] [--force]
set -euo pipefail
cd "$(dirname "$0")"

WANT="sdas8051 sdld as ld objcopy arm_as arm_ld arm_objcopy"  # innoextract is only needed for 'make fetch'

have_cmd() { command -v "$1" >/dev/null 2>&1; }

# --- 1. already available? -------------------------------------------------------------
resolved() {
    python3 - "$@" <<'PY'
import sys, toolchain
missing = [t for t in sys.argv[1:] if not toolchain.find(t)]
print(" ".join(missing))
sys.exit(0 if not missing else 1)
PY
}
# ARM binutils for the Cortex-M listing (cm.asm)
if have_cmd arm-none-eabi-as && have_cmd arm-none-eabi-objcopy; then
    echo "tools: arm-none-eabi binutils available"
else
    echo "tools: warning: arm-none-eabi-as/objcopy not found; cm.asm will not build" >&2
    echo "       install binutils-arm-none-eabi (Debian/Ubuntu), arm-none-eabi-binutils-cs (Fedora)," >&2
    echo "       arm-none-eabi-binutils (Arch) or the equivalent" >&2
fi

if [ "${1:-}" != "--force" ] && resolved $WANT >/dev/null; then
    echo "tools: already available"
    python3 toolchain.py | sed 's/^/  /'
    exit 0
fi

# --- configuration ---------------------------------------------------------------------
TOOLCHAIN_URL="${TOOLCHAIN_URL:-}"
TOOLCHAIN_SHA256="${TOOLCHAIN_SHA256:-}"
[ -z "$TOOLCHAIN_URL" ] && [ -f toolchain.url ] && TOOLCHAIN_URL="$(tr -d '\r\n' < toolchain.url)"
[ -z "$TOOLCHAIN_SHA256" ] && [ -f toolchain.sha256 ] && TOOLCHAIN_SHA256="$(tr -d '\r\n' < toolchain.sha256)"

sha256() { if have_cmd sha256sum; then sha256sum "$1" | cut -d' ' -f1
           elif have_cmd shasum; then shasum -a 256 "$1" | cut -d' ' -f1; fi; }

# --- 2. static toolchain tarball -------------------------------------------------------
if [ -n "$TOOLCHAIN_URL" ]; then
    mkdir -p tools
    TB=tools/toolchain.tar.gz
    echo "tools: downloading $TOOLCHAIN_URL"
    if have_cmd curl; then curl -fL --retry 3 -o "$TB.part" "$TOOLCHAIN_URL"
    elif have_cmd wget; then wget -O "$TB.part" "$TOOLCHAIN_URL"
    else echo "error: need curl or wget to download the toolchain" >&2; exit 1; fi
    mv "$TB.part" "$TB"

    if [ -n "$TOOLCHAIN_SHA256" ]; then
        got="$(sha256 "$TB")"
        if [ "$got" != "$TOOLCHAIN_SHA256" ]; then
            echo "error: toolchain archive hash mismatch" >&2
            echo "  expected $TOOLCHAIN_SHA256" >&2
            echo "  got      $got" >&2
            exit 1
        fi
        echo "tools: archive verified ($TOOLCHAIN_SHA256)"
    else
        echo "tools: warning: no TOOLCHAIN_SHA256 set, skipping archive verification" >&2
    fi

    tar -xzf "$TB" -C tools
    chmod +x tools/bin/* 2>/dev/null || true
    rm -f "$TB"
    if resolved $WANT >/dev/null; then
        echo "tools: static toolchain ready"
        python3 toolchain.py | sed 's/^/  /'
        exit 0
    fi
    echo "error: the tarball did not provide bin/{arc-linux-gnu-*,arm-none-eabi-*,sdas8051,sdld}" >&2
    exit 1
fi

# --- 3a. rootless RPM unpack (Fedora/RHEL, no root) ------------------------------------
if have_cmd dnf && have_cmd rpm2cpio && have_cmd cpio; then
    echo "tools: no TOOLCHAIN_URL set - unpacking distribution packages into tools/"
    mkdir -p tools
    for p in binutils-arc-linux-gnu sdcc arm-none-eabi-binutils-cs; do
        if compgen -G "tools/${p}-*.rpm" >/dev/null; then
            echo "tools: ${p} rpm already present"
        else
            dnf download --destdir tools "$p"
        fi
    done
    for r in tools/*.rpm; do
        case "$r" in
            *binutils-arc-linux-gnu-*|*sdcc-*|*arm-none-eabi-binutils-cs-*) ;;
            *) continue ;;
        esac
        echo "tools: unpacking $(basename "$r")"
        rpm2cpio "$r" | (cd tools && cpio -idm --quiet)
    done
    if resolved $WANT >/dev/null; then
        echo "tools: done"
        python3 toolchain.py | sed 's/^/  /'
        exit 0
    fi
fi

# --- 3b. tell the user what to install -------------------------------------------------
INSTALL=""
if   have_cmd apt-get; then INSTALL="sudo apt install binutils-arc-linux-gnu sdcc innoextract binutils-arm-none-eabi"
elif have_cmd dnf;     then INSTALL="sudo dnf install binutils-arc-linux-gnu sdcc innoextract arm-none-eabi-binutils-cs"
elif have_cmd pacman;  then INSTALL="sudo pacman -S sdcc innoextract binutils arm-none-eabi-binutils"
elif have_cmd zypper;  then INSTALL="sudo zypper install cross-arc-linux-gnu-binutils sdcc innoextract cross-arm-none-eabi-binutils"
elif have_cmd apk;     then INSTALL="sudo apk add sdcc innoextract binutils-arc-linux-gnu arm-none-eabi-binutils"
elif have_cmd brew;    then INSTALL="brew install sdcc innoextract   # ARC binutils: not in brew, see TOOLCHAIN_URL"
fi

cat >&2 <<MSG

error: the assemblers are not available.

Three ways to fix this, pick one:

  1. Use a prebuilt static toolchain (works on any x86_64 Linux, no root):
       TOOLCHAIN_URL=<url to toolchain.tar.gz> TOOLCHAIN_SHA256=<sha256> ./bootstrap_tools.sh
     or put those two values in ./toolchain.url and ./toolchain.sha256. Build the archive
     yourself with scripts/build-toolchain.sh.

  2. Install your distribution's packages:
       ${INSTALL:-Fedora/RHEL:   sudo dnf install binutils-arc-linux-gnu sdcc innoextract
       Debian/Ubuntu: sudo apt install binutils-arc-linux-gnu sdcc innoextract
       Arch:          sudo pacman -S sdcc innoextract binutils
       macOS:         brew install sdcc innoextract}

  3. Point at binaries you already have:
       ARC_AS=… ARC_LD=… ARC_OBJCOPY=… SDAS8051=… SDLD8051=… make

MSG
exit 1
