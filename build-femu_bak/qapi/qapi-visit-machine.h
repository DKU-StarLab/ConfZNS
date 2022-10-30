/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_VISIT_MACHINE_H
#define QAPI_VISIT_MACHINE_H

#include "qapi/qapi-builtin-visit.h"
#include "qapi-types-machine.h"


bool visit_type_SysEmuTarget(Visitor *v, const char *name,
                 SysEmuTarget *obj, Error **errp);

bool visit_type_CpuInfoArch(Visitor *v, const char *name,
                 CpuInfoArch *obj, Error **errp);

bool visit_type_q_obj_CpuInfo_base_members(Visitor *v, q_obj_CpuInfo_base *obj, Error **errp);

bool visit_type_CpuInfo_members(Visitor *v, CpuInfo *obj, Error **errp);

bool visit_type_CpuInfo(Visitor *v, const char *name,
                 CpuInfo **obj, Error **errp);

bool visit_type_CpuInfoX86_members(Visitor *v, CpuInfoX86 *obj, Error **errp);

bool visit_type_CpuInfoX86(Visitor *v, const char *name,
                 CpuInfoX86 **obj, Error **errp);

bool visit_type_CpuInfoSPARC_members(Visitor *v, CpuInfoSPARC *obj, Error **errp);

bool visit_type_CpuInfoSPARC(Visitor *v, const char *name,
                 CpuInfoSPARC **obj, Error **errp);

bool visit_type_CpuInfoPPC_members(Visitor *v, CpuInfoPPC *obj, Error **errp);

bool visit_type_CpuInfoPPC(Visitor *v, const char *name,
                 CpuInfoPPC **obj, Error **errp);

bool visit_type_CpuInfoMIPS_members(Visitor *v, CpuInfoMIPS *obj, Error **errp);

bool visit_type_CpuInfoMIPS(Visitor *v, const char *name,
                 CpuInfoMIPS **obj, Error **errp);

bool visit_type_CpuInfoTricore_members(Visitor *v, CpuInfoTricore *obj, Error **errp);

bool visit_type_CpuInfoTricore(Visitor *v, const char *name,
                 CpuInfoTricore **obj, Error **errp);

bool visit_type_CpuInfoRISCV_members(Visitor *v, CpuInfoRISCV *obj, Error **errp);

bool visit_type_CpuInfoRISCV(Visitor *v, const char *name,
                 CpuInfoRISCV **obj, Error **errp);

bool visit_type_CpuS390State(Visitor *v, const char *name,
                 CpuS390State *obj, Error **errp);

bool visit_type_CpuInfoS390_members(Visitor *v, CpuInfoS390 *obj, Error **errp);

bool visit_type_CpuInfoS390(Visitor *v, const char *name,
                 CpuInfoS390 **obj, Error **errp);

bool visit_type_CpuInfoList(Visitor *v, const char *name,
                 CpuInfoList **obj, Error **errp);

bool visit_type_q_obj_CpuInfoFast_base_members(Visitor *v, q_obj_CpuInfoFast_base *obj, Error **errp);

bool visit_type_CpuInfoFast_members(Visitor *v, CpuInfoFast *obj, Error **errp);

bool visit_type_CpuInfoFast(Visitor *v, const char *name,
                 CpuInfoFast **obj, Error **errp);

bool visit_type_CpuInfoFastList(Visitor *v, const char *name,
                 CpuInfoFastList **obj, Error **errp);

bool visit_type_MachineInfo_members(Visitor *v, MachineInfo *obj, Error **errp);

bool visit_type_MachineInfo(Visitor *v, const char *name,
                 MachineInfo **obj, Error **errp);

bool visit_type_MachineInfoList(Visitor *v, const char *name,
                 MachineInfoList **obj, Error **errp);

bool visit_type_CurrentMachineParams_members(Visitor *v, CurrentMachineParams *obj, Error **errp);

bool visit_type_CurrentMachineParams(Visitor *v, const char *name,
                 CurrentMachineParams **obj, Error **errp);

bool visit_type_TargetInfo_members(Visitor *v, TargetInfo *obj, Error **errp);

bool visit_type_TargetInfo(Visitor *v, const char *name,
                 TargetInfo **obj, Error **errp);

bool visit_type_UuidInfo_members(Visitor *v, UuidInfo *obj, Error **errp);

bool visit_type_UuidInfo(Visitor *v, const char *name,
                 UuidInfo **obj, Error **errp);

bool visit_type_GuidInfo_members(Visitor *v, GuidInfo *obj, Error **errp);

bool visit_type_GuidInfo(Visitor *v, const char *name,
                 GuidInfo **obj, Error **errp);

bool visit_type_LostTickPolicy(Visitor *v, const char *name,
                 LostTickPolicy *obj, Error **errp);

bool visit_type_KvmInfo_members(Visitor *v, KvmInfo *obj, Error **errp);

bool visit_type_KvmInfo(Visitor *v, const char *name,
                 KvmInfo **obj, Error **errp);

bool visit_type_NumaOptionsType(Visitor *v, const char *name,
                 NumaOptionsType *obj, Error **errp);

bool visit_type_q_obj_NumaOptions_base_members(Visitor *v, q_obj_NumaOptions_base *obj, Error **errp);

bool visit_type_NumaOptions_members(Visitor *v, NumaOptions *obj, Error **errp);

bool visit_type_NumaOptions(Visitor *v, const char *name,
                 NumaOptions **obj, Error **errp);

bool visit_type_NumaNodeOptions_members(Visitor *v, NumaNodeOptions *obj, Error **errp);

bool visit_type_NumaNodeOptions(Visitor *v, const char *name,
                 NumaNodeOptions **obj, Error **errp);

bool visit_type_NumaDistOptions_members(Visitor *v, NumaDistOptions *obj, Error **errp);

bool visit_type_NumaDistOptions(Visitor *v, const char *name,
                 NumaDistOptions **obj, Error **errp);

bool visit_type_X86CPURegister32(Visitor *v, const char *name,
                 X86CPURegister32 *obj, Error **errp);

bool visit_type_X86CPUFeatureWordInfo_members(Visitor *v, X86CPUFeatureWordInfo *obj, Error **errp);

bool visit_type_X86CPUFeatureWordInfo(Visitor *v, const char *name,
                 X86CPUFeatureWordInfo **obj, Error **errp);

bool visit_type_X86CPUFeatureWordInfoList(Visitor *v, const char *name,
                 X86CPUFeatureWordInfoList **obj, Error **errp);

bool visit_type_DummyForceArrays_members(Visitor *v, DummyForceArrays *obj, Error **errp);

bool visit_type_DummyForceArrays(Visitor *v, const char *name,
                 DummyForceArrays **obj, Error **errp);

bool visit_type_NumaCpuOptions_members(Visitor *v, NumaCpuOptions *obj, Error **errp);

bool visit_type_NumaCpuOptions(Visitor *v, const char *name,
                 NumaCpuOptions **obj, Error **errp);

bool visit_type_HmatLBMemoryHierarchy(Visitor *v, const char *name,
                 HmatLBMemoryHierarchy *obj, Error **errp);

bool visit_type_HmatLBDataType(Visitor *v, const char *name,
                 HmatLBDataType *obj, Error **errp);

bool visit_type_NumaHmatLBOptions_members(Visitor *v, NumaHmatLBOptions *obj, Error **errp);

bool visit_type_NumaHmatLBOptions(Visitor *v, const char *name,
                 NumaHmatLBOptions **obj, Error **errp);

bool visit_type_HmatCacheAssociativity(Visitor *v, const char *name,
                 HmatCacheAssociativity *obj, Error **errp);

bool visit_type_HmatCacheWritePolicy(Visitor *v, const char *name,
                 HmatCacheWritePolicy *obj, Error **errp);

bool visit_type_NumaHmatCacheOptions_members(Visitor *v, NumaHmatCacheOptions *obj, Error **errp);

bool visit_type_NumaHmatCacheOptions(Visitor *v, const char *name,
                 NumaHmatCacheOptions **obj, Error **errp);

bool visit_type_HostMemPolicy(Visitor *v, const char *name,
                 HostMemPolicy *obj, Error **errp);

bool visit_type_q_obj_memsave_arg_members(Visitor *v, q_obj_memsave_arg *obj, Error **errp);

bool visit_type_q_obj_pmemsave_arg_members(Visitor *v, q_obj_pmemsave_arg *obj, Error **errp);

bool visit_type_Memdev_members(Visitor *v, Memdev *obj, Error **errp);

bool visit_type_Memdev(Visitor *v, const char *name,
                 Memdev **obj, Error **errp);

bool visit_type_MemdevList(Visitor *v, const char *name,
                 MemdevList **obj, Error **errp);

bool visit_type_CpuInstanceProperties_members(Visitor *v, CpuInstanceProperties *obj, Error **errp);

bool visit_type_CpuInstanceProperties(Visitor *v, const char *name,
                 CpuInstanceProperties **obj, Error **errp);

bool visit_type_HotpluggableCPU_members(Visitor *v, HotpluggableCPU *obj, Error **errp);

bool visit_type_HotpluggableCPU(Visitor *v, const char *name,
                 HotpluggableCPU **obj, Error **errp);

bool visit_type_HotpluggableCPUList(Visitor *v, const char *name,
                 HotpluggableCPUList **obj, Error **errp);

bool visit_type_q_obj_balloon_arg_members(Visitor *v, q_obj_balloon_arg *obj, Error **errp);

bool visit_type_BalloonInfo_members(Visitor *v, BalloonInfo *obj, Error **errp);

bool visit_type_BalloonInfo(Visitor *v, const char *name,
                 BalloonInfo **obj, Error **errp);

bool visit_type_q_obj_BALLOON_CHANGE_arg_members(Visitor *v, q_obj_BALLOON_CHANGE_arg *obj, Error **errp);

bool visit_type_MemoryInfo_members(Visitor *v, MemoryInfo *obj, Error **errp);

bool visit_type_MemoryInfo(Visitor *v, const char *name,
                 MemoryInfo **obj, Error **errp);

bool visit_type_PCDIMMDeviceInfo_members(Visitor *v, PCDIMMDeviceInfo *obj, Error **errp);

bool visit_type_PCDIMMDeviceInfo(Visitor *v, const char *name,
                 PCDIMMDeviceInfo **obj, Error **errp);

bool visit_type_VirtioPMEMDeviceInfo_members(Visitor *v, VirtioPMEMDeviceInfo *obj, Error **errp);

bool visit_type_VirtioPMEMDeviceInfo(Visitor *v, const char *name,
                 VirtioPMEMDeviceInfo **obj, Error **errp);

bool visit_type_VirtioMEMDeviceInfo_members(Visitor *v, VirtioMEMDeviceInfo *obj, Error **errp);

bool visit_type_VirtioMEMDeviceInfo(Visitor *v, const char *name,
                 VirtioMEMDeviceInfo **obj, Error **errp);

bool visit_type_q_obj_PCDIMMDeviceInfo_wrapper_members(Visitor *v, q_obj_PCDIMMDeviceInfo_wrapper *obj, Error **errp);

bool visit_type_q_obj_VirtioPMEMDeviceInfo_wrapper_members(Visitor *v, q_obj_VirtioPMEMDeviceInfo_wrapper *obj, Error **errp);

bool visit_type_q_obj_VirtioMEMDeviceInfo_wrapper_members(Visitor *v, q_obj_VirtioMEMDeviceInfo_wrapper *obj, Error **errp);

bool visit_type_MemoryDeviceInfoKind(Visitor *v, const char *name,
                 MemoryDeviceInfoKind *obj, Error **errp);

bool visit_type_MemoryDeviceInfo_members(Visitor *v, MemoryDeviceInfo *obj, Error **errp);

bool visit_type_MemoryDeviceInfo(Visitor *v, const char *name,
                 MemoryDeviceInfo **obj, Error **errp);

bool visit_type_MemoryDeviceInfoList(Visitor *v, const char *name,
                 MemoryDeviceInfoList **obj, Error **errp);

bool visit_type_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg_members(Visitor *v, q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg *obj, Error **errp);

bool visit_type_q_obj_MEM_UNPLUG_ERROR_arg_members(Visitor *v, q_obj_MEM_UNPLUG_ERROR_arg *obj, Error **errp);

#endif /* QAPI_VISIT_MACHINE_H */
