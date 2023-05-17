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
#include "qapi-events-qdev.h"
#include "qapi-visit-qdev.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


void qapi_event_send_device_deleted(bool has_device, const char *device, const char *path)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_DEVICE_DELETED_arg param = {
        has_device, (char *)device, (char *)path
    };

    qmp = qmp_event_build_dict("DEVICE_DELETED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "DEVICE_DELETED", NULL, 0, &error_abort);
    visit_type_q_obj_DEVICE_DELETED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_DEVICE_DELETED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_device_unplug_guest_error(bool has_device, const char *device, const char *path)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg param = {
        has_device, (char *)device, (char *)path
    };

    qmp = qmp_event_build_dict("DEVICE_UNPLUG_GUEST_ERROR");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "DEVICE_UNPLUG_GUEST_ERROR", NULL, 0, &error_abort);
    visit_type_q_obj_DEVICE_UNPLUG_GUEST_ERROR_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_DEVICE_UNPLUG_GUEST_ERROR, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_qdev_c;
