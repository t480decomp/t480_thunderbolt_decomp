#!/usr/bin/env python3
"""toolchain.py - locate the assemblers this repo needs, on any distribution.

Resolution order for every tool:

  1. an environment override   (SDAS8051, SDLD8051, ARC_AS, ARC_LD, ARC_OBJCOPY, INNOEXTRACT)
  2. the repo-local copy       (tools/…, from the static toolchain tarball or a distro package)
  3. the system PATH           (sdcc / binutils-arc-linux-gnu / innoextract packages)

Nothing here is distribution-specific: the same code works with a static tarball unpacked into
tools/, with packages installed by apt/dnf/pacman/brew, or with hand-built binaries pointed at by
the environment variables.
"""
import os
import shutil

HERE = os.path.dirname(os.path.abspath(__file__))
LOCAL = os.path.join(HERE, "tools")

# repo-local locations (static tarball layout first, then the Fedora RPM layout)
LOCAL_PATHS = {
    "sdas8051": ["bin/sdas8051", "usr/libexec/sdcc/sdas8051", "usr/bin/sdas8051"],
    "sdld": ["bin/sdld", "usr/libexec/sdcc/sdld", "usr/bin/sdld"],
    "as": ["bin/arc-linux-gnu-as", "usr/bin/arc-linux-gnu-as"],
    "ld": ["bin/arc-linux-gnu-ld", "usr/bin/arc-linux-gnu-ld"],
    "objcopy": ["bin/arc-linux-gnu-objcopy", "usr/bin/arc-linux-gnu-objcopy"],
    "arm_as": ["bin/arm-none-eabi-as", "usr/bin/arm-none-eabi-as"],
    "arm_ld": ["bin/arm-none-eabi-ld", "usr/bin/arm-none-eabi-ld"],
    "arm_objcopy": ["bin/arm-none-eabi-objcopy", "usr/bin/arm-none-eabi-objcopy"],
    "innoextract": ["bin/innoextract", "usr/bin/innoextract"],
}

SYSTEM_NAMES = {
    "sdas8051": ["sdas8051"],
    "sdld": ["sdld", "sdld8051"],
    "as": ["arc-linux-gnu-as", "arc-elf32-as"],
    "ld": ["arc-linux-gnu-ld", "arc-elf32-ld"],
    "objcopy": ["arc-linux-gnu-objcopy", "arc-elf32-objcopy"],
    "arm_as": ["arm-none-eabi-as"],
    "arm_ld": ["arm-none-eabi-ld"],
    "arm_objcopy": ["arm-none-eabi-objcopy"],
    "innoextract": ["innoextract"],
}

ENV = {
    "sdas8051": "SDAS8051",
    "sdld": "SDLD8051",
    "as": "ARC_AS",
    "ld": "ARC_LD",
    "objcopy": "ARC_OBJCOPY",
    "arm_as": "ARM_AS",
    "arm_ld": "ARM_LD",
    "arm_objcopy": "ARM_OBJCOPY",
    "innoextract": "INNOEXTRACT",
}


def find(tool):
    override = os.environ.get(ENV[tool])
    if override:
        return override
    for rel in LOCAL_PATHS[tool]:
        p = os.path.join(LOCAL, rel)
        if os.access(p, os.X_OK):
            return p
    for name in SYSTEM_NAMES[tool]:
        p = shutil.which(name)
        if p:
            return p
    return None


def sdas8051():
    return find("sdas8051")


def sdld():
    return find("sdld")


def arc_as():
    return find("as")


def arc_ld():
    return find("ld")


def arc_objcopy():
    return find("objcopy")


def arm_as():
    return find("arm_as")


def arm_ld():
    return find("arm_ld")


def arm_objcopy():
    return find("arm_objcopy")


def innoextract():
    return find("innoextract")


HINTS = {
    "sdas8051": "run ./bootstrap_tools.sh (static tarball or distro packages), "
                "or install sdcc",
    "sdld": "same package as sdas8051 (sdcc)",
    "as": "run ./bootstrap_tools.sh, or install binutils-arc-linux-gnu",
    "ld": "same package as the ARC assembler (binutils-arc-linux-gnu)",
    "objcopy": "same package as the ARC assembler (binutils-arc-linux-gnu)",
    "arm_as": "run ./bootstrap_tools.sh (static tarball) or install arm-none-eabi-binutils",
    "arm_ld": "same package as the ARM assembler",
    "arm_objcopy": "same package as the ARM assembler",
    "innoextract": "install innoextract (needed only for 'make fetch')",
}


def require(tool, what=None):
    """return the path, or exit with an actionable message"""
    if not tool:
        raise SystemExit("error: missing %s - %s" % (what or "tool", HINTS.get(what, "see README")))
    return tool


def missing():
    """list of tools that cannot be resolved"""
    return [t for t in ENV if not find(t)]


if __name__ == "__main__":
    for t in ENV:
        p = find(t)
        print("%-12s %s" % (t, p or "MISSING"))
