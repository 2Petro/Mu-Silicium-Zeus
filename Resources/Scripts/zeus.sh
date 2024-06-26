#!/bin/bash

# Build an Android kernel that is actually UEFI disguised as the Kernel
cat ./BootShim/AARCH64/BootShim.bin "./Build/zeusPkg/${_TARGET_BUILD_MODE}_CLANGDWARF/FV/ZEUS_UEFI.fd" > "./Build/zeusPkg/${_TARGET_BUILD_MODE}_CLANGDWARF/FV/zeus_UEFI.fd-bootshim"||exit 1

gzip -c < "./Build/zeusPkg/${_TARGET_BUILD_MODE}_CLANGDWARF/FV/zeus_UEFI.fd-bootshim" > "./Build/zeusPkg/${_TARGET_BUILD_MODE}_CLANGDWARF/FV/zeus_UEFI.fd-bootshim.gz"||exit 1
cat "./Build/zeusPkg/${_TARGET_BUILD_MODE}_CLANGDWARF/FV/zeus_UEFI.fd-bootshim.gz" ./Resources/DTBs/zeus.dtb > ./Resources/bootpayload.bin||exit 1

#cp -r "./Build/zeusPkg/${_TARGET_BUILD_MODE}_CLANGDWARF/FV/zeus_UEFI.fd-bootshim" ./Resources/bootpayload.bin


# Create bootable Android boot.img
python3 ./Resources/Scripts/mkbootimg.py \
  --kernel ./Resources/bootpayload.bin \
  --ramdisk ./Resources/ramdisk \
  --kernel_offset 0x00000000 \
  --ramdisk_offset 0x00000000 \
  --tags_offset 0x00000000 \
  --os_version 12.0.0 \
  --os_patch_level 2023-08 \
  --header_version 4 \
  --pagesize 4096 \
  -o boot.img \
  ||_error "\nFailed to create Android Boot Image!\n"

# Compress Boot Image in a tar File for Odin/heimdall Flash
tar -c boot.img -f Mu-zeus.tar||exit 1
mv boot.img Mu-zeus.img||exit 1
