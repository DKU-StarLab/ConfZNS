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

#include "qemu/osdep.h"
#include "qapi-emit-events.h"
#include "qapi-events-run-state.h"
#include "qapi-visit-run-state.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


void qapi_event_send_shutdown(bool guest, ShutdownCause reason)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_SHUTDOWN_arg param = {
        guest, reason
    };

    qmp = qmp_event_build_dict("SHUTDOWN");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "SHUTDOWN", NULL, 0, &error_abort);
    visit_type_q_obj_SHUTDOWN_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_SHUTDOWN, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_powerdown(void)
{
    QDict *qmp;

    qmp = qmp_event_build_dict("POWERDOWN");

    qapi_event_emit(QAPI_EVENT_POWERDOWN, qmp);

    qobject_unref(qmp);
}

void qapi_event_send_reset(bool guest, ShutdownCause reason)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_RESET_arg param = {
        guest, reason
    };

    qmp = qmp_event_build_dict("RESET");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "RESET", NULL, 0, &error_abort);
    visit_type_q_obj_RESET_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_RESET, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_stop(void)
{
    QDict *qmp;

    qmp = qmp_event_build_dict("STOP");

    qapi_event_emit(QAPI_EVENT_STOP, qmp);

    qobject_unref(qmp);
}

void qapi_event_send_resume(void)
{
    QDict *qmp;

    qmp = qmp_event_build_dict("RESUME");

    qapi_event_emit(QAPI_EVENT_RESUME, qmp);

    qobject_unref(qmp);
}

void qapi_event_send_suspend(void)
{
    QDict *qmp;

    qmp = qmp_event_build_dict("SUSPEND");

    qapi_event_emit(QAPI_EVENT_SUSPEND, qmp);

    qobject_unref(qmp);
}

void qapi_event_send_suspend_disk(void)
{
    QDict *qmp;

    qmp = qmp_event_build_dict("SUSPEND_DISK");

    qapi_event_emit(QAPI_EVENT_SUSPEND_DISK, qmp);

    qobject_unref(qmp);
}

void qapi_event_send_wakeup(void)
{
    QDict *qmp;

    qmp = qmp_event_build_dict("WAKEUP");

    qapi_event_emit(QAPI_EVENT_WAKEUP, qmp);

    qobject_unref(qmp);
}

void qapi_event_send_watchdog(WatchdogAction action)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_WATCHDOG_arg param = {
        action
    };

    qmp = qmp_event_build_dict("WATCHDOG");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "WATCHDOG", NULL, 0, &error_abort);
    visit_type_q_obj_WATCHDOG_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_WATCHDOG, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_guest_panicked(GuestPanicAction action, bool has_info, GuestPanicInformation *info)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_GUEST_PANICKED_arg param = {
        action, has_info, info
    };

    qmp = qmp_event_build_dict("GUEST_PANICKED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "GUEST_PANICKED", NULL, 0, &error_abort);
    visit_type_q_obj_GUEST_PANICKED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_GUEST_PANICKED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_guest_crashloaded(GuestPanicAction action, bool has_info, GuestPanicInformation *info)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_GUEST_CRASHLOADED_arg param = {
        action, has_info, info
    };

    qmp = qmp_event_build_dict("GUEST_CRASHLOADED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "GUEST_CRASHLOADED", NULL, 0, &error_abort);
    visit_type_q_obj_GUEST_CRASHLOADED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_GUEST_CRASHLOADED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_memory_failure(MemoryFailureRecipient recipient, MemoryFailureAction action, MemoryFailureFlags *flags)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_MEMORY_FAILURE_arg param = {
        recipient, action, flags
    };

    qmp = qmp_event_build_dict("MEMORY_FAILURE");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "MEMORY_FAILURE", NULL, 0, &error_abort);
    visit_type_q_obj_MEMORY_FAILURE_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_MEMORY_FAILURE, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_run_state_c;
