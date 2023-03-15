/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI/QMP commands
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi/visitor.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qobject-output-visitor.h"
#include "qapi/qobject-input-visitor.h"
#include "qapi/dealloc-visitor.h"
#include "qapi/error.h"
#include "qapi-visit-ui.h"
#include "qapi-commands-ui.h"


void qmp_marshal_set_password(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_set_password_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_set_password_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    qmp_set_password(arg.protocol, arg.password, arg.has_connected, arg.connected, &err);
    error_propagate(errp, err);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_set_password_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_expire_password(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_expire_password_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_expire_password_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    qmp_expire_password(arg.protocol, arg.time, &err);
    error_propagate(errp, err);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_expire_password_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_screendump(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_screendump_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_screendump_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    qmp_screendump(arg.filename, arg.has_device, arg.device, arg.has_head, arg.head, &err);
    error_propagate(errp, err);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_screendump_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

#if defined(CONFIG_SPICE)
static void qmp_marshal_output_SpiceInfo(SpiceInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    if (visit_type_SpiceInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_SpiceInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_SPICE)
void qmp_marshal_query_spice(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    SpiceInfo *retval;

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    retval = qmp_query_spice(&err);
    error_propagate(errp, err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_SpiceInfo(retval, ret, errp);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_SPICE) */

#if defined(CONFIG_VNC)
static void qmp_marshal_output_VncInfo(VncInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    if (visit_type_VncInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_VncInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qmp_marshal_query_vnc(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    VncInfo *retval;

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    retval = qmp_query_vnc(&err);
    error_propagate(errp, err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_VncInfo(retval, ret, errp);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
static void qmp_marshal_output_VncInfo2List(VncInfo2List *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    if (visit_type_VncInfo2List(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_VncInfo2List(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qmp_marshal_query_vnc_servers(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    VncInfo2List *retval;

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    retval = qmp_query_vnc_servers(&err);
    error_propagate(errp, err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_VncInfo2List(retval, ret, errp);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VNC) */

#if defined(CONFIG_VNC)
void qmp_marshal_change_vnc_password(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_change_vnc_password_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_change_vnc_password_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    qmp_change_vnc_password(arg.password, &err);
    error_propagate(errp, err);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_change_vnc_password_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_VNC) */

static void qmp_marshal_output_MouseInfoList(MouseInfoList *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    if (visit_type_MouseInfoList(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_MouseInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_mice(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    MouseInfoList *retval;

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    retval = qmp_query_mice(&err);
    error_propagate(errp, err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_MouseInfoList(retval, ret, errp);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_send_key(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_send_key_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_send_key_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    qmp_send_key(arg.keys, arg.has_hold_time, arg.hold_time, &err);
    error_propagate(errp, err);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_send_key_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_input_send_event(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_input_send_event_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_input_send_event_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    qmp_input_send_event(arg.has_device, arg.device, arg.has_head, arg.head, arg.events, &err);
    error_propagate(errp, err);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_input_send_event_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_DisplayOptions(DisplayOptions *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    if (visit_type_DisplayOptions(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_DisplayOptions(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_display_options(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    DisplayOptions *retval;

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    retval = qmp_query_display_options(&err);
    error_propagate(errp, err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_DisplayOptions(retval, ret, errp);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_ui_c;
