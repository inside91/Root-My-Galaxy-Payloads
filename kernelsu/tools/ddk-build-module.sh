#!/bin/sh
# Builds the Samsung KDP/RKP/DEFEX KernelSU module inside a Ylarod DDK image.
#
# Run from the KernelSU kernel/ directory: the DDK image provides $KDIR (the
# prepared kernel tree) and clang.  TARGET_RELEASE must be the exact device
# UTS_RELEASE -- the target enforces CONFIG_MODULE_FORCE_LOAD=n, so a module
# whose vermagic differs is rejected at load.
set -eu

: "${KDIR:?DDK image did not set KDIR}"
: "${TARGET_RELEASE:?TARGET_RELEASE must be the exact target UTS_RELEASE}"

# The image ships its own generated release; overwrite it rather than sed-matching
# the image's default, which varies per image tag.
printf '#define UTS_RELEASE "%s"\n' "$TARGET_RELEASE" > "$KDIR/include/generated/utsrelease.h"
printf '%s\n' "$TARGET_RELEASE" > "$KDIR/include/config/kernel.release"

make clean
CONFIG_KSU=m \
CONFIG_KSU_SAMSUNG_KDP=y \
CONFIG_KSU_SAMSUNG_RKP=y \
CONFIG_KSU_SAMSUNG_DEFEX=y \
CONFIG_KSU_SAMSUNG_NO_PATCH_TEXT=y \
CC=clang make -j"$(nproc)"

modinfo ./kernelsu.ko
