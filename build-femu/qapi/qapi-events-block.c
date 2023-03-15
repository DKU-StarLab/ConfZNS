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
#include "qapi-events-block.h"
#include "qapi-visit-block.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


void qapi_event_send_device_tray_moved(const char *device, const char *id, bool tray_open)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_DEVICE_TRAY_MOVED_arg param = {
        (char *)device, (char *)id, tray_open
    };

    qmp = qmp_event_build_dict("DEVICE_TRAY_MOVED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "DEVICE_TRAY_MOVED", NULL, 0, &error_abort);
    visit_type_q_obj_DEVICE_TRAY_MOVED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_DEVICE_TRAY_MOVED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_pr_manager_status_changed(const char *id, bool connected)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_PR_MANAGER_STATUS_CHANGED_arg param = {
        (char *)id, connected
    };

    qmp = qmp_event_build_dict("PR_MANAGER_STATUS_CHANGED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "PR_MANAGER_STATUS_CHANGED", NULL, 0, &error_abort);
    visit_type_q_obj_PR_MANAGER_STATUS_CHANGED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_PR_MANAGER_STATUS_CHANGED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_block_c;
