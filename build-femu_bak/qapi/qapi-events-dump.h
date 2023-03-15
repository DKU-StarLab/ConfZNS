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

#ifndef QAPI_EVENTS_DUMP_H
#define QAPI_EVENTS_DUMP_H

#include "qapi/util.h"
#include "qapi-types-dump.h"

void qapi_event_send_dump_completed(DumpQueryResult *result, bool has_error, const char *error);

#endif /* QAPI_EVENTS_DUMP_H */
