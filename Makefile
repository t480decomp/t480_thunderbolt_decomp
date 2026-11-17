# Thunderbolt NVM — minimal code build
#
#   make            fetch the vendor image (once) and build build/TBT.rom from the listings
#   make verify     same, but fail unless the listings reproduce the vendor image exactly
#   make fetch      download Lenovo N24TF23W and rebuild build/TBT.bin (hash-verified)
#   make tools      provide the assemblers (static tarball / distro packages / existing)
#   make clean      remove build/ and tools/
#
# Editing loop: change an instruction in dp_out.asm / dp_in.asm / arc/arc_code_22800.asm,
# run `make`, and build/TBT.rom is rebuilt with exactly those bytes changed.

PYTHON     ?= python3
IMAGE      := build/TBT.bin
ROM        := build/TBT.rom
REGEN      := build/regen

SOURCES    := dp_out.asm dp_in.asm lc.asm cm.asm arc/arc_code_22800.asm arc/arc_ucode_1aaca.asm
HELPERS    := toolchain.py mk_sdas.py dis8051.py asm8051.py asm_arc.py asm_cm.py blobs.py mkimage.py

.PHONY: all rom verify fetch blobs tools clean help

all: rom

# ---- build ------------------------------------------------------------------

rom: $(IMAGE) blobs tools $(SOURCES) $(HELPERS)
	@$(PYTHON) asm8051.py
	@echo
	@$(PYTHON) asm_arc.py
	@echo
	@$(PYTHON) asm_cm.py
	@echo
	@$(PYTHON) mkimage.py

verify: $(IMAGE) blobs tools $(SOURCES) $(HELPERS)
	@$(PYTHON) asm8051.py --strict
	@echo
	@$(PYTHON) asm_arc.py --strict
	@echo
	@$(PYTHON) asm_cm.py
	@echo
	@$(PYTHON) mkimage.py

# ---- inputs -----------------------------------------------------------------

fetch: $(IMAGE)
$(IMAGE):
	./fetch_firmware.sh $@

# extract the opaque vendor regions at build time; never committed
blobs: $(IMAGE) blobs.py
	@$(PYTHON) blobs.py $(IMAGE) build/blobs

# the assemblers: static tarball, distro packages, or an existing installation
tools:
	@./bootstrap_tools.sh

$(REGEN):
	@mkdir -p $@

clean:
	rm -rf build tools __pycache__ *.pyc

help:
	@sed -n '2,9p' $(MAKEFILE_LIST) | sed 's/^# \{0,1\}//'
