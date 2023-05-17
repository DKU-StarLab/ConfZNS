#!/bin/bash
#
# Huaicheng Li <hcli@cmu.edu>
# Run FEMU as Zoned-Namespace (ZNS) SSDs
#

# Image directory
IMGDIR=/home/inhoinno/images
# Virtual machine disk image
OSIMGF=$IMGDIR/femu.qcow2
#OSIMGF=$IMGDIR/bak_femu_before_vfs_compile.qcow2
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
    -cpu host \
    -smp 32 \
    -m 576G \
    -device virtio-scsi-pci,id=scsi0 \
    -device scsi-hd,drive=hd0 \
    -drive file=$OSIMGF,if=none,aio=native,cache=none,format=qcow2,id=hd0 \
    -device femu,devsz_mb=524288,femu_mode=3 \
    -net user,hostfwd=tcp::18080-:22 \
    -net nic,model=virtio \
    -qmp unix:./qmp-sock,server,nowait 2>&1 | tee log
