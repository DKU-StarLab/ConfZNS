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

#ifndef QAPI_EVENTS_BLOCK_CORE_H
#define QAPI_EVENTS_BLOCK_CORE_H

#include "qapi-events-common.h"
#include "qapi-events-crypto.h"
#include "qapi-events-job.h"
#include "qapi-events-sockets.h"
#include "qapi/util.h"
#include "qapi-types-block-core.h"

void qapi_event_send_block_image_corrupted(const char *device, bool has_node_name, const char *node_name, const char *msg, bool has_offset, int64_t offset, bool has_size, int64_t size, bool fatal);

void qapi_event_send_block_io_error(const char *device, bool has_node_name, const char *node_name, IoOperationType operation, BlockErrorAction action, bool has_nospace, bool nospace, const char *reason);

void qapi_event_send_block_job_completed(JobType type, const char *device, int64_t len, int64_t offset, int64_t speed, bool has_error, const char *error);

void qapi_event_send_block_job_cancelled(JobType type, const char *device, int64_t len, int64_t offset, int64_t speed);

void qapi_event_send_block_job_error(const char *device, IoOperationType operation, BlockErrorAction action);

void qapi_event_send_block_job_ready(JobType type, const char *device, int64_t len, int64_t offset, int64_t speed);

void qapi_event_send_block_job_pending(JobType type, const char *id);

void qapi_event_send_block_write_threshold(const char *node_name, uint64_t amount_exceeded, uint64_t write_threshold);

void qapi_event_send_quorum_failure(const char *reference, int64_t sector_num, int64_t sectors_count);

void qapi_event_send_quorum_report_bad(QuorumOpType type, bool has_error, const char *error, const char *node_name, int64_t sector_num, int64_t sectors_count);

#endif /* QAPI_EVENTS_BLOCK_CORE_H */
