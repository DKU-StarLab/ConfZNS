/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI Commands initialization
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi-commands.h"
#include "qapi-init-commands.h"

void qmp_init_marshal(QmpCommandList *cmds)
{
    QTAILQ_INIT(cmds);

    qmp_register_command(cmds, "query-block",
                         qmp_marshal_query_block, 0, 0);
    qmp_register_command(cmds, "query-blockstats",
                         qmp_marshal_query_blockstats, 0, 0);
    qmp_register_command(cmds, "query-block-jobs",
                         qmp_marshal_query_block_jobs, 0, 0);
    qmp_register_command(cmds, "block_resize",
                         qmp_marshal_block_resize, QCO_COROUTINE, 0);
    qmp_register_command(cmds, "blockdev-snapshot-sync",
                         qmp_marshal_blockdev_snapshot_sync, 0, 0);
    qmp_register_command(cmds, "blockdev-snapshot",
                         qmp_marshal_blockdev_snapshot, 0, 0);
    qmp_register_command(cmds, "change-backing-file",
                         qmp_marshal_change_backing_file, 0, 0);
    qmp_register_command(cmds, "block-commit",
                         qmp_marshal_block_commit, 0, 0);
    qmp_register_command(cmds, "drive-backup",
                         qmp_marshal_drive_backup, 0, 1u << QAPI_DEPRECATED);
    qmp_register_command(cmds, "blockdev-backup",
                         qmp_marshal_blockdev_backup, 0, 0);
    qmp_register_command(cmds, "query-named-block-nodes",
                         qmp_marshal_query_named_block_nodes, 0, 0);
    qmp_register_command(cmds, "x-debug-query-block-graph",
                         qmp_marshal_x_debug_query_block_graph, 0, 1u << QAPI_UNSTABLE);
    qmp_register_command(cmds, "drive-mirror",
                         qmp_marshal_drive_mirror, 0, 0);
    qmp_register_command(cmds, "block-dirty-bitmap-add",
                         qmp_marshal_block_dirty_bitmap_add, 0, 0);
    qmp_register_command(cmds, "block-dirty-bitmap-remove",
                         qmp_marshal_block_dirty_bitmap_remove, 0, 0);
    qmp_register_command(cmds, "block-dirty-bitmap-clear",
                         qmp_marshal_block_dirty_bitmap_clear, 0, 0);
    qmp_register_command(cmds, "block-dirty-bitmap-enable",
                         qmp_marshal_block_dirty_bitmap_enable, 0, 0);
    qmp_register_command(cmds, "block-dirty-bitmap-disable",
                         qmp_marshal_block_dirty_bitmap_disable, 0, 0);
    qmp_register_command(cmds, "block-dirty-bitmap-merge",
                         qmp_marshal_block_dirty_bitmap_merge, 0, 0);
    qmp_register_command(cmds, "x-debug-block-dirty-bitmap-sha256",
                         qmp_marshal_x_debug_block_dirty_bitmap_sha256, 0, 1u << QAPI_UNSTABLE);
    qmp_register_command(cmds, "blockdev-mirror",
                         qmp_marshal_blockdev_mirror, 0, 0);
    qmp_register_command(cmds, "block-stream",
                         qmp_marshal_block_stream, 0, 0);
    qmp_register_command(cmds, "block-job-set-speed",
                         qmp_marshal_block_job_set_speed, 0, 0);
    qmp_register_command(cmds, "block-job-cancel",
                         qmp_marshal_block_job_cancel, 0, 0);
    qmp_register_command(cmds, "block-job-pause",
                         qmp_marshal_block_job_pause, 0, 0);
    qmp_register_command(cmds, "block-job-resume",
                         qmp_marshal_block_job_resume, 0, 0);
    qmp_register_command(cmds, "block-job-complete",
                         qmp_marshal_block_job_complete, 0, 0);
    qmp_register_command(cmds, "block-job-dismiss",
                         qmp_marshal_block_job_dismiss, 0, 0);
    qmp_register_command(cmds, "block-job-finalize",
                         qmp_marshal_block_job_finalize, 0, 0);
    qmp_register_command(cmds, "blockdev-add",
                         qmp_marshal_blockdev_add, 0, 0);
    qmp_register_command(cmds, "blockdev-reopen",
                         qmp_marshal_blockdev_reopen, 0, 0);
    qmp_register_command(cmds, "blockdev-del",
                         qmp_marshal_blockdev_del, 0, 0);
    qmp_register_command(cmds, "blockdev-create",
                         qmp_marshal_blockdev_create, 0, 0);
    qmp_register_command(cmds, "x-blockdev-amend",
                         qmp_marshal_x_blockdev_amend, 0, 1u << QAPI_UNSTABLE);
    qmp_register_command(cmds, "block-set-write-threshold",
                         qmp_marshal_block_set_write_threshold, 0, 0);
    qmp_register_command(cmds, "x-blockdev-change",
                         qmp_marshal_x_blockdev_change, 0, 1u << QAPI_UNSTABLE);
    qmp_register_command(cmds, "x-blockdev-set-iothread",
                         qmp_marshal_x_blockdev_set_iothread, 0, 1u << QAPI_UNSTABLE);
    qmp_register_command(cmds, "blockdev-snapshot-internal-sync",
                         qmp_marshal_blockdev_snapshot_internal_sync, 0, 0);
    qmp_register_command(cmds, "blockdev-snapshot-delete-internal-sync",
                         qmp_marshal_blockdev_snapshot_delete_internal_sync, 0, 0);
    qmp_register_command(cmds, "job-pause",
                         qmp_marshal_job_pause, 0, 0);
    qmp_register_command(cmds, "job-resume",
                         qmp_marshal_job_resume, 0, 0);
    qmp_register_command(cmds, "job-cancel",
                         qmp_marshal_job_cancel, 0, 0);
    qmp_register_command(cmds, "job-complete",
                         qmp_marshal_job_complete, 0, 0);
    qmp_register_command(cmds, "job-dismiss",
                         qmp_marshal_job_dismiss, 0, 0);
    qmp_register_command(cmds, "job-finalize",
                         qmp_marshal_job_finalize, 0, 0);
    qmp_register_command(cmds, "query-jobs",
                         qmp_marshal_query_jobs, 0, 0);
    qmp_register_command(cmds, "nbd-server-start",
                         qmp_marshal_nbd_server_start, 0, 0);
    qmp_register_command(cmds, "nbd-server-add",
                         qmp_marshal_nbd_server_add, 0, 1u << QAPI_DEPRECATED);
    qmp_register_command(cmds, "nbd-server-remove",
                         qmp_marshal_nbd_server_remove, 0, 1u << QAPI_DEPRECATED);
    qmp_register_command(cmds, "nbd-server-stop",
                         qmp_marshal_nbd_server_stop, 0, 0);
    qmp_register_command(cmds, "block-export-add",
                         qmp_marshal_block_export_add, 0, 0);
    qmp_register_command(cmds, "block-export-del",
                         qmp_marshal_block_export_del, 0, 0);
    qmp_register_command(cmds, "query-block-exports",
                         qmp_marshal_query_block_exports, 0, 0);
    qmp_register_command(cmds, "query-chardev",
                         qmp_marshal_query_chardev, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "query-chardev-backends",
                         qmp_marshal_query_chardev_backends, 0, 0);
    qmp_register_command(cmds, "ringbuf-write",
                         qmp_marshal_ringbuf_write, 0, 0);
    qmp_register_command(cmds, "ringbuf-read",
                         qmp_marshal_ringbuf_read, 0, 0);
    qmp_register_command(cmds, "chardev-add",
                         qmp_marshal_chardev_add, 0, 0);
    qmp_register_command(cmds, "chardev-change",
                         qmp_marshal_chardev_change, 0, 0);
    qmp_register_command(cmds, "chardev-remove",
                         qmp_marshal_chardev_remove, 0, 0);
    qmp_register_command(cmds, "chardev-send-break",
                         qmp_marshal_chardev_send_break, 0, 0);
    qmp_register_command(cmds, "qmp_capabilities",
                         qmp_marshal_qmp_capabilities, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "query-version",
                         qmp_marshal_query_version, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "query-commands",
                         qmp_marshal_query_commands, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "quit",
                         qmp_marshal_quit, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "query-qmp-schema",
                         qmp_marshal_query_qmp_schema, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "qom-list",
                         qmp_marshal_qom_list, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "qom-get",
                         qmp_marshal_qom_get, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "qom-set",
                         qmp_marshal_qom_set, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "qom-list-types",
                         qmp_marshal_qom_list_types, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "qom-list-properties",
                         qmp_marshal_qom_list_properties, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "object-add",
                         qmp_marshal_object_add, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "object-del",
                         qmp_marshal_object_del, QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "transaction",
                         qmp_marshal_transaction, 0, 0);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_init_commands_c;
