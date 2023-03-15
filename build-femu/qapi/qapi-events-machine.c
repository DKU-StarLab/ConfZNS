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
#include "qapi-events-machine.h"
#include "qapi-visit-machine.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


void qapi_event_send_balloon_change(int64_t actual)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BALLOON_CHANGE_arg param = {
        actual
    };

    qmp = qmp_event_build_dict("BALLOON_CHANGE");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "BALLOON_CHANGE", NULL, 0, &error_abort);
    visit_type_q_obj_BALLOON_CHANGE_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_BALLOON_CHANGE, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_memory_device_size_change(bool has_id, const char *id, uint64_t size, const char *qom_path)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg param = {
        has_id, (char *)id, size, (char *)qom_path
    };

    qmp = qmp_event_build_dict("MEMORY_DEVICE_SIZE_CHANGE");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "MEMORY_DEVICE_SIZE_CHANGE", NULL, 0, &error_abort);
    visit_type_q_obj_MEMORY_DEVICE_SIZE_CHANGE_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_MEMORY_DEVICE_SIZE_CHANGE, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_mem_unplug_error(const char *device, const char *msg)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_MEM_UNPLUG_ERROR_arg param = {
        (char *)device, (char *)msg
    };

    if (compat_policy.deprecated_output == COMPAT_POLICY_OUTPUT_HIDE) {
        return;
    }

    qmp = qmp_event_build_dict("MEM_UNPLUG_ERROR");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "MEM_UNPLUG_ERROR", NULL, 0, &error_abort);
    visit_type_q_obj_MEM_UNPLUG_ERROR_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_MEM_UNPLUG_ERROR, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_machine_c;
