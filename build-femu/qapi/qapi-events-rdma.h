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

#ifndef QAPI_EVENTS_RDMA_H
#define QAPI_EVENTS_RDMA_H

#include "qapi/util.h"
#include "qapi-types-rdma.h"

void qapi_event_send_rdma_gid_status_changed(const char *netdev, bool gid_status, uint64_t subnet_prefix, uint64_t interface_id);

#endif /* QAPI_EVENTS_RDMA_H */
