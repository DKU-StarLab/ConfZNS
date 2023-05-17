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
#include "qapi/compat-policy.h"
#include "qapi/visitor.h"
#include "qapi/qmp/qdict.h"
#include "qapi/dealloc-visitor.h"
#include "qapi/error.h"
#include "qapi-visit-control.h"
#include "qapi-commands-control.h"

#include "qapi/qmp/qjson.h"
#include "trace/trace-qapi_commands_control_trace_events.h"

void qmp_marshal_qmp_capabilities(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_qmp_capabilities_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_qmp_capabilities_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QMP_CAPABILITIES)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_qmp_capabilities(req_json->str);
    }
    
    qmp_qmp_capabilities(arg.has_enable, arg.enable, &err);
    if (err) {
        trace_qmp_exit_qmp_capabilities(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_qmp_capabilities("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_qmp_capabilities_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_VersionInfo(VersionInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_VersionInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_VersionInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_version(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    VersionInfo *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_VERSION)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_version(req_json->str);
    }
    
    retval = qmp_query_version(&err);
    if (err) {
        trace_qmp_exit_query_version(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_VersionInfo(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_VERSION)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_version(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_CommandInfoList(CommandInfoList *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_CommandInfoList(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CommandInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_commands(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    CommandInfoList *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_COMMANDS)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_commands(req_json->str);
    }
    
    retval = qmp_query_commands(&err);
    if (err) {
        trace_qmp_exit_query_commands(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_CommandInfoList(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_COMMANDS)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_commands(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_quit(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUIT)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_quit(req_json->str);
    }
    
    qmp_quit(&err);
    if (err) {
        trace_qmp_exit_quit(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_quit("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_control_c;
