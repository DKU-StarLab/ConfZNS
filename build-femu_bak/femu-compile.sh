#!/bin/bash

NRCPUS="$(cat /proc/cpuinfo | grep "vendor_id" | wc -l)"

make clean
# --disable-werror --extra-cflags=-w
../configure --enable-kvm --target-list=x86_64-softmmu --disable-git-update
make -j $NRCPUS

echo ""
echo "===> FEMU compilation done ..."
echo "date now : $(date +%Y)-$(date +%m)-$(date +%d) $(date +%H):$(date +%M):$(date +%S)"
NowDate='date'
echo $NowDate
exit
