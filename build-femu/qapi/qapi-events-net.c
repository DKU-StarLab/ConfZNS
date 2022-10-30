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
#include "qapi-events-net.h"
#include "qapi-visit-net.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


void qapi_event_send_nic_rx_filter_changed(bool has_name, const char *name, const char *path)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_NIC_RX_FILTER_CHANGED_arg param = {
        has_name, (char *)name, (char *)path
    };

    qmp = qmp_event_build_dict("NIC_RX_FILTER_CHANGED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "NIC_RX_FILTER_CHANGED", NULL, 0, &error_abort);
    visit_type_q_obj_NIC_RX_FILTER_CHANGED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_NIC_RX_FILTER_CHANGED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_failover_negotiated(const char *device_id)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_FAILOVER_NEGOTIATED_arg param = {
        (char *)device_id
    };

    qmp = qmp_event_build_dict("FAILOVER_NEGOTIATED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "FAILOVER_NEGOTIATED", NULL, 0, &error_abort);
    visit_type_q_obj_FAILOVER_NEGOTIATED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_FAILOVER_NEGOTIATED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_net_c;
