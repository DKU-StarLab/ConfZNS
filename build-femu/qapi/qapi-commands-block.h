/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_COMMANDS_BLOCK_H
#define QAPI_COMMANDS_BLOCK_H

#include "qapi-commands-block-core.h"
#include "qapi-types-block.h"

PRManagerInfoList *qmp_query_pr_managers(Error **errp);
void qmp_marshal_query_pr_managers(QDict *args, QObject **ret, Error **errp);
void qmp_eject(bool has_device, const char *device, bool has_id, const char *id, bool has_force, bool force, Error **errp);
void qmp_marshal_eject(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_open_tray(bool has_device, const char *device, bool has_id, const char *id, bool has_force, bool force, Error **errp);
void qmp_marshal_blockdev_open_tray(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_close_tray(bool has_device, const char *device, bool has_id, const char *id, Error **errp);
void qmp_marshal_blockdev_close_tray(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_remove_medium(const char *id, Error **errp);
void qmp_marshal_blockdev_remove_medium(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_insert_medium(const char *id, const char *node_name, Error **errp);
void qmp_marshal_blockdev_insert_medium(QDict *args, QObject **ret, Error **errp);
void qmp_blockdev_change_medium(bool has_device, const char *device, bool has_id, const char *id, const char *filename, bool has_format, const char *format, bool has_read_only_mode, BlockdevChangeReadOnlyMode read_only_mode, Error **errp);
void qmp_marshal_blockdev_change_medium(QDict *args, QObject **ret, Error **errp);
void qmp_block_set_io_throttle(BlockIOThrottle *arg, Error **errp);
void qmp_marshal_block_set_io_throttle(QDict *args, QObject **ret, Error **errp);
void qmp_block_latency_histogram_set(const char *id, bool has_boundaries, uint64List *boundaries, bool has_boundaries_read, uint64List *boundaries_read, bool has_boundaries_write, uint64List *boundaries_write, bool has_boundaries_flush, uint64List *boundaries_flush, Error **errp);
void qmp_marshal_block_latency_histogram_set(QDict *args, QObject **ret, Error **errp);

#endif /* QAPI_COMMANDS_BLOCK_H */
