#!/usr/bin/env python3
"""structgen.py - structural (non-code) regions of the Alpine Ridge NVM image.

Ported from the tbt-firmware-build generator.  Each region is assembled from the
decoded description (container words, chain sizes, section names, Digital header,
CP patch records, DP image headers, package metadata, ARC filler) rather than
carried from the vendor image.  The code regions remain the listings' job.
"""
import struct


CONTAINER = struct.pack("<II", 0x4000, 0x80000) + b"\x00" * 8

# ucode-chain length prefixes: u16 dword-count at the start of each section (fwupd layout)
CHAIN = [
    (0x05C10, 0x0190),   # PATCHES          (2022 image)
    (0x06252, 0x1800),   # DP_OUT
    (0x0C254, 0x2000),   # DP_IN
    (0x14256, 0x1A1C),   # descriptor section
    (0x1AAC8, 0x056F),   # RAM-pointer section
    (0x1C086, 0x1754),   # data section
    (0x21DD8, 0x023C),   # DRAM ucode (body starts "CIO_PHY_SECTION:")
]



# --- decoded structure that rom.py generates itself ---
CONTAINER_CONSTS = [
    (0x00800, bytes.fromhex("19 00 00 00 00 00 00 00")),
    (0x00FFC, bytes.fromhex("10 70 03 00")),
]

SECTION_NAMES = [
    (0x04200, 'DROM'),
    (0x04600, 'ARC PARM'),
    (0x04800, 'EE_CIO'),
    (0x04A00, 'EE_PCIE'),
    (0x04C00, 'EE_DMA'),
    (0x04E00, 'EE_USB_PA'),
    (0x05000, 'EE_USB_PB'),
    (0x05400, 'EE_PCIE_PHI'),
    (0x05800, 'EE_ANA_COMM'),
    (0x05C00, 'PATCHES'),
    (0x39200, 'CSS'),
    (0x39400, 'RSA+EXP'),
    (0x39600, 'skip list'),
    (0x3A000, 'SEC DGST'),
    (0x3B000, 'PPS'),
]

def name_block(name):
    n = name.encode("ascii")
    if len(n) <= 8:
        n = n.ljust(8, b" ")
    return (n + b"\xff" * 16)[:16]

SECTION_TRAILERS = [
    (0x0C250, "fc e1 e9 ea"),
    (0x14252, "cc 43 a6 4e"),
]

PATTERNS = [(0x38E00, b"\xe0\x78" * 266)]

DIGITAL_FIELDS = [
    (0x00, 'reserved[2]', "3b 01"),
    (0x02, 'available_sections', "7f"),
    (0x03, 'ucode_addr (LE)', "10 1c"),
    (0x05, 'device_id (LE)', "c0 15 b0 00"),
    (0x09, 'version', "00 23"),
    (0x0B, 'reserved[5]', "00 a0 ad 00 35"),
    (0x10, 'flags_host', "06"),
    (0x11, 'reserved[52]', "11 bf 05 50 50 53 53 83 04 2d 80 80 f0 a0 23 24 00 24 00 24 00 24 00 2e 00 2e 00 2e c0 2e f0 00 00 00 00 2a 27 2f ff c0 15 00 13 80 01 00 00 05 2d 2b ad 2d"),
    (0x45, 'flash_size', "2b"),
    (0x46, 'reserved[47]', "aa aa 06 28 28 04 95 56 79 a6 03 40 41 20 a0 1b c6 1b 39 b1 1b b1 e4 e4 80 00 20 86 80 00 c0 15 00 00 01 00 00 00 41 50 50 20 45 4d 20 20 c6"),
    (0x75, 'arc_params (LE)', "10 06 00 00"),
    (0x79, 'reserved[2]', "3e a7"),
    (0x7B, 'flags_is_native', "27"),
    (0x7C, 'reserved[146]', "fb 00 00 00 00 a0 40 06 0c 80 84 e2 00 38 00 31 00 00 c8 09 82 20 10 00 00 00 76 82 00 74 22 00 00 00 04 80 1a 10 65 33 11 22 d2 fc 33 0a 00 00 4e e4 4e 00 00 01 0f 05 00 00 1a 30 95 1b 00 00 00 ff 03 10 08 00 14 10 0a 00 39 10 0c 00 0b 10 0e 00 19 10 10 00 3f 00 00 00 00 00 00 00 00 10 14 00 46 10 18 00 05 00 00 00 00 00 00 00 b2 02 0b 4b fd f1 c1 ff 1f fe ff ff ff ff ff ff 01 00 1f 1f 08 07 06 1f 01 1f 1f 1f 1f 00 00 00 12 12 12 12"),
    (0x10E, 'drom (LE)', "10 02 00 00"),
    (0x112, 'reserved[14]', "00 00 00 00 00 09 0a 00 00 00 00 00 00 00"),
]
DIGITAL_TABLE = "00 00 00 00 00 00 00 00 00 ff 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 00 00 00 00 03 00 00 61 1e 10 28 00"   # 0x4120-0x4145 constant head, 0xFF afterwards

PATCHES_END = 0x619B   # end of the 16-record TLV stream (the 183-byte tail stays a part)
PATCHES_TLV = [
    (0x90, "0d"),
    (0x00, ""),
    (0x10, "f0 71 07 08 ff 7f 07 02 f0 50 06 04 5c 1a 05 00 78 3a 05 10 00 8e 06 08 02 ac 00 02 00 8e 06 28 0f 84 03 0a 02 ac 00 02 00 8e 06 28 0f 80 03 a0 c0 80 05 10 40 80 0a a4 43 93 05 36 40 92 0a 02 1f 00 0a c2 f0 e0 02 24 46 92 05 c0 f0 e2 02 68 00 ac 00 02 00 8e 06 28 0f 84 03 be f0 e4 02 02 70 a4 0a 04 b0 44 06 fe ff 8e 03 88 f7 7f 07 02 f0 10 06 22 80 93 05 c2 f0 60 01 02 1f 00 0a c2 f0 e0 02 08 70 a4 0a 04 b0 44 06 fe ff 8e 03 88 f7 7f 07 02 f0 10 06 22 08 92 05 20 40 92 0a c0 f0 60 01 02 1f 00 0a c0 f0 e0 02 bf fc 40 08 04 f0 04 06 fd f4 40 08 ce f0 64 01 bc f0 e4 02 c2 f0 60 01 fd f4 40 08 ce f0 64 01 c2 f0 e4 02 c0 f0 60 01 fd f4 40 08 ce f0 64 01 c0 f0 e4 02 fe ff a1 09 1c f0 00 08 09 04 3a 20 e8 f1 73 07 68 f9 7f 07 02 f0 00 06 20"),
    (0x5D, "05 f8 f0 73 07 d0 f0 6c 01 02 30 f0 0a b9 4c be 07 d2 f0 60 01 06 40 80 0a 0c 7f 00 0a be f0 62 01 06 40 92 0a 02 3f 70 0a b9 2c be 07 90 70 d2 0a 0a 3f 70 0a b9 2c fe 07 02 6f 50 0a 10 30 fa 0a a5 2c fe 07 bc f0 60 01 0a 5f 00 0a b6 fc 00 08 4e 30 fa 0a b1 3c fe 07 c0 f0 60 01 50 60 da 0a 0a 5f 00 0a b6 fc 00 08 c2 f0 60 01 10 60 da 0a 0a 5f 00 0a 18 f8 00 08 ce f0 60 01 0c 5f 00"),
    (0x0A, "f8 00 08 0e 00 a0 09 fe 01 a4 00 10 2c 9e 08 08 30 f2 0a d1 2c fe 07 c2"),
    (0xF0, "01 06 40 b2 0a 06 5f 00 0a d8 fc 00 08 c0 f0 60 01 08 60 b2 0a 06 40 b6 0a 06 5f 00 0a 20 80 81 05 00 2f 24 0a 01 06 80 09 10 0c 9e 08 e9 7c de 07 02 40 a4 0a 0e 20 a4 0a ea fc 00 08 02 40 a4 0a 00 00 80 0c 00 06 80 09 02 70 92 0a fe 01 a4 0a 00 f0 60 09 9e 02 7a 30 00 16 21 05 00 a2 11"),
    (0x05, "f5 00 08 d8 05 7d 40 02 30 fc 0a 07 4d be 07 06 30 fc 0a 07 4d be 07 2d fb 40 08 b2 fb 00 08 04 f0 28 06 03 0d de 07 04 f0 0c 06 15 fd 40 08 02 70 8c 0a 15 fd 40 08 02 fd 00 08 04 f0 1c"),
    (0x06, "00 a0 09 f8 f0 73 07 80 79 da 04 02 5c 1a 05 00 ff 3f 07 18 f0 71 07 6e 00 ac 00 02 00 8e 06 28 0f 84 03 00 a2 15 05 08 f1 71 07 04 00 54 06 2e 0f 8e 03 04 f0 62 06 e8 f1 73 07 00 f0 60 09 be 00 9b 50 86 f3 62 03 02 00 cc 0a 00 30 f8 0a 69 4d fe 07 02 60 cc 0a 08 ff 7f 07 02 f0 50 06 88 79 da 04 02 5c 1a 05 10 00 8e 06 18 f0 71 07 6e 00 ac 00 02 00 8e 06 28 0f 84 03 24 6a b6 05 24 2d a4 05 04 30 f4 0a c7 41 fe 07 04 30 f6 0a c7 41 fe 07 04 70 fe 0a 04 f0 e4 01 02 1e 24 05 86 f3 64 03 04 60 fe 0a c6 f1 00 08 43 03 b5 60 0a 30 f8 0a 73 3d fe 07 08 80 09 05 d4 f8 00 08 8e"),
    (0xF6, ""),
    (0x08, "03 ba 70 24 00 a0 09 58 30 f4 0a f5 46 be 07 64 02 a8 00 08 3f 74 0a 85 4d fe 07 76 03 ac 00 02 00 a2 00 64 04 a8 00 08 3f 74 0a 8f 4d fe 07 76 05 ac 00 02 00 a2 00 02 30 f2 0a b1 4d fe 07 04 00 a0 09 fe ff c3 00 5e fe a3 00 02 0f 36 0a 26 93 93 05 08 40 92 0a 02 1f 36 0a a6 a2 93 05 0e 40 92 0a 02 1f 36 0a 02 00 8e 06 28 0f 82 03 22 f8 92 05 0c 40 92 0a 02"),
    (0x1F, "0a 0a f7 00 08 9e 03 d9 80 e8 8d de 07 e9 0d 9e 07 04 f0 e6 01 a6 0f b6 05 00 30 f6 0a e9 4d fe 07 b8 f4 71 07 04 f0 e6 01 26 50 ed 05 a6 f5 b6 05 08 ff 7f 07 02"),
    (0xF0, "06 86 79 da 04 10 00 8e 06 02 00 8e 06 28 0f 86 03 a8 f5 71 07 00 0e 36 05 04 00 56 06 2e 0f 8e 03 fe bf 8f 03 fe bf 8f 03 fe bf 8f 03 e8 f1 71 07 04 f0 64 06 a3 f9 40 08 3e f8 00 08 3e 78 de 07 3e f7 00 08 0f 00 f6 90 20 20 9f 07 fe ff a1"),
    (0x09, "00 a8 00 00 10 8e 06 fe ff 8e 03 88 f7 7f 07 02 f0 00 06 a0 c1 81 05 02 30 f0 0a 05 4e fe 07 04"),
    (0x00, "00 06 fe 00 08 06 00 a0 00 ba f0 e0 02 38 fc 73 07 e8 f1 7f 07 04 30 50 06 f8 f0 73 07 fe ff a1 09 20 f0 00 08 4e 00 0a a1 9e 20 9f 07 02 3e 0a 05 9e f0 00 08 f3 01 0d b1 04 00 a0 09 38 fc 73 07 d8 f2 7f 07 02 f0 50 06 02 70 da 0a 10 00 8e 06 f8 f0 73 07 08 ff 7f 07 02 f0 50 06 08 78 3a 05 02 5c 1a 05 10 00 8e 06 f8 f0 71 07 80 00 a0 09 72 00 ac 00 02 00 8e 06 28 0f 84 03 d9 f4 df 07 b8 f0 64 01 00 30 f4 0a d9 44 be 07 08 42 9e 08 ba f0 64 01 02 5f 24 0a 87 0e de 07 82 00 a0"),
    (0x09, "00 ac 00 8b fe 00 08 a6 2e a4 05 87 0e de 07 94 02 ac 00 00 00 a0 00 8b fe 00 08 a6 c8 a4 05 06 30 f4 0a 87 4e fe 07 fe bf 8f 03 fe bf 8f 03 94 02 ac 00 8b fe 00 08 a6 c8 a4 05 06 30 f4 0a 87 4e fe 07 68 00 ac 00 8b fe 00 08 02 a2 17 05 02 00 a0 00 8b fe 00 08 38 fc 73 07 f8 f0 7f 07 02 f0 30 06 02 70 b6 0a 04"),
    (0x30, "06 f8 f0 73 07 02 70 92 0a d8 f4 00 08 f8 f0 73 07 08 ff 7f 07 02 f0 50 06 04 5c 1a 05 00 78 3a 05 04 30 f2 0a 9b 4e fe 07 02 78 3a 05 06 30 f2 0a a1 4e fe 07 04 78 3a 05 00 30 f2 0a a7 4e fe 07 02 44 3d 05 02 30 f2 0a ad 4e fe 07 02 36 0d 05 10 00 8e 06 02"),
]

DPOUT_HDR_FIELDS = [
    (0x000, "02 02"),
    (0x010, "44 50 5f 4f 55 54 5f 55 5f 43 4f 44 45"),
    (0x023, "07"),
    (0x026, "04"),
    (0x028, "03 01"),
    (0x02B, "06 05"),
    (0x02F, "03"),
    (0x031, "02"),
    (0x034, "05 03"),
    (0x03A, "03"),
    (0x040, "31"),
    (0x042, "43 4f 4e 46 49 47 35"),
    (0x04B, "41"),
]
DPIN_HDR_FIELDS = [
    (0x000, "02 02"),
    (0x010, "44 50 5f 49 4e 5f 55 5f 43 4f 44 45"),
    (0x020, "1f 1f 1f 1f 1f 1e 1e 1e 1e 1e 1d 1d 1d 1d 1c 1c 1c 1c 1c 1c 1c 1b 1b 1b 1b 1a 1a 1a 10 10 10 3b 3b 3a 39 38 3a 39 38 37 36 39 38 37 36 38 37 36 35 33 31 29 37 36 35 34 36 35 34 27 29 2b 32 32 32 32 32 33 33 33 33 34 34 34 34 35 35 35 35 36 36 36 36 36 36 36 36 37 37 37 10 10 10 2a 2a 2b 2c 2d 2b 2c 2d 2e 2c 2d 2e 2f 2d 2e 2f 30 2e 2f 30 31 2f 30 31 32 30 31 32 27 29 2b 31"),
    (0x0A0, "43 4f 4e 46 49 47 21 f1 c2 4b 65 20 20"),
]

def _hex(data):
    return bytes.fromhex(" ".join(data.split()))


def digital_header_bytes():
    out = bytearray(0x120)
    for off, _name, data in DIGITAL_FIELDS:
        data = _hex(data)
        out[off:off + len(data)] = data
    return bytes(out)


def patches_tlv_bytes():
    out = bytearray()
    for cmd, data in PATCHES_TLV:
        data = _hex(data)
        out += bytes([cmd, len(data)]) + data
    return bytes(out)


def sparse_header(fields, size=0x200):
    out = bytearray(size)
    for off, data in fields:
        data = _hex(data)
        out[off:off + len(data)] = data
    return bytes(out)


# package metadata: 36-byte area header (fixed fields + u16 record count at +22)
METADATA_HDR_OFF = 0x3B810
METADATA_HDR_FIXED = "01 00 73 03 51 d7 dc 2d 00 00 00 00 00 00 00 00 5b 75 27 5b fa 00 00 01"
METADATA_HDR_TAIL = "06 07 08 02 00 00 00 00 00 00"

# ... followed by the TLV stream at 0x3B834: `88 | idx | 00 | len | len+1 data bytes`
METADATA_OFF = 0x3B834
METADATA_TLV = [
    (0x06, "4e 32 34 54 46 32 33 57"),
    (0x16, "0b 78 00 8d 00 00 00 0f 00 00 00"),
    (0x17, "08 04 00 02 00 00 00 00 00 00 00"),
    (0x27, "05 00 09 00 12 00 00 0a 14 14 00 00 01 76"),
    (0x28, "0a 58 fc ff 01"),
    (0x29, "51 c4 11 00"),
    (0x32, "01 fc 00 00 00 00 00 00 2c 91 01 27 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 90 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x33, "03 0a 90 01 36 32 90 01 99 0a 90 01 59 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2c 29 00 40 45 c9 00 40 04 29 00 40 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x37, "6f 3d 00 00 00 00 00 00 c8 90 01 00"),
    (0x38, "87 80 01 00 01 ff 01 00 00 00 00 00"),
    (0x42, "3a 00"),
    (0x47, "03 ef 17 00 84 00 00 00 20 00 00 2c a3 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 7c 02 20 00 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x4A, "01 00 ef 17 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x51, "03 46 1c 00 01 02 00"),
    (0x52, "03 01 00 00 00 00 00 00"),
    (0x54, "00 00 00 00 00 00 00 00"),
    (0x55, "16"),
    (0x5C, "e1 e0 00 00 00 00 00 00 01 00 00 00 00 00 00 00 18 00 03 00 e0 e0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 29 03 33 00 00 00 00 00 2a 04 28 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x5D, "00 00 00 00 21 43 4d 44 21 43 4d 44 21 43 4d 44 21 43 4d 44 00 00 00 00 21 43 4d 44 21 43 4d 44 21 43 4d 44 21 43 4d 44 00 00 00 00 21 43 4d 44 21 43 4d 44 21 43 4d 44 21 43 4d 44"),
    (0x62, "00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x6B, "00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x70, "05"),
    (0x73, "ef 17 2c a3 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x77, "ef 17 2c a3 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x7D, "00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"),
    (0x7F, "ef 17 2c a3 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00")
]


def metadata_header_bytes():
    return _hex(METADATA_HDR_FIXED) + struct.pack("<H", len(METADATA_TLV)) + _hex(METADATA_HDR_TAIL)


def metadata_tlv_bytes():
    out = bytearray()
    for idx, payload in METADATA_TLV:
        data = _hex(payload)
        out += bytes([0x88, idx, 0x00, len(data) - 1]) + data
    return bytes(out)




NAMED_PAYLOADS = {
    'EE_CIO': [
        (0x15C08086, 0x00300000),
        (0x15C08086, 0x00280000),
        (0x15C08086, 0x00282000),
        (0x15C08086, 0x00284000),
        (0x15C08086, 0x00286000),
        (0x15C08086, 0x00288000),
        (0x15C08086, 0x0028A000),
        (0x00800000, 0x0028A081),
        (0x16030000, 0x0028C03A),
        (0x16030000, 0x0028E03A),
        (0x16030000, 0x0028803A),
        (0x48000000, 0x0028803C),
        (0x00000030, 0x0028803E),
        (0x08010000, 0x0028203F),
        (0x08010000, 0x0028403F),
        (0x08010000, 0x0028603F),
        (0x08010000, 0x0028803F),
        (0x00030113, 0x00300047),
        (0xE4454321, 0x0030002D),
        (0x1020002D, 0x0130003B),
    ],
    'EE_PCIE': [
        (0xFFFFFFFF, 0x00A03C00),
        (0x15C08086, 0x00A03C00),
        (0x11112222, 0x00A03C2C),
        (0x01620010, 0x00A03830),
        (0x00040000, 0x00A02835),
        (0x8CB00950, 0x00A02D42),
        (0x8CB06000, 0x00A01142),
        (0x081806A1, 0x00A00543),
        (0x0C7806B9, 0x00A03943),
        (0x00003800, 0x00A00944),
        (0x10003800, 0x00A03144),
        (0x10003810, 0x00A00544),
        (0x00100232, 0x00A03D47),
        (0x400053EF, 0x00A00548),
        (0x4000D3EF, 0x00A03948),
        (0x280A080A, 0x00A00550),
        (0x00000000, 0x00A00554),
        (0x0500002F, 0x00A01154),
        (0x00000001, 0x00A02954),
        (0x800000FF, 0x00A03CC5),
        (0x67050808, 0x00A00557),
        (0x6F050808, 0x00A01157),
        (0x6F050808, 0x00A02157),
        (0x81FE0000, 0x00A00558),
        (0x81FE0000, 0x00A01158),
        (0x81FE0000, 0x00A02158),
        (0x00000001, 0x00A00559),
        (0x00000000, 0x00A01159),
        (0x00130004, 0x00A02159),
        (0x01A80008, 0x00A03D64),
        (0x00000000, 0x00A01168),
        (0x00000000, 0x00A02968),
        (0x00000400, 0x00A00569),
        (0x00000000, 0x00A0056A),
        (0x00012438, 0x00A03D6B),
        (0x84004108, 0x00A03D6C),
        (0x01050000, 0x00A03D6D),
        (0xF0000334, 0x00A03D6E),
        (0x00012006, 0x00A03D6F),
        (0x40090000, 0x00A00570),
        (0x40080000, 0x00A03970),
        (0x01400006, 0x00A03D71),
        (0x1B080090, 0x00A03D72),
        (0x07070707, 0x00A039C3),
        (0x07070707, 0x00A039C4),
        (0x08800800, 0x00A03D73),
        (0x00087F80, 0x00A03D74),
        (0x00000000, 0x00A03D75),
        (0x00401E00, 0x00A03D76),
        (0x0000000F, 0x00A03D77),
        (0x00000000, 0x00A00575),
        (0x00000000, 0x00A00575),
        (0x15C08086, 0x00A00400),
        (0xAC7B0019, 0x00300064),
        (0xAF3E0000, 0x00300064),
        (0x00000000, 0x01A00575),
        (0x00330023, 0x00A00549),
    ],
    'EE_DMA': [
        (0x15BF8086, 0x00A40000),
        (0x11112222, 0x00A4000B),
        (0x8CB00950, 0x00A40142),
        (0x081806B9, 0x00A40143),
        (0x01003800, 0x00A40144),
        (0x00100223, 0x00A40147),
        (0x4000D3FF, 0x00A40148),
        (0x00330023, 0x00A40149),
        (0x00000000, 0x00A4014F),
        (0x00000000, 0x00A4014F),
        (0x00000000, 0x01A4014F),
    ],
    'EE_USB_PA': [
        (0x15C18086, 0x00A10000),
        (0x11112222, 0x00A1000B),
        (0x8CB00950, 0x00A10142),
        (0x081806B9, 0x00A10143),
        (0x01003800, 0x00A10144),
        (0x00100232, 0x00A10147),
        (0x4000D3EF, 0x00A10148),
        (0x09E80000, 0x00A10164),
        (0x00012438, 0x00A1016B),
        (0x1C004008, 0x00A1016C),
        (0x18010000, 0x00A1016D),
        (0xF0000304, 0x00A1016E),
        (0x00000006, 0x00A1016F),
        (0x40080000, 0x00A10170),
        (0x01000006, 0x00A10171),
        (0x1B080090, 0x00A10172),
        (0x08800800, 0x00A10173),
        (0x00087F80, 0x00A10174),
        (0x0000080F, 0x00A10177),
        (0x00000000, 0x00A101C3),
        (0x00000000, 0x00A101C4),
        (0x00000000, 0x00A10175),
        (0x00000000, 0x00A10175),
        (0x00000000, 0x01A10175),
        (0x00000001, 0x003001C5),
    ],
    'EE_USB_PB': [
        (0x00000030, 0x0030100C),
        (0x01A30204, 0x00301008),
        (0x064B4B66, 0x00300FFC),
        (0x00015703, 0x00300FFE),
        (0x00015707, 0x00300FFE),
        (0x00015703, 0x00300FFE),
        (0x00B86203, 0x00300FFE),
        (0x00B86207, 0x00300FFE),
        (0x00B86203, 0x00300FFE),
        (0x0018AF03, 0x00300FFE),
        (0x0018AF07, 0x00300FFE),
        (0x0018AF03, 0x00300FFE),
        (0x00000002, 0x00300FFE),
        (0x310803A0, 0x00F080F0),
        (0x81190206, 0x00F08154),
        (0x0078A412, 0x00F08E7C),
        (0x568D5690, 0x00F08E74),
        (0x4F132903, 0x00F08E78),
        (0x03DE6D5F, 0x00F08650),
        (0x00000800, 0x00F086A0),
        (0x00001800, 0x00F086A4),
        (0x0002408F, 0x00F086A8),
        (0x00000012, 0x00F086FC),
        (0x01100080, 0x00F00000),
        (0x0200000A, 0x00F0000C),
        (0x200077C1, 0x00F00010),
        (0x0000007C, 0x00F0001C),
        (0x3501AEFC, 0x00F0818C),
        (0x06C60000, 0x00F08190),
        (0x0220505A, 0x00F08194),
        (0x14003000, 0x00F08098),
        (0x4BEDFF94, 0x00F080A4),
        (0x01315555, 0x00F080A8),
        (0x888CBCE0, 0x00F080E0),
        (0x18010C00, 0x00F080EC),
        (0x00C08140, 0x00F08094),
        (0x02008003, 0x00F080FC),
        (0x40000001, 0x00F08108),
        (0xF0FC8B88, 0x00F08110),
        (0x000F401C, 0x00F0816C),
        (0x00643C64, 0x00F08138),
        (0xFF00F03C, 0x00F08140),
        (0x0000033F, 0x00F08144),
        (0x11414C0A, 0x00F08174),
        (0x00500050, 0x00F0817C),
        (0x00140014, 0x00F08180),
        (0x000F000F, 0x00F08184),
        (0x0080037F, 0x00F080B0),
        (0x00000004, 0x00F080B4),
        (0x00002002, 0x00F081B8),
        (0x0000090F, 0x00F081C4),
        (0x00000001, 0x00F086B0),
        (0x00000002, 0x00F086B4),
        (0x00000001, 0x00F086D0),
        (0x00000002, 0x00F086D4),
        (0x00490032, 0x00F08170),
        (0x801FC68B, 0x00F08644),
        (0x800001FD, 0x00F08640),
        (0x40000003, 0x00F080B8),
        (0x884204B0, 0x00F081BC),
        (0x00000000, 0x00F081D8),
        (0x0081E944, 0x00F081D0),
        (0x00102910, 0x01A10032),
    ],
    'EE_PCIE_PHI': [
        (0xAC7B0020, 0x00300064),
        (0xAF3E0001, 0x00300064),
        (0xAC660007, 0x00300064),
        (0xAA4E0089, 0x00300064),
        (0xAA4F00FB, 0x00300064),
        (0xAA83000C, 0x00300064),
        (0xAA840010, 0x00300064),
        (0xAA850013, 0x00300064),
        (0xAA860002, 0x00300064),
        (0xAA870021, 0x00300064),
        (0xAA880080, 0x00300064),
        (0xAA890098, 0x00300064),
        (0xAA8A0010, 0x00300064),
        (0xAA8B0008, 0x00300064),
        (0xAA8C00F4, 0x00300064),
        (0xAA8D0001, 0x00300064),
        (0xAA8E0000, 0x00300064),
        (0xAA8F0000, 0x00300064),
        (0xAA900009, 0x00300064),
        (0xAA910020, 0x00300064),
        (0xAA920006, 0x00300064),
        (0xAA930004, 0x00300064),
        (0xAA940022, 0x00300064),
        (0xAA950003, 0x00300064),
        (0xAA960000, 0x00300064),
        (0xAA970000, 0x00300064),
        (0xAA980040, 0x00300064),
        (0xAA990000, 0x00300064),
        (0xAA9A0008, 0x00300064),
        (0xAA9B0001, 0x00300064),
        (0xAA9C0080, 0x00300064),
        (0xAA9D00C8, 0x00300064),
        (0xAA9E0000, 0x00300064),
        (0xAA9F0000, 0x00300064),
        (0xAAA00000, 0x00300064),
        (0xAAA10010, 0x00300064),
        (0xAAA20000, 0x00300064),
        (0xAAA30042, 0x00300064),
        (0xAAA40010, 0x00300064),
        (0xAAA50020, 0x00300064),
        (0xAAA60000, 0x00300064),
        (0xAAA70010, 0x00300064),
        (0xAA6E008A, 0x00300064),
        (0xAA6F0005, 0x00300064),
        (0xAA700001, 0x00300064),
        (0xAA08003F, 0x00300064),
        (0xAAC4003F, 0x00300064),
        (0xAAC70005, 0x00300064),
        (0xAACB0006, 0x00300064),
        (0xAACA0008, 0x00300064),
        (0xAAC80000, 0x00300064),
        (0xAACD0005, 0x00300064),
        (0xAABB0067, 0x00300064),
        (0xAA160001, 0x00300064),
        (0xAB1B0001, 0x00300064),
        (0xAB110006, 0x00300064),
        (0xAB080001, 0x00300064),
        (0xAB090003, 0x00300064),
        (0xAE5D0013, 0x00300064),
        (0xAE530004, 0x00300064),
        (0xAE540008, 0x00300064),
        (0xAE66000A, 0x00300064),
        (0xAE8F003E, 0x00300064),
        (0xA07F0009, 0x00300064),
        (0xAC7F000F, 0x00300064),
        (0xAB91000F, 0x00300064),
        (0xAE500080, 0x00300064),
        (0xAE500080, 0x00300064),
        (0xAE500080, 0x00300064),
        (0xAE500080, 0x00300064),
    ],
    'EE_ANA_COMM': [
        (0x00000007, 0x00300125),
        (0x0B700000, 0x003006CD),
        (0x004C0934, 0x003006CF),
        (0x00000000, 0x003006D0),
        (0x0000000F, 0x003006D1),
    ],
}

# CIO_DRAM starts with the documented CIO_PHY_SECTION (datasheet 8.8.1); the rest is the
# DRAM data image, carried separately.
CIO_DRAM_CONFIG = (
    b"CIO_PHY_SECTION:"                    # 0x00-0x0F header
    + bytes([0x00, 0x40, 0x00, 0xB5])      # PA/PB swap + reserved
    + bytes([0x01, 0x01, 0x0B, 0x0B])      # 20G active, byte per lane
    + bytes([0x01, 0x01, 0x0B, 0x0B])      # reserved
    + bytes([0x01, 0x01, 0x00, 0x00])      # 10G active
    + bytes([0x01, 0x01, 0x0B, 0x0B])      # 10G passive
    + bytes(8)                             # USB3 LFPS
    + bytes.fromhex("00 48 00 48 00 48 00 48")   # USB3 Gen1
    + bytes.fromhex("02 38 02 38 02 38 02 38")   # USB3 Gen2
    + bytes.fromhex("00 01 03 F1")               # reserved
)

# ARC PARM: u32 total length, 40 u16 parameters, one trailing byte.
ARC_PARM_VALUES = [
    0x0002, 0x00FA, 0x09C4, 0x00C8, 0x09C4, 0x1388, 0x09C4, 0x0032,
    0x09C4, 0x012C, 0x0400, 0x0005, 0x0001, 0x01F4, 0x012C, 0x0064,
    0x00FA, 0x00FA, 0x00C8, 0x0400, 0x0064, 0x01F4, 0x0258, 0x0F3C,
    0x0320, 0x0190, 0x00C8, 0x00C8, 0x0010, 0x0600, 0x000A, 0x0BB8,
    0x0301, 0x0000, 0x071C, 0x0000, 0x0301, 0x0001, 0x1018, 0x0000,
]


def arc_parm_bytes():
    out = struct.pack("<I", 4 + 2 * len(ARC_PARM_VALUES) + 1)
    out += b"".join(struct.pack("<H", v) for v in ARC_PARM_VALUES)
    return out + b"\x01"

# DROM: u32 length, an 18-byte binary prefix, then TLV records (len, tag, value[len-2])
# and zero padding to the declared length.  Tags 0x81-0x85 are numeric records; tags 0x01/0x02
# carry the vendor/product strings.
DROM_PREFIX = bytes.fromhex("00 00 00 09 01 34 37 a4 8f 01 3b 00 09 01 07 17 01 17")
DROM_RECORDS = [
    (0x81, bytes.fromhex("80 02 80 00 00 00")),
    (0x82, bytes.fromhex("80 02 80 00 00 00")),
    (0x83, b""),
    (0x84, bytes.fromhex("20 01 00 3c 00 00 00 00 00")),
    (0x85, bytes.fromhex("50 00 00")),
    (0x01, b"Lenovo\x00"),
    (0x02, b"T480\x00"),
]


def drom_bytes():
    out = struct.pack("<I", 0x61) + DROM_PREFIX
    for tag, value in DROM_RECORDS:
        out += bytes([2 + len(value), tag]) + value
    return out + bytes(0x61 - len(out))

# Cortex-M patch header at 0x3BB3C: twelve 0x80-prefixed records, then zeros to the code
# entry at 0x3BC90.  The record payloads are the decoded patch/configuration table.
CM_HEADER_RECORDS = [
    "80 17 00 01 00 00",
    "80 17 03 00 00",
    "80 28 01 00 38",
    "80 29 02 00 15",
    "80 32 04 00 55",
    "80 32 06 00 15",
    "80 32 0c 02 2c d1 02",
    "80 32 10 02 2c b1 04",
    "80 32 14 02 2c 41 06",
    "80 38 00 01 01 ff",
    "80 38 04 02 00 00 00",
    "80 52 00 01 00 00",
]


def cm_header_bytes():
    out = b"".join(bytes.fromhex(r) for r in CM_HEADER_RECORDS)
    return out + bytes(0x154 - len(out))

# Security metadata: the four length words and the fixed PPS payload.  The RSA modulus,
# digest and CSS record bodies are opaque and stay carried.
SECURITY_LENGTHS = [
    (0x39210, 0x20),   # CSS
    (0x39410, 0x41),   # RSA+EXP
    (0x39610, 0x00),   # skip list
    (0x3A010, 0x40),   # SEC DGST
]
PPS_BYTES = bytes.fromhex(
    "01 00 e0 ac fe ff ff ff 00 10 00 00 c0 33 00 00 5b 7c c9 42 00 00 00 00")


# Padding/tail regions: the container is 0xFF fill around the two constants at 0x800/0xFFC;
# each DP image ends in zero padding plus a 4-byte trailer (FC E1 E9 EA / CC 43 A6 4E) that is
# not a standard CRC32/Adler32 of the obvious ranges and is encoded as a data constant; the
# 768 KiB beyond the used 256 KiB is all zero.
DP_OUT_TAIL = bytes(0x2104)
DP_IN_TAIL = bytes(0x1802)

# Residual FF/00 padding runs not covered by the section/name/structure ranges.
FILL_REGIONS = [
    (0x04145, 0x04200, 0xFF),
    (0x048B0, 0x04A00, 0xFF),
    (0x04BD8, 0x04C00, 0xFF),
    (0x04C68, 0x04E00, 0xFF),
    (0x04ED8, 0x05000, 0xFF),
    (0x05208, 0x05400, 0xFF),
    (0x05640, 0x05800, 0xFF),
    (0x05838, 0x05C00, 0xFF),
    (0x39014, 0x39200, 0xFF),
    (0x39614, 0x3A000, 0xFF),
    (0x0A14B, 0x0A14C, 0x00),
    (0x12A48, 0x12A50, 0x00),
    (0x226CA, 0x22800, 0xFF),
    (0x04278, 0x04600, 0xFF),
    (0x046B2, 0x046D8, 0x00),
    (0x0471F, 0x04730, 0x00),
    (0x04746, 0x04768, 0x00),
    (0x04768, 0x04800, 0xFF),
    (0x039278, 0x039294, 0x00),
    (0x039294, 0x039400, 0xFF),
    (0x039518, 0x039600, 0xFF),
    (0x03A114, 0x03B000, 0xFF),
    (0x03B028, 0x03B044, 0xFF),
    (0x03B05C, 0x03B810, 0xFF),
]


def named_payloads():
    """[(start, end, bytes)] of the EE_* record arrays (8-byte value/address pairs)."""
    out = []
    for off, name in SECTION_NAMES:
        recs = NAMED_PAYLOADS.get(name)
        if not recs:
            continue
        data = b"".join(struct.pack("<II", v, a) for v, a in recs)
        out.append((off + 0x10, off + 0x10 + len(data), data))
    return out


def structural_regions():
    """[(start, end, bytes)] of the structure-generated regions."""
    out = [(0x00000, 0x00010, CONTAINER)]
    for off, val in CHAIN:
        if off == 0x05C10:            # CP patch: the chain length is the TLV's first record
            continue
        out.append((off, off + 2, struct.pack("<H", val)))
    for off, data in CONTAINER_CONSTS:
        out.append((off, off + len(data), data))
    for off, name in SECTION_NAMES:
        out.append((off, off + 16, name_block(name)))
    for off, data in SECTION_TRAILERS:
        data = _hex(data)
        out.append((off, off + len(data), data))
    for off, data in PATTERNS:
        out.append((off, off + len(data), data))
    out.append((0x04000, 0x04120, digital_header_bytes()))
    out.append((0x04120, 0x04145, _hex(DIGITAL_TABLE)))
    out.append((0x05C10, PATCHES_END, patches_tlv_bytes()))
    out.append((0x06254, 0x06454, sparse_header(DPOUT_HDR_FIELDS)))
    out.append((0x0C256, 0x0C456, sparse_header(DPIN_HDR_FIELDS)))
    out.append((METADATA_HDR_OFF, METADATA_HDR_OFF + len(metadata_header_bytes()),
                metadata_header_bytes()))
    out.append((METADATA_OFF, METADATA_OFF + len(metadata_tlv_bytes()),
                metadata_tlv_bytes()))
    out.extend(named_payloads())
    out.append((0x21DDA, 0x21DDA + len(CIO_DRAM_CONFIG), CIO_DRAM_CONFIG))
    out.append((0x4610, 0x4610 + len(arc_parm_bytes()), arc_parm_bytes()))
    out.append((0x4210, 0x4210 + len(drom_bytes()), drom_bytes()))
    out.append((0x3BB3C, 0x3BC90, cm_header_bytes()))
    for off, val in SECURITY_LENGTHS:
        out.append((off, off + 4, struct.pack("<I", val)))
    out.append((0x3B010, 0x3B010 + len(PPS_BYTES), PPS_BYTES))
    out.append((0x00010, 0x00800, b"\xff" * (0x800 - 0x10)))
    out.append((0x00808, 0x00ffc, b"\xff" * (0xffc - 0x808)))
    out.append((0x01000, 0x04000, b"\xff" * (0x4000 - 0x1000)))
    out.append((0x0A14C, 0x0C250, DP_OUT_TAIL))
    out.append((0x12A50, 0x14252, DP_IN_TAIL))
    out.append((0x40000, 0x100000, bytes(0x100000 - 0x40000)))
    for a, b, v in FILL_REGIONS:
        out.append((a, b, bytes([v]) * (b - a)))
    return sorted(out)
