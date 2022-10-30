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

#ifndef QAPI_EVENTS_MACHINE_H
#define QAPI_EVENTS_MACHINE_H

#include "qapi-events-common.h"
#include "qapi/util.h"
#include "qapi-types-machine.h"

void qapi_event_send_balloon_change(int64_t actual);

void qapi_event_send_memory_device_size_change(bool has_id, const char *id, uint64_t size, const char *qom_path);

void qapi_event_send_mem_unplug_error(const char *device, const char *msg);

#endif /* QAPI_EVENTS_MACHINE_H */
