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

#ifndef QAPI_VISIT_BLOCK_CORE_H
#define QAPI_VISIT_BLOCK_CORE_H

#include "qapi/qapi-builtin-visit.h"
#include "qapi-types-block-core.h"

#include "qapi-visit-common.h"
#include "qapi-visit-crypto.h"
#include "qapi-visit-job.h"
#include "qapi-visit-sockets.h"

bool visit_type_SnapshotInfo_members(Visitor *v, SnapshotInfo *obj, Error **errp);

bool visit_type_SnapshotInfo(Visitor *v, const char *name,
                 SnapshotInfo **obj, Error **errp);

bool visit_type_ImageInfoSpecificQCow2EncryptionBase_members(Visitor *v, ImageInfoSpecificQCow2EncryptionBase *obj, Error **errp);

bool visit_type_ImageInfoSpecificQCow2EncryptionBase(Visitor *v, const char *name,
                 ImageInfoSpecificQCow2EncryptionBase **obj, Error **errp);

bool visit_type_ImageInfoSpecificQCow2Encryption_members(Visitor *v, ImageInfoSpecificQCow2Encryption *obj, Error **errp);

bool visit_type_ImageInfoSpecificQCow2Encryption(Visitor *v, const char *name,
                 ImageInfoSpecificQCow2Encryption **obj, Error **errp);

bool visit_type_Qcow2BitmapInfoList(Visitor *v, const char *name,
                 Qcow2BitmapInfoList **obj, Error **errp);

bool visit_type_ImageInfoSpecificQCow2_members(Visitor *v, ImageInfoSpecificQCow2 *obj, Error **errp);

bool visit_type_ImageInfoSpecificQCow2(Visitor *v, const char *name,
                 ImageInfoSpecificQCow2 **obj, Error **errp);

bool visit_type_ImageInfoList(Visitor *v, const char *name,
                 ImageInfoList **obj, Error **errp);

bool visit_type_ImageInfoSpecificVmdk_members(Visitor *v, ImageInfoSpecificVmdk *obj, Error **errp);

bool visit_type_ImageInfoSpecificVmdk(Visitor *v, const char *name,
                 ImageInfoSpecificVmdk **obj, Error **errp);

bool visit_type_ImageInfoSpecificRbd_members(Visitor *v, ImageInfoSpecificRbd *obj, Error **errp);

bool visit_type_ImageInfoSpecificRbd(Visitor *v, const char *name,
                 ImageInfoSpecificRbd **obj, Error **errp);

bool visit_type_ImageInfoSpecificKind(Visitor *v, const char *name,
                 ImageInfoSpecificKind *obj, Error **errp);

bool visit_type_ImageInfoSpecificQCow2Wrapper_members(Visitor *v, ImageInfoSpecificQCow2Wrapper *obj, Error **errp);

bool visit_type_ImageInfoSpecificQCow2Wrapper(Visitor *v, const char *name,
                 ImageInfoSpecificQCow2Wrapper **obj, Error **errp);

bool visit_type_ImageInfoSpecificVmdkWrapper_members(Visitor *v, ImageInfoSpecificVmdkWrapper *obj, Error **errp);

bool visit_type_ImageInfoSpecificVmdkWrapper(Visitor *v, const char *name,
                 ImageInfoSpecificVmdkWrapper **obj, Error **errp);

bool visit_type_ImageInfoSpecificLUKSWrapper_members(Visitor *v, ImageInfoSpecificLUKSWrapper *obj, Error **errp);

bool visit_type_ImageInfoSpecificLUKSWrapper(Visitor *v, const char *name,
                 ImageInfoSpecificLUKSWrapper **obj, Error **errp);

bool visit_type_ImageInfoSpecificRbdWrapper_members(Visitor *v, ImageInfoSpecificRbdWrapper *obj, Error **errp);

bool visit_type_ImageInfoSpecificRbdWrapper(Visitor *v, const char *name,
                 ImageInfoSpecificRbdWrapper **obj, Error **errp);

bool visit_type_q_obj_ImageInfoSpecific_base_members(Visitor *v, q_obj_ImageInfoSpecific_base *obj, Error **errp);

bool visit_type_ImageInfoSpecific_members(Visitor *v, ImageInfoSpecific *obj, Error **errp);

bool visit_type_ImageInfoSpecific(Visitor *v, const char *name,
                 ImageInfoSpecific **obj, Error **errp);

bool visit_type_SnapshotInfoList(Visitor *v, const char *name,
                 SnapshotInfoList **obj, Error **errp);

bool visit_type_ImageInfo_members(Visitor *v, ImageInfo *obj, Error **errp);

bool visit_type_ImageInfo(Visitor *v, const char *name,
                 ImageInfo **obj, Error **errp);

bool visit_type_ImageCheck_members(Visitor *v, ImageCheck *obj, Error **errp);

bool visit_type_ImageCheck(Visitor *v, const char *name,
                 ImageCheck **obj, Error **errp);

bool visit_type_MapEntry_members(Visitor *v, MapEntry *obj, Error **errp);

bool visit_type_MapEntry(Visitor *v, const char *name,
                 MapEntry **obj, Error **errp);

bool visit_type_BlockdevCacheInfo_members(Visitor *v, BlockdevCacheInfo *obj, Error **errp);

bool visit_type_BlockdevCacheInfo(Visitor *v, const char *name,
                 BlockdevCacheInfo **obj, Error **errp);

bool visit_type_BlockDirtyInfoList(Visitor *v, const char *name,
                 BlockDirtyInfoList **obj, Error **errp);

bool visit_type_BlockDeviceInfo_members(Visitor *v, BlockDeviceInfo *obj, Error **errp);

bool visit_type_BlockDeviceInfo(Visitor *v, const char *name,
                 BlockDeviceInfo **obj, Error **errp);

bool visit_type_BlockDeviceIoStatus(Visitor *v, const char *name,
                 BlockDeviceIoStatus *obj, Error **errp);

bool visit_type_BlockDirtyInfo_members(Visitor *v, BlockDirtyInfo *obj, Error **errp);

bool visit_type_BlockDirtyInfo(Visitor *v, const char *name,
                 BlockDirtyInfo **obj, Error **errp);

bool visit_type_Qcow2BitmapInfoFlags(Visitor *v, const char *name,
                 Qcow2BitmapInfoFlags *obj, Error **errp);

bool visit_type_Qcow2BitmapInfoFlagsList(Visitor *v, const char *name,
                 Qcow2BitmapInfoFlagsList **obj, Error **errp);

bool visit_type_Qcow2BitmapInfo_members(Visitor *v, Qcow2BitmapInfo *obj, Error **errp);

bool visit_type_Qcow2BitmapInfo(Visitor *v, const char *name,
                 Qcow2BitmapInfo **obj, Error **errp);

bool visit_type_BlockLatencyHistogramInfo_members(Visitor *v, BlockLatencyHistogramInfo *obj, Error **errp);

bool visit_type_BlockLatencyHistogramInfo(Visitor *v, const char *name,
                 BlockLatencyHistogramInfo **obj, Error **errp);

bool visit_type_BlockInfo_members(Visitor *v, BlockInfo *obj, Error **errp);

bool visit_type_BlockInfo(Visitor *v, const char *name,
                 BlockInfo **obj, Error **errp);

bool visit_type_BlockMeasureInfo_members(Visitor *v, BlockMeasureInfo *obj, Error **errp);

bool visit_type_BlockMeasureInfo(Visitor *v, const char *name,
                 BlockMeasureInfo **obj, Error **errp);

bool visit_type_BlockInfoList(Visitor *v, const char *name,
                 BlockInfoList **obj, Error **errp);

bool visit_type_BlockDeviceTimedStats_members(Visitor *v, BlockDeviceTimedStats *obj, Error **errp);

bool visit_type_BlockDeviceTimedStats(Visitor *v, const char *name,
                 BlockDeviceTimedStats **obj, Error **errp);

bool visit_type_BlockDeviceTimedStatsList(Visitor *v, const char *name,
                 BlockDeviceTimedStatsList **obj, Error **errp);

bool visit_type_BlockDeviceStats_members(Visitor *v, BlockDeviceStats *obj, Error **errp);

bool visit_type_BlockDeviceStats(Visitor *v, const char *name,
                 BlockDeviceStats **obj, Error **errp);

bool visit_type_BlockStatsSpecificFile_members(Visitor *v, BlockStatsSpecificFile *obj, Error **errp);

bool visit_type_BlockStatsSpecificFile(Visitor *v, const char *name,
                 BlockStatsSpecificFile **obj, Error **errp);

bool visit_type_BlockStatsSpecificNvme_members(Visitor *v, BlockStatsSpecificNvme *obj, Error **errp);

bool visit_type_BlockStatsSpecificNvme(Visitor *v, const char *name,
                 BlockStatsSpecificNvme **obj, Error **errp);

bool visit_type_q_obj_BlockStatsSpecific_base_members(Visitor *v, q_obj_BlockStatsSpecific_base *obj, Error **errp);

bool visit_type_BlockStatsSpecific_members(Visitor *v, BlockStatsSpecific *obj, Error **errp);

bool visit_type_BlockStatsSpecific(Visitor *v, const char *name,
                 BlockStatsSpecific **obj, Error **errp);

bool visit_type_BlockStats_members(Visitor *v, BlockStats *obj, Error **errp);

bool visit_type_BlockStats(Visitor *v, const char *name,
                 BlockStats **obj, Error **errp);

bool visit_type_q_obj_query_blockstats_arg_members(Visitor *v, q_obj_query_blockstats_arg *obj, Error **errp);

bool visit_type_BlockStatsList(Visitor *v, const char *name,
                 BlockStatsList **obj, Error **errp);

bool visit_type_BlockdevOnError(Visitor *v, const char *name,
                 BlockdevOnError *obj, Error **errp);

bool visit_type_MirrorSyncMode(Visitor *v, const char *name,
                 MirrorSyncMode *obj, Error **errp);

bool visit_type_BitmapSyncMode(Visitor *v, const char *name,
                 BitmapSyncMode *obj, Error **errp);

bool visit_type_MirrorCopyMode(Visitor *v, const char *name,
                 MirrorCopyMode *obj, Error **errp);

bool visit_type_BlockJobInfo_members(Visitor *v, BlockJobInfo *obj, Error **errp);

bool visit_type_BlockJobInfo(Visitor *v, const char *name,
                 BlockJobInfo **obj, Error **errp);

bool visit_type_BlockJobInfoList(Visitor *v, const char *name,
                 BlockJobInfoList **obj, Error **errp);

bool visit_type_q_obj_block_resize_arg_members(Visitor *v, q_obj_block_resize_arg *obj, Error **errp);

bool visit_type_NewImageMode(Visitor *v, const char *name,
                 NewImageMode *obj, Error **errp);

bool visit_type_BlockdevSnapshotSync_members(Visitor *v, BlockdevSnapshotSync *obj, Error **errp);

bool visit_type_BlockdevSnapshotSync(Visitor *v, const char *name,
                 BlockdevSnapshotSync **obj, Error **errp);

bool visit_type_BlockdevSnapshot_members(Visitor *v, BlockdevSnapshot *obj, Error **errp);

bool visit_type_BlockdevSnapshot(Visitor *v, const char *name,
                 BlockdevSnapshot **obj, Error **errp);

bool visit_type_BackupPerf_members(Visitor *v, BackupPerf *obj, Error **errp);

bool visit_type_BackupPerf(Visitor *v, const char *name,
                 BackupPerf **obj, Error **errp);

bool visit_type_BackupCommon_members(Visitor *v, BackupCommon *obj, Error **errp);

bool visit_type_BackupCommon(Visitor *v, const char *name,
                 BackupCommon **obj, Error **errp);

bool visit_type_DriveBackup_members(Visitor *v, DriveBackup *obj, Error **errp);

bool visit_type_DriveBackup(Visitor *v, const char *name,
                 DriveBackup **obj, Error **errp);

bool visit_type_BlockdevBackup_members(Visitor *v, BlockdevBackup *obj, Error **errp);

bool visit_type_BlockdevBackup(Visitor *v, const char *name,
                 BlockdevBackup **obj, Error **errp);

bool visit_type_q_obj_change_backing_file_arg_members(Visitor *v, q_obj_change_backing_file_arg *obj, Error **errp);

bool visit_type_q_obj_block_commit_arg_members(Visitor *v, q_obj_block_commit_arg *obj, Error **errp);

bool visit_type_q_obj_query_named_block_nodes_arg_members(Visitor *v, q_obj_query_named_block_nodes_arg *obj, Error **errp);

bool visit_type_BlockDeviceInfoList(Visitor *v, const char *name,
                 BlockDeviceInfoList **obj, Error **errp);

bool visit_type_XDbgBlockGraphNodeType(Visitor *v, const char *name,
                 XDbgBlockGraphNodeType *obj, Error **errp);

bool visit_type_XDbgBlockGraphNode_members(Visitor *v, XDbgBlockGraphNode *obj, Error **errp);

bool visit_type_XDbgBlockGraphNode(Visitor *v, const char *name,
                 XDbgBlockGraphNode **obj, Error **errp);

bool visit_type_BlockPermission(Visitor *v, const char *name,
                 BlockPermission *obj, Error **errp);

bool visit_type_BlockPermissionList(Visitor *v, const char *name,
                 BlockPermissionList **obj, Error **errp);

bool visit_type_XDbgBlockGraphEdge_members(Visitor *v, XDbgBlockGraphEdge *obj, Error **errp);

bool visit_type_XDbgBlockGraphEdge(Visitor *v, const char *name,
                 XDbgBlockGraphEdge **obj, Error **errp);

bool visit_type_XDbgBlockGraphNodeList(Visitor *v, const char *name,
                 XDbgBlockGraphNodeList **obj, Error **errp);

bool visit_type_XDbgBlockGraphEdgeList(Visitor *v, const char *name,
                 XDbgBlockGraphEdgeList **obj, Error **errp);

bool visit_type_XDbgBlockGraph_members(Visitor *v, XDbgBlockGraph *obj, Error **errp);

bool visit_type_XDbgBlockGraph(Visitor *v, const char *name,
                 XDbgBlockGraph **obj, Error **errp);

bool visit_type_DriveMirror_members(Visitor *v, DriveMirror *obj, Error **errp);

bool visit_type_DriveMirror(Visitor *v, const char *name,
                 DriveMirror **obj, Error **errp);

bool visit_type_BlockDirtyBitmap_members(Visitor *v, BlockDirtyBitmap *obj, Error **errp);

bool visit_type_BlockDirtyBitmap(Visitor *v, const char *name,
                 BlockDirtyBitmap **obj, Error **errp);

bool visit_type_BlockDirtyBitmapAdd_members(Visitor *v, BlockDirtyBitmapAdd *obj, Error **errp);

bool visit_type_BlockDirtyBitmapAdd(Visitor *v, const char *name,
                 BlockDirtyBitmapAdd **obj, Error **errp);

bool visit_type_BlockDirtyBitmapMergeSource(Visitor *v, const char *name,
                 BlockDirtyBitmapMergeSource **obj, Error **errp);

bool visit_type_BlockDirtyBitmapMergeSourceList(Visitor *v, const char *name,
                 BlockDirtyBitmapMergeSourceList **obj, Error **errp);

bool visit_type_BlockDirtyBitmapMerge_members(Visitor *v, BlockDirtyBitmapMerge *obj, Error **errp);

bool visit_type_BlockDirtyBitmapMerge(Visitor *v, const char *name,
                 BlockDirtyBitmapMerge **obj, Error **errp);

bool visit_type_BlockDirtyBitmapSha256_members(Visitor *v, BlockDirtyBitmapSha256 *obj, Error **errp);

bool visit_type_BlockDirtyBitmapSha256(Visitor *v, const char *name,
                 BlockDirtyBitmapSha256 **obj, Error **errp);

bool visit_type_q_obj_blockdev_mirror_arg_members(Visitor *v, q_obj_blockdev_mirror_arg *obj, Error **errp);

bool visit_type_BlockIOThrottle_members(Visitor *v, BlockIOThrottle *obj, Error **errp);

bool visit_type_BlockIOThrottle(Visitor *v, const char *name,
                 BlockIOThrottle **obj, Error **errp);

bool visit_type_ThrottleLimits_members(Visitor *v, ThrottleLimits *obj, Error **errp);

bool visit_type_ThrottleLimits(Visitor *v, const char *name,
                 ThrottleLimits **obj, Error **errp);

bool visit_type_ThrottleGroupProperties_members(Visitor *v, ThrottleGroupProperties *obj, Error **errp);

bool visit_type_ThrottleGroupProperties(Visitor *v, const char *name,
                 ThrottleGroupProperties **obj, Error **errp);

bool visit_type_q_obj_block_stream_arg_members(Visitor *v, q_obj_block_stream_arg *obj, Error **errp);

bool visit_type_q_obj_block_job_set_speed_arg_members(Visitor *v, q_obj_block_job_set_speed_arg *obj, Error **errp);

bool visit_type_q_obj_block_job_cancel_arg_members(Visitor *v, q_obj_block_job_cancel_arg *obj, Error **errp);

bool visit_type_q_obj_block_job_pause_arg_members(Visitor *v, q_obj_block_job_pause_arg *obj, Error **errp);

bool visit_type_q_obj_block_job_resume_arg_members(Visitor *v, q_obj_block_job_resume_arg *obj, Error **errp);

bool visit_type_q_obj_block_job_complete_arg_members(Visitor *v, q_obj_block_job_complete_arg *obj, Error **errp);

bool visit_type_q_obj_block_job_dismiss_arg_members(Visitor *v, q_obj_block_job_dismiss_arg *obj, Error **errp);

bool visit_type_q_obj_block_job_finalize_arg_members(Visitor *v, q_obj_block_job_finalize_arg *obj, Error **errp);

bool visit_type_BlockdevDiscardOptions(Visitor *v, const char *name,
                 BlockdevDiscardOptions *obj, Error **errp);

bool visit_type_BlockdevDetectZeroesOptions(Visitor *v, const char *name,
                 BlockdevDetectZeroesOptions *obj, Error **errp);

bool visit_type_BlockdevAioOptions(Visitor *v, const char *name,
                 BlockdevAioOptions *obj, Error **errp);

bool visit_type_BlockdevCacheOptions_members(Visitor *v, BlockdevCacheOptions *obj, Error **errp);

bool visit_type_BlockdevCacheOptions(Visitor *v, const char *name,
                 BlockdevCacheOptions **obj, Error **errp);

bool visit_type_BlockdevDriver(Visitor *v, const char *name,
                 BlockdevDriver *obj, Error **errp);

bool visit_type_BlockdevOptionsFile_members(Visitor *v, BlockdevOptionsFile *obj, Error **errp);

bool visit_type_BlockdevOptionsFile(Visitor *v, const char *name,
                 BlockdevOptionsFile **obj, Error **errp);

bool visit_type_BlockdevOptionsNull_members(Visitor *v, BlockdevOptionsNull *obj, Error **errp);

bool visit_type_BlockdevOptionsNull(Visitor *v, const char *name,
                 BlockdevOptionsNull **obj, Error **errp);

bool visit_type_BlockdevOptionsNVMe_members(Visitor *v, BlockdevOptionsNVMe *obj, Error **errp);

bool visit_type_BlockdevOptionsNVMe(Visitor *v, const char *name,
                 BlockdevOptionsNVMe **obj, Error **errp);

bool visit_type_BlockdevOptionsVVFAT_members(Visitor *v, BlockdevOptionsVVFAT *obj, Error **errp);

bool visit_type_BlockdevOptionsVVFAT(Visitor *v, const char *name,
                 BlockdevOptionsVVFAT **obj, Error **errp);

bool visit_type_BlockdevOptionsGenericFormat_members(Visitor *v, BlockdevOptionsGenericFormat *obj, Error **errp);

bool visit_type_BlockdevOptionsGenericFormat(Visitor *v, const char *name,
                 BlockdevOptionsGenericFormat **obj, Error **errp);

bool visit_type_BlockdevOptionsLUKS_members(Visitor *v, BlockdevOptionsLUKS *obj, Error **errp);

bool visit_type_BlockdevOptionsLUKS(Visitor *v, const char *name,
                 BlockdevOptionsLUKS **obj, Error **errp);

bool visit_type_BlockdevOptionsGenericCOWFormat_members(Visitor *v, BlockdevOptionsGenericCOWFormat *obj, Error **errp);

bool visit_type_BlockdevOptionsGenericCOWFormat(Visitor *v, const char *name,
                 BlockdevOptionsGenericCOWFormat **obj, Error **errp);

bool visit_type_Qcow2OverlapCheckMode(Visitor *v, const char *name,
                 Qcow2OverlapCheckMode *obj, Error **errp);

bool visit_type_Qcow2OverlapCheckFlags_members(Visitor *v, Qcow2OverlapCheckFlags *obj, Error **errp);

bool visit_type_Qcow2OverlapCheckFlags(Visitor *v, const char *name,
                 Qcow2OverlapCheckFlags **obj, Error **errp);

bool visit_type_Qcow2OverlapChecks(Visitor *v, const char *name,
                 Qcow2OverlapChecks **obj, Error **errp);

bool visit_type_BlockdevQcowEncryptionFormat(Visitor *v, const char *name,
                 BlockdevQcowEncryptionFormat *obj, Error **errp);

bool visit_type_q_obj_BlockdevQcowEncryption_base_members(Visitor *v, q_obj_BlockdevQcowEncryption_base *obj, Error **errp);

bool visit_type_BlockdevQcowEncryption_members(Visitor *v, BlockdevQcowEncryption *obj, Error **errp);

bool visit_type_BlockdevQcowEncryption(Visitor *v, const char *name,
                 BlockdevQcowEncryption **obj, Error **errp);

bool visit_type_BlockdevOptionsQcow_members(Visitor *v, BlockdevOptionsQcow *obj, Error **errp);

bool visit_type_BlockdevOptionsQcow(Visitor *v, const char *name,
                 BlockdevOptionsQcow **obj, Error **errp);

bool visit_type_BlockdevQcow2EncryptionFormat(Visitor *v, const char *name,
                 BlockdevQcow2EncryptionFormat *obj, Error **errp);

bool visit_type_q_obj_BlockdevQcow2Encryption_base_members(Visitor *v, q_obj_BlockdevQcow2Encryption_base *obj, Error **errp);

bool visit_type_BlockdevQcow2Encryption_members(Visitor *v, BlockdevQcow2Encryption *obj, Error **errp);

bool visit_type_BlockdevQcow2Encryption(Visitor *v, const char *name,
                 BlockdevQcow2Encryption **obj, Error **errp);

bool visit_type_BlockdevOptionsPreallocate_members(Visitor *v, BlockdevOptionsPreallocate *obj, Error **errp);

bool visit_type_BlockdevOptionsPreallocate(Visitor *v, const char *name,
                 BlockdevOptionsPreallocate **obj, Error **errp);

bool visit_type_BlockdevOptionsQcow2_members(Visitor *v, BlockdevOptionsQcow2 *obj, Error **errp);

bool visit_type_BlockdevOptionsQcow2(Visitor *v, const char *name,
                 BlockdevOptionsQcow2 **obj, Error **errp);

bool visit_type_SshHostKeyCheckMode(Visitor *v, const char *name,
                 SshHostKeyCheckMode *obj, Error **errp);

bool visit_type_SshHostKeyCheckHashType(Visitor *v, const char *name,
                 SshHostKeyCheckHashType *obj, Error **errp);

bool visit_type_SshHostKeyHash_members(Visitor *v, SshHostKeyHash *obj, Error **errp);

bool visit_type_SshHostKeyHash(Visitor *v, const char *name,
                 SshHostKeyHash **obj, Error **errp);

bool visit_type_q_obj_SshHostKeyCheck_base_members(Visitor *v, q_obj_SshHostKeyCheck_base *obj, Error **errp);

bool visit_type_SshHostKeyCheck_members(Visitor *v, SshHostKeyCheck *obj, Error **errp);

bool visit_type_SshHostKeyCheck(Visitor *v, const char *name,
                 SshHostKeyCheck **obj, Error **errp);

bool visit_type_BlockdevOptionsSsh_members(Visitor *v, BlockdevOptionsSsh *obj, Error **errp);

bool visit_type_BlockdevOptionsSsh(Visitor *v, const char *name,
                 BlockdevOptionsSsh **obj, Error **errp);

bool visit_type_BlkdebugEvent(Visitor *v, const char *name,
                 BlkdebugEvent *obj, Error **errp);

bool visit_type_BlkdebugIOType(Visitor *v, const char *name,
                 BlkdebugIOType *obj, Error **errp);

bool visit_type_BlkdebugInjectErrorOptions_members(Visitor *v, BlkdebugInjectErrorOptions *obj, Error **errp);

bool visit_type_BlkdebugInjectErrorOptions(Visitor *v, const char *name,
                 BlkdebugInjectErrorOptions **obj, Error **errp);

bool visit_type_BlkdebugSetStateOptions_members(Visitor *v, BlkdebugSetStateOptions *obj, Error **errp);

bool visit_type_BlkdebugSetStateOptions(Visitor *v, const char *name,
                 BlkdebugSetStateOptions **obj, Error **errp);

bool visit_type_BlkdebugInjectErrorOptionsList(Visitor *v, const char *name,
                 BlkdebugInjectErrorOptionsList **obj, Error **errp);

bool visit_type_BlkdebugSetStateOptionsList(Visitor *v, const char *name,
                 BlkdebugSetStateOptionsList **obj, Error **errp);

bool visit_type_BlockdevOptionsBlkdebug_members(Visitor *v, BlockdevOptionsBlkdebug *obj, Error **errp);

bool visit_type_BlockdevOptionsBlkdebug(Visitor *v, const char *name,
                 BlockdevOptionsBlkdebug **obj, Error **errp);

bool visit_type_BlockdevOptionsBlklogwrites_members(Visitor *v, BlockdevOptionsBlklogwrites *obj, Error **errp);

bool visit_type_BlockdevOptionsBlklogwrites(Visitor *v, const char *name,
                 BlockdevOptionsBlklogwrites **obj, Error **errp);

bool visit_type_BlockdevOptionsBlkverify_members(Visitor *v, BlockdevOptionsBlkverify *obj, Error **errp);

bool visit_type_BlockdevOptionsBlkverify(Visitor *v, const char *name,
                 BlockdevOptionsBlkverify **obj, Error **errp);

bool visit_type_BlockdevOptionsBlkreplay_members(Visitor *v, BlockdevOptionsBlkreplay *obj, Error **errp);

bool visit_type_BlockdevOptionsBlkreplay(Visitor *v, const char *name,
                 BlockdevOptionsBlkreplay **obj, Error **errp);

bool visit_type_QuorumReadPattern(Visitor *v, const char *name,
                 QuorumReadPattern *obj, Error **errp);

bool visit_type_BlockdevRefList(Visitor *v, const char *name,
                 BlockdevRefList **obj, Error **errp);

bool visit_type_BlockdevOptionsQuorum_members(Visitor *v, BlockdevOptionsQuorum *obj, Error **errp);

bool visit_type_BlockdevOptionsQuorum(Visitor *v, const char *name,
                 BlockdevOptionsQuorum **obj, Error **errp);

bool visit_type_BlockdevOptionsGluster_members(Visitor *v, BlockdevOptionsGluster *obj, Error **errp);

bool visit_type_BlockdevOptionsGluster(Visitor *v, const char *name,
                 BlockdevOptionsGluster **obj, Error **errp);

bool visit_type_IscsiTransport(Visitor *v, const char *name,
                 IscsiTransport *obj, Error **errp);

bool visit_type_IscsiHeaderDigest(Visitor *v, const char *name,
                 IscsiHeaderDigest *obj, Error **errp);

bool visit_type_BlockdevOptionsIscsi_members(Visitor *v, BlockdevOptionsIscsi *obj, Error **errp);

bool visit_type_BlockdevOptionsIscsi(Visitor *v, const char *name,
                 BlockdevOptionsIscsi **obj, Error **errp);

bool visit_type_RbdAuthMode(Visitor *v, const char *name,
                 RbdAuthMode *obj, Error **errp);

bool visit_type_RbdImageEncryptionFormat(Visitor *v, const char *name,
                 RbdImageEncryptionFormat *obj, Error **errp);

bool visit_type_RbdEncryptionOptionsLUKSBase_members(Visitor *v, RbdEncryptionOptionsLUKSBase *obj, Error **errp);

bool visit_type_RbdEncryptionOptionsLUKSBase(Visitor *v, const char *name,
                 RbdEncryptionOptionsLUKSBase **obj, Error **errp);

bool visit_type_RbdEncryptionCreateOptionsLUKSBase_members(Visitor *v, RbdEncryptionCreateOptionsLUKSBase *obj, Error **errp);

bool visit_type_RbdEncryptionCreateOptionsLUKSBase(Visitor *v, const char *name,
                 RbdEncryptionCreateOptionsLUKSBase **obj, Error **errp);

bool visit_type_RbdEncryptionOptionsLUKS_members(Visitor *v, RbdEncryptionOptionsLUKS *obj, Error **errp);

bool visit_type_RbdEncryptionOptionsLUKS(Visitor *v, const char *name,
                 RbdEncryptionOptionsLUKS **obj, Error **errp);

bool visit_type_RbdEncryptionOptionsLUKS2_members(Visitor *v, RbdEncryptionOptionsLUKS2 *obj, Error **errp);

bool visit_type_RbdEncryptionOptionsLUKS2(Visitor *v, const char *name,
                 RbdEncryptionOptionsLUKS2 **obj, Error **errp);

bool visit_type_RbdEncryptionCreateOptionsLUKS_members(Visitor *v, RbdEncryptionCreateOptionsLUKS *obj, Error **errp);

bool visit_type_RbdEncryptionCreateOptionsLUKS(Visitor *v, const char *name,
                 RbdEncryptionCreateOptionsLUKS **obj, Error **errp);

bool visit_type_RbdEncryptionCreateOptionsLUKS2_members(Visitor *v, RbdEncryptionCreateOptionsLUKS2 *obj, Error **errp);

bool visit_type_RbdEncryptionCreateOptionsLUKS2(Visitor *v, const char *name,
                 RbdEncryptionCreateOptionsLUKS2 **obj, Error **errp);

bool visit_type_q_obj_RbdEncryptionOptions_base_members(Visitor *v, q_obj_RbdEncryptionOptions_base *obj, Error **errp);

bool visit_type_RbdEncryptionOptions_members(Visitor *v, RbdEncryptionOptions *obj, Error **errp);

bool visit_type_RbdEncryptionOptions(Visitor *v, const char *name,
                 RbdEncryptionOptions **obj, Error **errp);

bool visit_type_q_obj_RbdEncryptionCreateOptions_base_members(Visitor *v, q_obj_RbdEncryptionCreateOptions_base *obj, Error **errp);

bool visit_type_RbdEncryptionCreateOptions_members(Visitor *v, RbdEncryptionCreateOptions *obj, Error **errp);

bool visit_type_RbdEncryptionCreateOptions(Visitor *v, const char *name,
                 RbdEncryptionCreateOptions **obj, Error **errp);

bool visit_type_RbdAuthModeList(Visitor *v, const char *name,
                 RbdAuthModeList **obj, Error **errp);

bool visit_type_BlockdevOptionsRbd_members(Visitor *v, BlockdevOptionsRbd *obj, Error **errp);

bool visit_type_BlockdevOptionsRbd(Visitor *v, const char *name,
                 BlockdevOptionsRbd **obj, Error **errp);

#if defined(CONFIG_REPLICATION)
bool visit_type_ReplicationMode(Visitor *v, const char *name,
                 ReplicationMode *obj, Error **errp);
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
bool visit_type_BlockdevOptionsReplication_members(Visitor *v, BlockdevOptionsReplication *obj, Error **errp);

bool visit_type_BlockdevOptionsReplication(Visitor *v, const char *name,
                 BlockdevOptionsReplication **obj, Error **errp);
#endif /* defined(CONFIG_REPLICATION) */

bool visit_type_NFSTransport(Visitor *v, const char *name,
                 NFSTransport *obj, Error **errp);

bool visit_type_NFSServer_members(Visitor *v, NFSServer *obj, Error **errp);

bool visit_type_NFSServer(Visitor *v, const char *name,
                 NFSServer **obj, Error **errp);

bool visit_type_BlockdevOptionsNfs_members(Visitor *v, BlockdevOptionsNfs *obj, Error **errp);

bool visit_type_BlockdevOptionsNfs(Visitor *v, const char *name,
                 BlockdevOptionsNfs **obj, Error **errp);

bool visit_type_BlockdevOptionsCurlBase_members(Visitor *v, BlockdevOptionsCurlBase *obj, Error **errp);

bool visit_type_BlockdevOptionsCurlBase(Visitor *v, const char *name,
                 BlockdevOptionsCurlBase **obj, Error **errp);

bool visit_type_BlockdevOptionsCurlHttp_members(Visitor *v, BlockdevOptionsCurlHttp *obj, Error **errp);

bool visit_type_BlockdevOptionsCurlHttp(Visitor *v, const char *name,
                 BlockdevOptionsCurlHttp **obj, Error **errp);

bool visit_type_BlockdevOptionsCurlHttps_members(Visitor *v, BlockdevOptionsCurlHttps *obj, Error **errp);

bool visit_type_BlockdevOptionsCurlHttps(Visitor *v, const char *name,
                 BlockdevOptionsCurlHttps **obj, Error **errp);

bool visit_type_BlockdevOptionsCurlFtp_members(Visitor *v, BlockdevOptionsCurlFtp *obj, Error **errp);

bool visit_type_BlockdevOptionsCurlFtp(Visitor *v, const char *name,
                 BlockdevOptionsCurlFtp **obj, Error **errp);

bool visit_type_BlockdevOptionsCurlFtps_members(Visitor *v, BlockdevOptionsCurlFtps *obj, Error **errp);

bool visit_type_BlockdevOptionsCurlFtps(Visitor *v, const char *name,
                 BlockdevOptionsCurlFtps **obj, Error **errp);

bool visit_type_BlockdevOptionsNbd_members(Visitor *v, BlockdevOptionsNbd *obj, Error **errp);

bool visit_type_BlockdevOptionsNbd(Visitor *v, const char *name,
                 BlockdevOptionsNbd **obj, Error **errp);

bool visit_type_BlockdevOptionsRaw_members(Visitor *v, BlockdevOptionsRaw *obj, Error **errp);

bool visit_type_BlockdevOptionsRaw(Visitor *v, const char *name,
                 BlockdevOptionsRaw **obj, Error **errp);

bool visit_type_BlockdevOptionsThrottle_members(Visitor *v, BlockdevOptionsThrottle *obj, Error **errp);

bool visit_type_BlockdevOptionsThrottle(Visitor *v, const char *name,
                 BlockdevOptionsThrottle **obj, Error **errp);

bool visit_type_BlockdevOptionsCor_members(Visitor *v, BlockdevOptionsCor *obj, Error **errp);

bool visit_type_BlockdevOptionsCor(Visitor *v, const char *name,
                 BlockdevOptionsCor **obj, Error **errp);

bool visit_type_BlockdevOptionsCbw_members(Visitor *v, BlockdevOptionsCbw *obj, Error **errp);

bool visit_type_BlockdevOptionsCbw(Visitor *v, const char *name,
                 BlockdevOptionsCbw **obj, Error **errp);

bool visit_type_q_obj_BlockdevOptions_base_members(Visitor *v, q_obj_BlockdevOptions_base *obj, Error **errp);

bool visit_type_BlockdevOptions_members(Visitor *v, BlockdevOptions *obj, Error **errp);

bool visit_type_BlockdevOptions(Visitor *v, const char *name,
                 BlockdevOptions **obj, Error **errp);

bool visit_type_BlockdevRef(Visitor *v, const char *name,
                 BlockdevRef **obj, Error **errp);

bool visit_type_BlockdevRefOrNull(Visitor *v, const char *name,
                 BlockdevRefOrNull **obj, Error **errp);

bool visit_type_BlockdevOptionsList(Visitor *v, const char *name,
                 BlockdevOptionsList **obj, Error **errp);

bool visit_type_q_obj_blockdev_reopen_arg_members(Visitor *v, q_obj_blockdev_reopen_arg *obj, Error **errp);

bool visit_type_q_obj_blockdev_del_arg_members(Visitor *v, q_obj_blockdev_del_arg *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsFile_members(Visitor *v, BlockdevCreateOptionsFile *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsFile(Visitor *v, const char *name,
                 BlockdevCreateOptionsFile **obj, Error **errp);

bool visit_type_BlockdevCreateOptionsGluster_members(Visitor *v, BlockdevCreateOptionsGluster *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsGluster(Visitor *v, const char *name,
                 BlockdevCreateOptionsGluster **obj, Error **errp);

bool visit_type_BlockdevCreateOptionsLUKS_members(Visitor *v, BlockdevCreateOptionsLUKS *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsLUKS(Visitor *v, const char *name,
                 BlockdevCreateOptionsLUKS **obj, Error **errp);

bool visit_type_BlockdevCreateOptionsNfs_members(Visitor *v, BlockdevCreateOptionsNfs *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsNfs(Visitor *v, const char *name,
                 BlockdevCreateOptionsNfs **obj, Error **errp);

bool visit_type_BlockdevCreateOptionsParallels_members(Visitor *v, BlockdevCreateOptionsParallels *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsParallels(Visitor *v, const char *name,
                 BlockdevCreateOptionsParallels **obj, Error **errp);

bool visit_type_BlockdevCreateOptionsQcow_members(Visitor *v, BlockdevCreateOptionsQcow *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsQcow(Visitor *v, const char *name,
                 BlockdevCreateOptionsQcow **obj, Error **errp);

bool visit_type_BlockdevQcow2Version(Visitor *v, const char *name,
                 BlockdevQcow2Version *obj, Error **errp);

bool visit_type_Qcow2CompressionType(Visitor *v, const char *name,
                 Qcow2CompressionType *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsQcow2_members(Visitor *v, BlockdevCreateOptionsQcow2 *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsQcow2(Visitor *v, const char *name,
                 BlockdevCreateOptionsQcow2 **obj, Error **errp);

bool visit_type_BlockdevCreateOptionsQed_members(Visitor *v, BlockdevCreateOptionsQed *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsQed(Visitor *v, const char *name,
                 BlockdevCreateOptionsQed **obj, Error **errp);

bool visit_type_BlockdevCreateOptionsRbd_members(Visitor *v, BlockdevCreateOptionsRbd *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsRbd(Visitor *v, const char *name,
                 BlockdevCreateOptionsRbd **obj, Error **errp);

bool visit_type_BlockdevVmdkSubformat(Visitor *v, const char *name,
                 BlockdevVmdkSubformat *obj, Error **errp);

bool visit_type_BlockdevVmdkAdapterType(Visitor *v, const char *name,
                 BlockdevVmdkAdapterType *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsVmdk_members(Visitor *v, BlockdevCreateOptionsVmdk *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsVmdk(Visitor *v, const char *name,
                 BlockdevCreateOptionsVmdk **obj, Error **errp);

bool visit_type_BlockdevCreateOptionsSsh_members(Visitor *v, BlockdevCreateOptionsSsh *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsSsh(Visitor *v, const char *name,
                 BlockdevCreateOptionsSsh **obj, Error **errp);

bool visit_type_BlockdevCreateOptionsVdi_members(Visitor *v, BlockdevCreateOptionsVdi *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsVdi(Visitor *v, const char *name,
                 BlockdevCreateOptionsVdi **obj, Error **errp);

bool visit_type_BlockdevVhdxSubformat(Visitor *v, const char *name,
                 BlockdevVhdxSubformat *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsVhdx_members(Visitor *v, BlockdevCreateOptionsVhdx *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsVhdx(Visitor *v, const char *name,
                 BlockdevCreateOptionsVhdx **obj, Error **errp);

bool visit_type_BlockdevVpcSubformat(Visitor *v, const char *name,
                 BlockdevVpcSubformat *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsVpc_members(Visitor *v, BlockdevCreateOptionsVpc *obj, Error **errp);

bool visit_type_BlockdevCreateOptionsVpc(Visitor *v, const char *name,
                 BlockdevCreateOptionsVpc **obj, Error **errp);

bool visit_type_q_obj_BlockdevCreateOptions_base_members(Visitor *v, q_obj_BlockdevCreateOptions_base *obj, Error **errp);

bool visit_type_BlockdevCreateOptions_members(Visitor *v, BlockdevCreateOptions *obj, Error **errp);

bool visit_type_BlockdevCreateOptions(Visitor *v, const char *name,
                 BlockdevCreateOptions **obj, Error **errp);

bool visit_type_q_obj_blockdev_create_arg_members(Visitor *v, q_obj_blockdev_create_arg *obj, Error **errp);

bool visit_type_BlockdevAmendOptionsLUKS_members(Visitor *v, BlockdevAmendOptionsLUKS *obj, Error **errp);

bool visit_type_BlockdevAmendOptionsLUKS(Visitor *v, const char *name,
                 BlockdevAmendOptionsLUKS **obj, Error **errp);

bool visit_type_BlockdevAmendOptionsQcow2_members(Visitor *v, BlockdevAmendOptionsQcow2 *obj, Error **errp);

bool visit_type_BlockdevAmendOptionsQcow2(Visitor *v, const char *name,
                 BlockdevAmendOptionsQcow2 **obj, Error **errp);

bool visit_type_q_obj_BlockdevAmendOptions_base_members(Visitor *v, q_obj_BlockdevAmendOptions_base *obj, Error **errp);

bool visit_type_BlockdevAmendOptions_members(Visitor *v, BlockdevAmendOptions *obj, Error **errp);

bool visit_type_BlockdevAmendOptions(Visitor *v, const char *name,
                 BlockdevAmendOptions **obj, Error **errp);

bool visit_type_q_obj_x_blockdev_amend_arg_members(Visitor *v, q_obj_x_blockdev_amend_arg *obj, Error **errp);

bool visit_type_BlockErrorAction(Visitor *v, const char *name,
                 BlockErrorAction *obj, Error **errp);

bool visit_type_q_obj_BLOCK_IMAGE_CORRUPTED_arg_members(Visitor *v, q_obj_BLOCK_IMAGE_CORRUPTED_arg *obj, Error **errp);

bool visit_type_q_obj_BLOCK_IO_ERROR_arg_members(Visitor *v, q_obj_BLOCK_IO_ERROR_arg *obj, Error **errp);

bool visit_type_q_obj_BLOCK_JOB_COMPLETED_arg_members(Visitor *v, q_obj_BLOCK_JOB_COMPLETED_arg *obj, Error **errp);

bool visit_type_q_obj_BLOCK_JOB_CANCELLED_arg_members(Visitor *v, q_obj_BLOCK_JOB_CANCELLED_arg *obj, Error **errp);

bool visit_type_q_obj_BLOCK_JOB_ERROR_arg_members(Visitor *v, q_obj_BLOCK_JOB_ERROR_arg *obj, Error **errp);

bool visit_type_q_obj_BLOCK_JOB_READY_arg_members(Visitor *v, q_obj_BLOCK_JOB_READY_arg *obj, Error **errp);

bool visit_type_q_obj_BLOCK_JOB_PENDING_arg_members(Visitor *v, q_obj_BLOCK_JOB_PENDING_arg *obj, Error **errp);

bool visit_type_PreallocMode(Visitor *v, const char *name,
                 PreallocMode *obj, Error **errp);

bool visit_type_q_obj_BLOCK_WRITE_THRESHOLD_arg_members(Visitor *v, q_obj_BLOCK_WRITE_THRESHOLD_arg *obj, Error **errp);

bool visit_type_q_obj_block_set_write_threshold_arg_members(Visitor *v, q_obj_block_set_write_threshold_arg *obj, Error **errp);

bool visit_type_q_obj_x_blockdev_change_arg_members(Visitor *v, q_obj_x_blockdev_change_arg *obj, Error **errp);

bool visit_type_q_obj_x_blockdev_set_iothread_arg_members(Visitor *v, q_obj_x_blockdev_set_iothread_arg *obj, Error **errp);

bool visit_type_QuorumOpType(Visitor *v, const char *name,
                 QuorumOpType *obj, Error **errp);

bool visit_type_q_obj_QUORUM_FAILURE_arg_members(Visitor *v, q_obj_QUORUM_FAILURE_arg *obj, Error **errp);

bool visit_type_q_obj_QUORUM_REPORT_BAD_arg_members(Visitor *v, q_obj_QUORUM_REPORT_BAD_arg *obj, Error **errp);

bool visit_type_BlockdevSnapshotInternal_members(Visitor *v, BlockdevSnapshotInternal *obj, Error **errp);

bool visit_type_BlockdevSnapshotInternal(Visitor *v, const char *name,
                 BlockdevSnapshotInternal **obj, Error **errp);

bool visit_type_q_obj_blockdev_snapshot_delete_internal_sync_arg_members(Visitor *v, q_obj_blockdev_snapshot_delete_internal_sync_arg *obj, Error **errp);

#endif /* QAPI_VISIT_BLOCK_CORE_H */
