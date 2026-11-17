# Toolchain — how the assemblers are obtained

The build needs eight binaries:

| Tool | Purpose | Source project |
|---|---|---|
| `arc-linux-gnu-as`, `-ld`, `-objcopy` | assemble/link the ARC listing | GNU binutils (GPL-3) |
| `arm-none-eabi-as`, `-ld`, `-objcopy` | assemble the Cortex-M listing (`cm.asm`) | GNU binutils (GPL-3) |
| `sdas8051`, `sdld` | assemble/link the two 8051 listings | SDCC (GPL-2) |

Two things are deliberately **not** required:

* **no root** — nothing is installed system-wide, everything lands in `tools/`;
* **no specific distribution** — there are three independent ways to satisfy the build.

## Tier 1 — it already works

`toolchain.py` resolves each tool in this order:

1. `ARC_AS`, `ARC_LD`, `ARC_OBJCOPY`, `ARM_AS`, `ARM_LD`, `ARM_OBJCOPY`, `SDAS8051`, `SDLD8051` environment variables;
2. the repo-local `tools/bin/…` (static archive) or `tools/usr/…` (Fedora RPM layout);
3. your `PATH` (distribution packages, a hand-built toolchain, …).

So if you already have an ARC binutils and an SDCC `sdas8051`, you can simply do:

```bash
ARC_AS=~/arc/bin/arc-linux-gnu-as ARC_LD=… ARC_OBJCOPY=… SDAS8051=… SDLD8051=… make
```

## Tier 2 — the static toolchain archive (recommended, distro-agnostic)

A tarball containing statically linked x86_64 binaries:

```
toolchain.tar.gz
└── bin/arc-linux-gnu-as, arc-linux-gnu-ld, arc-linux-gnu-objcopy,
          arm-none-eabi-as, arm-none-eabi-ld, arm-none-eabi-objcopy,
          sdas8051, sdld
```

They are linked against **musl**, so they run on any x86_64 Linux regardless of the host glibc
version (the distribution packages need glibc 2.38, which rules out Debian 12 and Ubuntu 22.04).

Use it by pointing the bootstrap at the archive:

```bash
TOOLCHAIN_URL=https://example.org/toolchain.tar.gz \
TOOLCHAIN_SHA256=<sha256> ./bootstrap_tools.sh
```

or commit those two values once so `make` works out of the box:

```bash
echo https://github.com/<owner>/<repo>/releases/download/tools-v1/toolchain.tar.gz > toolchain.url
echo <sha256> > toolchain.sha256
```

`bootstrap_tools.sh` downloads, verifies (if a checksum is given) and unpacks it, then re-runs the
resolver.

### Building the archive yourself

```bash
scripts/build-toolchain.sh            # ~10 minutes, needs gcc/make/bison/flex/curl/tar
```

It downloads binutils 2.47, SDCC 4.6.0, zlib and the musl-cross compiler, builds everything
statically for `arc-linux-gnu` and `arm-none-eabi`, and writes `build/toolchain.tar.gz` plus its SHA-256. The script is
the complete recipe, which also keeps the GPL obligations simple when you redistribute the archive:
the build script is in the repo and the upstream sources are pinned by URL.

## Tier 3 — distribution packages

If no archive is configured, the bootstrap falls back to the distribution:

| Distribution | Command |
|---|---|
| Fedora / RHEL | `sudo dnf install binutils-arc-linux-gnu sdcc innoextract arm-none-eabi-binutils-cs` (or the rootless RPM unpack it does automatically when `dnf`, `rpm2cpio` and `cpio` exist) |
| Debian / Ubuntu | `sudo apt install binutils-arc-linux-gnu sdcc innoextract binutils-arm-none-eabi` |
| Arch | `sudo pacman -S sdcc innoextract binutils arm-none-eabi-binutils` |
| openSUSE | `sudo zypper install cross-arc-linux-gnu-binutils sdcc innoextract cross-arm-none-eabi-binutils` |
| Alpine | `sudo apk add sdcc innoextract binutils-arc-linux-gnu arm-none-eabi-binutils` |
| macOS | `brew install sdcc innoextract` — ARC binutils is not in Homebrew, use tier 2 or set `ARC_AS`/`ARC_LD`/`ARC_OBJCOPY` |

All of these were checked to exist in the Debian trixie and Ubuntu noble indexes (and the Fedora
package is the one the repo's `tools/` was originally unpacked from).

## `innoextract` (fetch step only)

`make fetch` unpacks Lenovo's installer, which needs `innoextract`. It is **not** needed when you
already have the 256 KiB `TBT.bin` payload:

```bash
TBT_SOURCE=/path/to/TBT.bin ./fetch_firmware.sh      # accepts the 256 KiB payload or the 1 MiB image
```

Otherwise it comes from the same package lists above (`innoextract`), or from the checked-in
`fetch_firmware.sh` flow on RPM systems.

## What is deliberately absent

* **AppImage** — an AppImage still links against the host glibc unless it bundles one, so it solves
  the same problem less cleanly than a static archive; and no upstream project publishes AppImages
  for ARC binutils or SDCC.
* **Static glibc builds** — `glibc-static` is not installed by default on most systems (it is
  missing here), which is why the archive is built against musl.

## Static archive for this checkout

The archive produced by `scripts/build-toolchain.sh` for this revision is
`dist/toolchain.tar.gz` (outside git), SHA-256 `8e2e1098494d5c0bef787c8a8e4ba29918724d2b2196456c862d85d7e393723e`.
It contains the eight binaries above and every one is statically linked.  Extract it into
`tools/` (or attach it to a release and write the download URL to `toolchain.url`; the hash is in
`toolchain.sha256`) and `toolchain.py` resolves all assemblers from the archive before consulting
`PATH`.
