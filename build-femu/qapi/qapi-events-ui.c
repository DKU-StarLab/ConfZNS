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
#include "qapi-events-ui.h"
#include "qapi-visit-ui.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


#if defined(CONFIG_SPICE)
void qapi_event_send_spice_connected(SpiceBasicInfo *server, SpiceBasicInfo *client)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_SPICE_CONNECTED_arg param = {
        server, client
    };

    qmp = qmp_event_build_dict("SPICE_CONNECTED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "SPICE_CONNECTED", NULL, 0, &error_abort);
    visit_type_q_obj_SPICE_CONNECTED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_SPICE_CONNECTED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_event_send_spice_initialized(SpiceServerInfo *server, SpiceChannel *client)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_SPICE_INITIALIZED_arg param = {
        server, client
    };

    qmp = qmp_event_build_dict("SPICE_INITIALIZED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "SPICE_INITIALIZED", NULL, 0, &error_abort);
    visit_type_q_obj_SPICE_INITIALIZED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_SPICE_INITIALIZED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_event_send_spice_disconnected(SpiceBasicInfo *server, SpiceBasicInfo *client)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_SPICE_DISCONNECTED_arg param = {
        server, client
    };

    qmp = qmp_event_build_dict("SPICE_DISCONNECTED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "SPICE_DISCONNECTED", NULL, 0, &error_abort);
    visit_type_q_obj_SPICE_DISCONNECTED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_SPICE_DISCONNECTED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qapi_event_send_spice_migrate_completed(void)
{
    QDict *qmp;

    qmp = qmp_event_build_dict("SPICE_MIGRATE_COMPLETED");

    qapi_event_emit(QAPI_EVENT_SPICE_MIGRATE_COMPLETED, qmp);

    qobject_unref(qmp);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
void qapi_event_send_vnc_connected(VncServerInfo *server, VncBasicInfo *client)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_VNC_CONNECTED_arg param = {
        server, client
    };

    qmp = qmp_event_build_dict("VNC_CONNECTED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "VNC_CONNECTED", NULL, 0, &error_abort);
    visit_type_q_obj_VNC_CONNECTED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_VNC_CONNECTED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_event_send_vnc_initialized(VncServerInfo *server, VncClientInfo *client)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_VNC_INITIALIZED_arg param = {
        server, client
    };

    qmp = qmp_event_build_dict("VNC_INITIALIZED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "VNC_INITIALIZED", NULL, 0, &error_abort);
    visit_type_q_obj_VNC_INITIALIZED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_VNC_INITIALIZED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qapi_event_send_vnc_disconnected(VncServerInfo *server, VncClientInfo *client)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_VNC_DISCONNECTED_arg param = {
        server, client
    };

    qmp = qmp_event_build_dict("VNC_DISCONNECTED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "VNC_DISCONNECTED", NULL, 0, &error_abort);
    visit_type_q_obj_VNC_DISCONNECTED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_VNC_DISCONNECTED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}
#endif /* defined(CONFIG_VNC) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_ui_c;
