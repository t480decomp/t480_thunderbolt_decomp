# Provenance — where the analysed image comes from

This repository contains **no vendor firmware**. Everything here is either analyst-written text or
disassembly/decompilation derived from one publicly distributed image, identified below by hash.

## The image

| Property | Value |
|---|---|
| File | `TBT.bin` |
| Size | 1,048,576 bytes (1 MiB) |
| SHA-256 | `fc9c47ff4b16f036a7f49900f9da1983a5db44ca46156238b7b42e636d317388` |
| Product | Lenovo ThinkPad T480 Thunderbolt firmware **N24TF23W** (20.22.05.30), NVM version 23 |
| Controller | Intel **JHL6240** — "Alpine Ridge LP", single port (`8086:15c0` bridge / `15bf` NHI / `15c1` USB) |

### How it is obtained

`TBT.bin` is not distributed as a raw file. It is reconstructed from Lenovo's public update package:

```
https://download.lenovo.com/pccbbs/mobiles/n24th13w.exe
sha256 a500a93fe6a3728aa6676c70f98cf46785ef15da7c5b1ccd7d3a478d190a28a8   (Lenovo publishes this hash)
```

1. download the package;
2. `innoextract -e -s -d <out> n24th13w.exe` → yields `TBT.bin` (262,144 bytes);
3. zero-pad to 1 MiB → hash must equal `fc9c47ff…`.

The 768 KiB tail is padding; the meaningful content ends at `0x3FFE0`. The 262,144-byte package
payload hashes to `dbccd2ef36a9e4bb0d60aa938f4295f3959fa134775aa037644686d8c975d297`.

`tbt-firmware-build/fetch_firmware.sh` performs all three steps and refuses to continue if either
hash does not match.

## Independent confirmations recorded during the analysis

| Check | Result |
|---|---|
| Live controller read (`/sys/bus/thunderbolt/devices/0-0/nvm_active0/nvmem`, 516,096 B) | **byte-identical** to `TBT.bin[0x4000:0x82000]`; `nvm_version` reports `23.0` |
| Kernel-visible identity (`vendor 0x109`, `device 0x1707`) | matches the DROM header decoded at `0x4210` |
| Version pair | NVM 20 image (2019, `n1qth08w.exe`) differs only where the `PATCHES` section length changes |

## Other images used for comparison

These were used for cross-version checks and are **not** included in the repository:

| File | Package | SHA-256 |
|---|---|---|
| `TBT.bin` (256 KiB) | `n24th13w.exe` | `dbccd2ef36a9e4bb0d60aa938f4295f3959fa134775aa037644686d8c975d297` |
| `ASSISTTBT.bin` | `n24th13w.exe` | `d4ed51b41bb280f7deeaa685b8651659eccf58f37bcbeb65e43eaf1b7e2f136d` |
| `AssistTBT.bin` (T470) | `n1qth08w.exe` | `de29ecc4e3c9efaf433ac39c8be026aedbc3d33d804f842f890ab685b357467a` |
| `n1qth08w.exe` | Lenovo, 2019 | `0a9fae36774c616567bc65e4ecef3c8cd2b952234a06b516d000c2890fe530ab` |

## Licensing

The firmware is Intel/Lenovo proprietary material. This repository contains only derived analysis
(disassembly text, decompiled pseudocode, offsets, hashes) and unpublished notes by the authors —
no vendor binaries. If you publish redistribution of derived listings, check the licensing position
in your jurisdiction; the hashes above let anyone obtain and verify the original independently.
