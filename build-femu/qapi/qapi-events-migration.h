/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP events
 *
 * Copyright (c) 2014 Wenchao Xia
 * Copyright (c) 2015-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_EVENTS_MIGRATION_H
#define QAPI_EVENTS_MIGRATION_H

#include "qapi-events-common.h"
#include "qapi-events-sockets.h"
#include "qapi/util.h"
#include "qapi-types-migration.h"

void qapi_event_send_migration(MigrationStatus status);

void qapi_event_send_migration_pass(int64_t pass);

void qapi_event_send_colo_exit(COLOMode mode, COLOExitReason reason);

void qapi_event_send_unplug_primary(const char *device_id);

#endif /* QAPI_EVENTS_MIGRATION_H */
