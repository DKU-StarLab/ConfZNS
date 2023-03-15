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

#ifndef QAPI_EVENTS_JOB_H
#define QAPI_EVENTS_JOB_H

#include "qapi/util.h"
#include "qapi-types-job.h"

void qapi_event_send_job_status_change(const char *id, JobStatus status);

#endif /* QAPI_EVENTS_JOB_H */
