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

#ifndef QAPI_EVENTS_RUN_STATE_H
#define QAPI_EVENTS_RUN_STATE_H

#include "qapi/util.h"
#include "qapi-types-run-state.h"

void qapi_event_send_shutdown(bool guest, ShutdownCause reason);

void qapi_event_send_powerdown(void);

void qapi_event_send_reset(bool guest, ShutdownCause reason);

void qapi_event_send_stop(void);

void qapi_event_send_resume(void);

void qapi_event_send_suspend(void);

void qapi_event_send_suspend_disk(void);

void qapi_event_send_wakeup(void);

void qapi_event_send_watchdog(WatchdogAction action);

void qapi_event_send_guest_panicked(GuestPanicAction action, bool has_info, GuestPanicInformation *info);

void qapi_event_send_guest_crashloaded(GuestPanicAction action, bool has_info, GuestPanicInformation *info);

void qapi_event_send_memory_failure(MemoryFailureRecipient recipient, MemoryFailureAction action, MemoryFailureFlags *flags);

#endif /* QAPI_EVENTS_RUN_STATE_H */
