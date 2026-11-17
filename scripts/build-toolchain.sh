#!/usr/bin/env bash
# build-toolchain.sh - build the portable static toolchain archive used by bootstrap_tools.sh.
#
# Produces build/toolchain.tar.gz containing:
#
#     bin/arc-linux-gnu-as   bin/arc-linux-gnu-ld   bin/arc-linux-gnu-objcopy
#     bin/arm-none-eabi-as   bin/arm-none-eabi-ld   bin/arm-none-eabi-objcopy
#     bin/sdas8051           bin/sdld
#
# All eight are linked statically against musl, so they run on any x86_64 Linux regardless of
# the distribution's glibc (the distribution packages need glibc 2.38, which excludes e.g.
# Debian 12 and Ubuntu 22.04). Attach the archive to a release and point toolchain.url /
# toolchain.sha256 (or TOOLCHAIN_URL / TOOLCHAIN_SHA256) at it.
#
# Sources (GPL-3 binutils, GPL-2 sdcc, zlib licence, MIT musl-cross):
#   https://ftp.gnu.org/gnu/binutils/binutils-2.47.tar.xz
#   https://sourceforge.net/projects/sdcc/files/sdcc/4.6.0/sdcc-src-4.6.0.tar.bz2
#   https://github.com/madler/zlib/releases/download/v1.3.1/zlib-1.3.1.tar.gz
#   https://musl.cc/x86_64-linux-musl-cross.tgz
#
# Notes for the next person:
#   * sdcc's configure also requires boost (for the C compiler, which we do not build), so the
#     two makefiles are generated from their templates instead, with a minimal sdccconf.h.
#   * a plain `-static` in CC/LDFLAGS is *dropped by libtool*, which is why the compiler
#     wrapper below appends -static to link commands only.
#
# Usage: tools/build-toolchain.sh [workdir]     (default: build/toolchain-src)
set -euo pipefail
cd "$(dirname "$0")/.."

ROOT="$PWD"
WORK="${1:-build/toolchain-src}"
case "$WORK" in
    /*) ;;
    *) WORK="$ROOT/$WORK" ;;
esac
OUT="$ROOT/build/toolchain.tar.gz"
BINUTILS_VER=2.47
SDCC_VER=4.6.0
ZLIB_VER=1.3.1

mkdir -p "$WORK" && cd "$WORK"

fetch() {   # fetch <url> <file>
    [ -s "$2" ] && { echo "have $2"; return; }
    echo "downloading $2"
    curl -fL --retry 3 -o "$2.part" "$1"
    mv "$2.part" "$2"
}

# --- musl cross compiler, and a wrapper that forces static linking ----------------------
fetch https://musl.cc/x86_64-linux-musl-cross.tgz musl-cross.tgz
[ -d x86_64-linux-musl-cross ] || tar xzf musl-cross.tgz
MUSL="$WORK/x86_64-linux-musl-cross/bin/x86_64-linux-musl-gcc"
cat > musl-static-cc <<EOF
#!/bin/sh
# link statically; libtool drops a plain -static from CC/LDFLAGS
link=1
for a in "\$@"; do case "\$a" in -c|-E|-S|-M|-MM) link=0 ;; esac; done
if [ "\$link" = 1 ]; then exec "$MUSL" "\$@" -static; else exec "$MUSL" "\$@"; fi
EOF
chmod +x musl-static-cc

# --- zlib (sdcc's configure wants it; only headers/libs are used) ----------------------
ZPREFIX="$WORK/zlib-prefix"
fetch https://github.com/madler/zlib/releases/download/v$ZLIB_VER/zlib-$ZLIB_VER.tar.gz zlib.tar.gz
[ -d zlib-$ZLIB_VER ] || tar xzf zlib.tar.gz
if [ ! -f "$ZPREFIX/lib/libz.a" ]; then
    ( cd zlib-$ZLIB_VER && CC="$MUSL -static" CFLAGS=-O2 \
        ./configure --static --prefix="$ZPREFIX" >/dev/null && make -j"$(nproc)" >/dev/null && make install >/dev/null )
fi

# --- binutils for ARC (static) ---------------------------------------------------------
fetch https://ftp.gnu.org/gnu/binutils/binutils-$BINUTILS_VER.tar.xz binutils.tar.xz
[ -d binutils-$BINUTILS_VER ] || tar xf binutils.tar.xz
if [ ! -x bu/gas/as-new ]; then
    mkdir -p bu && cd bu
    ../binutils-$BINUTILS_VER/configure --target=arc-linux-gnu \
        --disable-nls --disable-werror --disable-shared --disable-gdb --disable-sim \
        --disable-gprofng --disable-gold --disable-libdecnumber --disable-readline \
        --disable-doc CC="$WORK/musl-static-cc" CFLAGS="-O2" LDFLAGS="-static" >/dev/null
    make -j"$(nproc)" all-gas all-ld all-binutils >/dev/null
    cd ..
fi

# --- binutils for ARM (static) ---------------------------------------------------------
if [ ! -x bu-arm/gas/as-new ]; then
    mkdir -p bu-arm && cd bu-arm
    ../binutils-$BINUTILS_VER/configure --target=arm-none-eabi \
        --disable-nls --disable-werror --disable-shared --disable-gdb --disable-sim \
        --disable-gprofng --disable-gold --disable-libdecnumber --disable-readline \
        --disable-doc CC="$WORK/musl-static-cc" CFLAGS="-O2" LDFLAGS="-static" >/dev/null
    make -j"$(nproc)" all-gas all-ld all-binutils >/dev/null
    cd ..
fi

# --- sdcc's assembler and linker (static) ----------------------------------------------
fetch "https://sourceforge.net/projects/sdcc/files/sdcc/$SDCC_VER/sdcc-src-$SDCC_VER.tar.bz2" sdcc.tar.bz2
[ -d sdcc-$SDCC_VER ] || tar xf sdcc.tar.bz2
cd sdcc-$SDCC_VER
cat > sdccconf.h <<'EOF'
/* Minimal config for building only sdas8051 and sdld: asxxxx needs three macros. */
#ifndef __SDCCCONF_H
#define __SDCCCONF_H
#define POSIX 1
#ifndef PATH_MAX
#define PATH_MAX 4096
#endif
#define DIR_SEPARATOR_CHAR '/'
#define DIR_SEPARATOR_STRING "/"
#endif
EOF
python3 - "$ZPREFIX" "$WORK/musl-static-cc" <<'PY'
import re, sys
zprefix, cc = sys.argv[1], sys.argv[2]
common = {
 "VERSION": "4", "VERSIONHI": "6", "VERSIONLO": "0", "VERSIONP": "", "PACKAGE": "sdcc",
 "CC": cc, "CPP": cc + " -E", "CXX": "g++", "CCACHE": "",
 "AR": "ar", "RANLIB": "ranlib", "STRIP": "strip", "MAKEDEP": ":", "MAKEDEP_CXX": ":",
 "LEX": "flex", "YACC": "bison", "AWK": "awk", "PYTHON": "python3",
 "top_builddir": "../..", "top_srcdir": "../..", "srcdir": ".",
 "prefix": "/usr/local", "exec_prefix": "/usr/local", "bindir": "/usr/local/bin",
 "libdir": "/usr/local/lib", "lib_dir_suffix": "/sdcc", "datadir": "/usr/local/share",
 "datarootdir": "/usr/local/share", "docdir": "/usr/local/share/doc",
 "includedir": "/usr/local/include", "include_dir_suffix": "/sdcc",
 "mandir": "/usr/local/share/man", "infodir": "/usr/local/share/info",
 "EXEEXT": "", "CPPFLAGS": "-I%s/include" % zprefix, "CFLAGS": "-O2", "CXXFLAGS": "-O2",
 "WALL_FLAG": "", "LDFLAGS": "-static -L%s/lib" % zprefix, "LIBS": "-lm", "DEFS": "",
 "program_transform_name": "s,x,x,",
 "OPT_DISABLE_DEVICE_LIB": "1", "OPT_DISABLE_NON_FREE": "1", "OPT_DISABLE_PACKIHX": "1",
 "OPT_DISABLE_SDBINUTILS": "1", "OPT_DISABLE_SDCPP": "1", "OPT_DISABLE_UCSIM": "1",
 "OPT_ENABLE_DOC": "",
}
def gen(src, dst):
    out = re.sub(r"@([A-Za-z_0-9]+)@", lambda m: common.get(m.group(1), ""), open(src).read())
    open(dst, "w").write(out)
gen("Makefile.common.in", "Makefile.common")
gen("sdas/as8051/Makefile.in", "sdas/as8051/Makefile")
gen("sdas/linksrc/Makefile.in", "sdas/linksrc/Makefile")
PY
make -C sdas/as8051 -j"$(nproc)" >/dev/null
make -C sdas/linksrc ../../bin/sdld -j"$(nproc)" >/dev/null
cd ..

# --- package ---------------------------------------------------------------------------
rm -rf stage && mkdir -p stage/bin
cp bu/gas/as-new               stage/bin/arc-linux-gnu-as
cp bu/ld/ld-new                stage/bin/arc-linux-gnu-ld
cp bu/binutils/objcopy         stage/bin/arc-linux-gnu-objcopy
cp bu-arm/gas/as-new           stage/bin/arm-none-eabi-as
cp bu-arm/ld/ld-new            stage/bin/arm-none-eabi-ld
cp bu-arm/binutils/objcopy     stage/bin/arm-none-eabi-objcopy
cp sdcc-$SDCC_VER/bin/sdas8051 stage/bin/sdas8051
cp sdcc-$SDCC_VER/bin/sdld     stage/bin/sdld
chmod +x stage/bin/*
for b in stage/bin/*; do strip --strip-unneeded "$b" 2>/dev/null || true; done

mkdir -p "$ROOT/build"
tar -czf "$OUT" -C stage bin

echo
echo "wrote $OUT"
ls -l "$OUT" | awk '{print "  size:", $5, "bytes"}'
( cd stage && sha256sum bin/* )
sha256sum "$OUT"
echo
echo "static linkage check:"
for b in stage/bin/*; do printf "  %-22s %s\n" "$(basename "$b")" "$(ldd "$b" 2>&1 | head -1)"; done
