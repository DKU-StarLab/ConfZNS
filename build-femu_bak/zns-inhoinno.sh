#!/bin/bash
#
# Huaicheng Li <hcli@cmu.edu>
# Run FEMU as Zoned-Namespace (ZNS) SSDs
#

# Image directory
IMGDIR=$HOME/images
# Virtual machine disk image
OSIMGF=$IMGDIR/femu.qcow2

if [[ ! -e "$OSIMGF" ]]; then
	echo ""
	echo "VM disk image couldn't be found ..."
	echo "Please prepare a usable VM image and place it as $OSIMGF"
	echo "Once VM disk image is ready, please rerun this script again"
	echo ""
	exit
fi

sudo x86_64-softmmu/qemu-system-x86_64 \
    -name "FEMU-ZNSSD-VM" \
    -enable-kvm \
    -cpu host\
    -smp 4 \
    -m 4G \
    -device nvme,id=nvme0, serial=deadbeef,zoned,zasl=5\
    -drive file=$OSIMGF, id nvmezns0, format=raw, if=none \
    -device nvme-ns, drive=nvmezns0, busncme0, nsid=1, logical_block_size =4096, physical_block_size=4096,zoned=true,zoned.zone_size=64M,zoned.zone_capacity=62M,zoned.max_open=16,zoned.max_active=32,uuid=5e40ec5f-eeb6-4317-bc5e-c919796a5f79 \
    -net nic,model=virtio \
    -net user,hostfwd=tcp::18080-:22 \
    -nographic \
    -qmp unix:./qmp-sock,server,nowait 2>&1 | tee log \
