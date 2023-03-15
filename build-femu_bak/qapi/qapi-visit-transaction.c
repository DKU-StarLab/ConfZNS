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

#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qapi/qmp/qerror.h"
#include "qapi-visit-transaction.h"

bool visit_type_Abort_members(Visitor *v, Abort *obj, Error **errp)
{
    return true;
}

bool visit_type_Abort(Visitor *v, const char *name,
                 Abort **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Abort), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Abort_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Abort(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ActionCompletionMode(Visitor *v, const char *name,
                 ActionCompletionMode *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &ActionCompletionMode_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_Abort_wrapper_members(Visitor *v, q_obj_Abort_wrapper *obj, Error **errp)
{
    if (!visit_type_Abort(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockDirtyBitmapAdd_wrapper_members(Visitor *v, q_obj_BlockDirtyBitmapAdd_wrapper *obj, Error **errp)
{
    if (!visit_type_BlockDirtyBitmapAdd(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockDirtyBitmap_wrapper_members(Visitor *v, q_obj_BlockDirtyBitmap_wrapper *obj, Error **errp)
{
    if (!visit_type_BlockDirtyBitmap(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockDirtyBitmapMerge_wrapper_members(Visitor *v, q_obj_BlockDirtyBitmapMerge_wrapper *obj, Error **errp)
{
    if (!visit_type_BlockDirtyBitmapMerge(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockdevBackup_wrapper_members(Visitor *v, q_obj_BlockdevBackup_wrapper *obj, Error **errp)
{
    if (!visit_type_BlockdevBackup(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockdevSnapshot_wrapper_members(Visitor *v, q_obj_BlockdevSnapshot_wrapper *obj, Error **errp)
{
    if (!visit_type_BlockdevSnapshot(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockdevSnapshotInternal_wrapper_members(Visitor *v, q_obj_BlockdevSnapshotInternal_wrapper *obj, Error **errp)
{
    if (!visit_type_BlockdevSnapshotInternal(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_BlockdevSnapshotSync_wrapper_members(Visitor *v, q_obj_BlockdevSnapshotSync_wrapper *obj, Error **errp)
{
    if (!visit_type_BlockdevSnapshotSync(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_DriveBackup_wrapper_members(Visitor *v, q_obj_DriveBackup_wrapper *obj, Error **errp)
{
    if (!visit_type_DriveBackup(v, "data", &obj->data, errp)) {
        return false;
    }
    return true;
}

bool visit_type_TransactionActionKind(Visitor *v, const char *name,
                 TransactionActionKind *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &TransactionActionKind_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_TransactionAction_members(Visitor *v, TransactionAction *obj, Error **errp)
{
    if (!visit_type_TransactionActionKind(v, "type", &obj->type, errp)) {
        return false;
    }
    switch (obj->type) {
    case TRANSACTION_ACTION_KIND_ABORT:
        return visit_type_q_obj_Abort_wrapper_members(v, &obj->u.abort, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ADD:
        return visit_type_q_obj_BlockDirtyBitmapAdd_wrapper_members(v, &obj->u.block_dirty_bitmap_add, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_REMOVE:
        return visit_type_q_obj_BlockDirtyBitmap_wrapper_members(v, &obj->u.block_dirty_bitmap_remove, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_CLEAR:
        return visit_type_q_obj_BlockDirtyBitmap_wrapper_members(v, &obj->u.block_dirty_bitmap_clear, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_ENABLE:
        return visit_type_q_obj_BlockDirtyBitmap_wrapper_members(v, &obj->u.block_dirty_bitmap_enable, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_DISABLE:
        return visit_type_q_obj_BlockDirtyBitmap_wrapper_members(v, &obj->u.block_dirty_bitmap_disable, errp);
    case TRANSACTION_ACTION_KIND_BLOCK_DIRTY_BITMAP_MERGE:
        return visit_type_q_obj_BlockDirtyBitmapMerge_wrapper_members(v, &obj->u.block_dirty_bitmap_merge, errp);
    case TRANSACTION_ACTION_KIND_BLOCKDEV_BACKUP:
        return visit_type_q_obj_BlockdevBackup_wrapper_members(v, &obj->u.blockdev_backup, errp);
    case TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT:
        return visit_type_q_obj_BlockdevSnapshot_wrapper_members(v, &obj->u.blockdev_snapshot, errp);
    case TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_INTERNAL_SYNC:
        return visit_type_q_obj_BlockdevSnapshotInternal_wrapper_members(v, &obj->u.blockdev_snapshot_internal_sync, errp);
    case TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_SYNC:
        return visit_type_q_obj_BlockdevSnapshotSync_wrapper_members(v, &obj->u.blockdev_snapshot_sync, errp);
    case TRANSACTION_ACTION_KIND_DRIVE_BACKUP:
        return visit_type_q_obj_DriveBackup_wrapper_members(v, &obj->u.drive_backup, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_TransactionAction(Visitor *v, const char *name,
                 TransactionAction **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TransactionAction), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TransactionAction_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TransactionAction(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TransactionProperties_members(Visitor *v, TransactionProperties *obj, Error **errp)
{
    if (visit_optional(v, "completion-mode", &obj->has_completion_mode)) {
        if (!visit_type_ActionCompletionMode(v, "completion-mode", &obj->completion_mode, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_TransactionProperties(Visitor *v, const char *name,
                 TransactionProperties **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TransactionProperties), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TransactionProperties_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TransactionProperties(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TransactionActionList(Visitor *v, const char *name,
                 TransactionActionList **obj, Error **errp)
{
    bool ok = false;
    TransactionActionList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (TransactionActionList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_TransactionAction(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TransactionActionList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_transaction_arg_members(Visitor *v, q_obj_transaction_arg *obj, Error **errp)
{
    if (!visit_type_TransactionActionList(v, "actions", &obj->actions, errp)) {
        return false;
    }
    if (visit_optional(v, "properties", &obj->has_properties)) {
        if (!visit_type_TransactionProperties(v, "properties", &obj->properties, errp)) {
            return false;
        }
    }
    return true;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_visit_transaction_c;
