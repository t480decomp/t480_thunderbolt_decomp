# Status — final snapshot (2026-11-17)

## Build result

`make verify` reproduces the complete 1 MiB vendor image exactly:

```
sha256 fc9c47ff4b16f036a7f49900f9da1983a5db44ca46156238b7b42e636d317388
```

The build no longer carries a vendor image for any region except `CIO_IRAM`; every other byte is
assembled from the listings, decoded structure, data extracted at build time, or declared fill.

## Proprietary blobs

The repository contains no proprietary blobs. `make fetch` downloads and verifies the Lenovo
package, then `blobs.py` extracts the opaque data regions into `build/blobs/` (5 grouped files,
12 ranges, 3,234 B). `mkimage.py` reads them at build time; `build/` is gitignored.

These are **not new unknowns** — they are opaque data payloads whose exact bytes cannot be derived
from source, moved out of the repository for hosting:

| Blob | Bytes | What it is | Why it is extracted |
|---|---:|---|---|
| `cio_dram_body.bin` | 2,224 | `CIO_DRAM` PHY register-init/test data image | data, not code; only the 0x40-byte config is decoded |
| `cp.bin` | 185 | CP link (2 B) + 183-byte CP patch tail | the tail is not a clean TLV continuation |
| `security.bin` | 616 | CSS / RSA / SEC-DGST payloads | keys, digests and records; opaque data |
| `data_residuals.bin` | 201 | DROM / ARC-PARM / PPS residual data | residual data not decoded |
| `dp_trailers.bin` | 8 | the two 4-byte DP image trailers | likely checksums; not standard CRC32/Adler32 |

The only region that is **not** reproduced from a recovered representation remains `CIO_IRAM`
(23,888 B): it is the CIO PHY/link microengine ucode, unknown ISA, and is still carried in place
from the vendor image.


## Coverage

| Category | Bytes | Share of used 256 KiB |
|---|---:|---:|
| Recovered code listings (8051 DP/LC + ARC) | 165,653 | 63.2 % |
| Cortex-M code (assembly listing `cm.asm`) | 17,264 | 6.6 % |
| Decoded structure/data (headers, tables, EE/DROM, security, `CIO_DRAM`, …) | 18,166 | 6.9 % |
| Declared fill (container FF, DP zero tails, residual padding) | 37,173 | 14.2 % |
| **Accounted** | **238,256** | **90.9 %** |
| **Carried: `CIO_IRAM`** | **23,888** | **9.1 %** |

The 768 KiB beyond the used 256 KiB is all zero and is declared fill, so the full 1 MiB is
**1,024,688 B covered (97.72 %)**; only the same 23,888 B `CIO_IRAM` block is carried.

## Cortex-M listing

`cm.asm` (17,264 B, linked at 0) is now a build source rather than a binary patch. `asm_cm.py`
assembles it with `arm-none-eabi-as`; `mkimage.py` splices the result at `0x3BC90` and compares
every byte. The listing uses labels for in-image branches, `.word` for literal pools and
`.inst.n`/`.inst.w` for 370 encodings GNU as cannot reproduce identically (mostly literal/data
words); the round trip is byte-exact. `scripts/gen_cm_listing.py` regenerates the listing from
`build/TBT.bin` and verifies it, and the decompiled C remains in `decomp/cm_decomp.c`.

## Core inventory (firmware-visible)

| Block | Core | Firmware | Role |
|---|---|---|---|
| Control Port (CP) | 8051 | `CP_UCODE` TLV patch | Host control protocol / mailbox, bring-up |
| Link Controller (LC) | 8051 | `LC_UCODE` (26.7 KB) | Thunderbolt link layer |
| DP OUT | 8051 | `HDP_OUT_UCODE` | DisplayPort out tunneling |
| DP IN | 8051 | `HDP_IN_UCODE` | DisplayPort in tunneling |
| ARC | ARCompact | ARC base image (91.6 KB) + `ARC_UCODE` (5.6 KB) | Main application/fabric firmware |
| CIO | Cortex-M3-class ARMv7-M | `cm.asm` (17.3 KB) | CIO management: lane windows, doorbell, mailbox, power |
| CIO PHY/link | custom microengine | `CIO_IRAM_UCODE` (23.9 KB) + `CIO_DRAM` config | SerDes/link training and PHY adaptation |

The USB 3.1 xHCI controller and the PCIe switch may contain additional non-NVM ROM/logic; the six
cores above are the ones with firmware images in this NVM.

## `CIO_IRAM` — the one remaining unknown

- 23,888 B at `0x1C088–0x21DD8`; the datasheet calls it the **“cio_iram Controller uCode Patch”**,
  i.e. the control store of the CIO PHY/link microengine, not the Cortex-M3 (which is the CM code).
- Likely purpose: high-speed SerDes/link training, equalization, lane margining, CIO link state
  machines, LFPS/Gen1/Gen2/20G/10G rate and power transitions.
- Format findings: 13-byte header shared with Titan Ridge
  (`06 09 00 00 2F 12 22 22 00 00 00 E0 63`), 573-byte family prefixes, 16-bit operands and
  relocation between T470/T480, high entropy, no byte-periodic or 3-byte instruction grid.
- Standard ISAs tested negative: 8051, ARC, ARM/Thumb, MSP430, MSP430X, Xtensa, V850, PIC-16,
  HCS12, M16C, MIPS16.
- Wider corpus: four Alpine Ridge variants (23,856–24,556 B) and two Titan Ridge variants
  (36,624–36,848 B); OEM-independent within a generation, only the 13-byte header is common
  across generations.
- Hardware: the live JHL6240 runs the same NVM 23.0 image; the NHI BARs expose only the register
  block/mailbox and MSI-X table, with no documented CIO-core debug/IRAM window. Physical
  JTAG/DFT to the CIO core would be required for an execution trace.

## Documentation

- [`REPORT.md`](REPORT.md) — full reverse-engineering report (layout, sections, ucode
  chain, cores, security, verification).
- [`FINDINGS.md`](FINDINGS.md) — probe log: DP/LC/ARC/CP analysis, Cortex-M identification,
  `CIO_IRAM` differential and all negative format tests, live-hardware notes.
- [`DECOMP.md`](DECOMP.md) — decompilation methodology and coverage.
- [`PROVENANCE.md`](PROVENANCE.md) — image provenance and hashes.
- [`TOOLCHAIN.md`](TOOLCHAIN.md) — toolchain layers.
- [`REGENERATION.md`](REGENERATION.md) — regeneration notes.
- [`isa_sweep.py`](isa_sweep.py) — the pseudo-disassembly ISA screen used for `CIO_IRAM`.

## Reproduce

```bash
make fetch      # download Lenovo N24TF23W and rebuild build/TBT.bin (hash-checked)
make tools      # provide sdas8051 + arc-linux-gnu binutils
make verify     # assemble everything and fail unless the image is byte-identical
```
