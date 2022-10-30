/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_TYPES_TRANSACTION_H
#define QAPI_TYPES_TRANSACTION_H

#include "qapi/qapi-builtin-types.h"
#include "qapi-types-block-core.h"

typedef struct Abort Abort;

typedef enum ActionCompletionMode {
    ACTION_COMPLETION_MODE_INDIVIDUAL,
    ACTION_COMPLETION_MODE_GROUPED,
    ACTION_COMPLETION_MODE__MAX,
} ActionCompletionMode;

#define ActionCompletionMode_str(val) \
    qapi_enum_lookup(&ActionCompletionMode_lookup, (val))

extern const QEnumLookup ActionCompletionMode_lookup;

typedef struct q_obj_Abort_wrapper q_obj_Abort_wrapper;

typedef struct q_obj_BlockDirtyBitmapAdd_wrapper q_obj_BlockDirtyBitmapAdd_wrapper;

typedef struct q_obj_BlockDirtyBitmap_wrapper q_obj_BlockDirtyBitmap_wrapper;

typedef struct q_obj_BlockDirtyBitmapMerge_wrapper q_obj_BlockDirtyBitmapMerge_wrapper;

typedef struct q_obj_BlockdevBackup_wrapper q_obj_BlockdevBackup_wrapper;

typedef struct q_obj_BlockdevSnapshot_wrapper q_obj_BlockdevSnapshot_wrapper;

typedef struct q_obj_BlockdevSnapshotInternal_wrapper q_obj_BlockdevSnapshotInternal_wrapper;

typedef struct q_obj_BlockdevSnapshotSync_wrapper q_obj_BlockdevSnapshotSync_wrapper;

typedef struct q_obj_DriveBackup_wrapper q_obj_DriveBackup_wrapper;

typedef enum TransactionActionKind {
    TRANSACTION_ACTION_KIND_ABORT,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ADD,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_REMOVE,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_CLEAR,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ENABLE,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_DISABLE,
    TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_MERGE,
    TRANSACTION_ACTION_KIND_BLOCKDEV_BACKUP,
    TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT,
    TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_INTERNAL_SYNC,
    TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_SYNC,
    TRANSACTION_ACTION_KIND_DRIVE_BACKUP,
    TRANSACTION_ACTION_KIND__MAX,
} TransactionActionKind;

#define TransactionActionKind_str(val) \
    qapi_enum_lookup(&TransactionActionKind_lookup, (val))

extern const QEnumLookup TransactionActionKind_lookup;

typedef struct TransactionAction TransactionAction;

typedef struct TransactionProperties TransactionProperties;

typedef struct TransactionActionList TransactionActionList;

typedef struct q_obj_transaction_arg q_obj_transaction_arg;

struct Abort {
    char qapi_dummy_for_empty_struct;
};

void qapi_free_Abort(Abort *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Abort, qapi_free_Abort)

struct q_obj_Abort_wrapper {
    Abort *data;
};

struct q_obj_BlockDirtyBitmapAdd_wrapper {
    BlockDirtyBitmapAdd *data;
};

struct q_obj_BlockDirtyBitmap_wrapper {
    BlockDirtyBitmap *data;
};

struct q_obj_BlockDirtyBitmapMerge_wrapper {
    BlockDirtyBitmapMerge *data;
};

struct q_obj_BlockdevBackup_wrapper {
    BlockdevBackup *data;
};

struct q_obj_BlockdevSnapshot_wrapper {
    BlockdevSnapshot *data;
};

struct q_obj_BlockdevSnapshotInternal_wrapper {
    BlockdevSnapshotInternal *data;
};

struct q_obj_BlockdevSnapshotSync_wrapper {
    BlockdevSnapshotSync *data;
};

struct q_obj_DriveBackup_wrapper {
    DriveBackup *data;
};

struct TransactionAction {
    TransactionActionKind type;
    union { /* union tag is @type */
        q_obj_Abort_wrapper abort;
        q_obj_BlockDirtyBitmapAdd_wrapper block_dirty_bitmap_add;
        q_obj_BlockDirtyBitmap_wrapper block_dirty_bitmap_remove;
        q_obj_BlockDirtyBitmap_wrapper block_dirty_bitmap_clear;
        q_obj_BlockDirtyBitmap_wrapper block_dirty_bitmap_enable;
        q_obj_BlockDirtyBitmap_wrapper block_dirty_bitmap_disable;
        q_obj_BlockDirtyBitmapMerge_wrapper block_dirty_bitmap_merge;
        q_obj_BlockdevBackup_wrapper blockdev_backup;
        q_obj_BlockdevSnapshot_wrapper blockdev_snapshot;
        q_obj_BlockdevSnapshotInternal_wrapper blockdev_snapshot_internal_sync;
        q_obj_BlockdevSnapshotSync_wrapper blockdev_snapshot_sync;
        q_obj_DriveBackup_wrapper drive_backup;
    } u;
};

void qapi_free_TransactionAction(TransactionAction *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TransactionAction, qapi_free_TransactionAction)

struct TransactionProperties {
    bool has_completion_mode;
    ActionCompletionMode completion_mode;
};

void qapi_free_TransactionProperties(TransactionProperties *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TransactionProperties, qapi_free_TransactionProperties)

struct TransactionActionList {
    TransactionActionList *next;
    TransactionAction *value;
};

void qapi_free_TransactionActionList(TransactionActionList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TransactionActionList, qapi_free_TransactionActionList)

struct q_obj_transaction_arg {
    TransactionActionList *actions;
    bool has_properties;
    TransactionProperties *properties;
};

#endif /* QAPI_TYPES_TRANSACTION_H */
