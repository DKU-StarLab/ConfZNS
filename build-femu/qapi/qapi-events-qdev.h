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

#ifndef QAPI_EVENTS_QDEV_H
#define QAPI_EVENTS_QDEV_H

#include "qapi-events-qom.h"
#include "qapi/util.h"
#include "qapi-types-qdev.h"

void qapi_event_send_device_deleted(bool has_device, const char *device, const char *path);

void qapi_event_send_device_unplug_guest_error(bool has_device, const char *device, const char *path);

#endif /* QAPI_EVENTS_QDEV_H */
