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
#include "qapi-visit-misc.h"
#include "qapi-commands-misc.h"

#include "qapi/qmp/qjson.h"
#include "trace/trace-qapi_commands_misc_trace_events.h"

void qmp_marshal_add_client(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_add_client_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_add_client_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_ADD_CLIENT)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_add_client(req_json->str);
    }
    
    qmp_add_client(arg.protocol, arg.fdname, arg.has_skipauth, arg.skipauth, arg.has_tls, arg.tls, &err);
    if (err) {
        trace_qmp_exit_add_client(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_add_client("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_add_client_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_NameInfo(NameInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_NameInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_NameInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_name(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    NameInfo *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_NAME)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_name(req_json->str);
    }
    
    retval = qmp_query_name(&err);
    if (err) {
        trace_qmp_exit_query_name(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_NameInfo(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_NAME)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_name(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_IOThreadInfoList(IOThreadInfoList *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_IOThreadInfoList(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_IOThreadInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_iothreads(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    IOThreadInfoList *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_IOTHREADS)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_iothreads(req_json->str);
    }
    
    retval = qmp_query_iothreads(&err);
    if (err) {
        trace_qmp_exit_query_iothreads(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_IOThreadInfoList(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_IOTHREADS)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_iothreads(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_stop(QDict *args, QObject **ret, Error **errp)
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

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_STOP)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_stop(req_json->str);
    }
    
    qmp_stop(&err);
    if (err) {
        trace_qmp_exit_stop(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_stop("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_cont(QDict *args, QObject **ret, Error **errp)
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

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_CONT)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_cont(req_json->str);
    }
    
    qmp_cont(&err);
    if (err) {
        trace_qmp_exit_cont(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_cont("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_x_exit_preconfig(QDict *args, QObject **ret, Error **errp)
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

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_X_EXIT_PRECONFIG)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_x_exit_preconfig(req_json->str);
    }
    
    qmp_x_exit_preconfig(&err);
    if (err) {
        trace_qmp_exit_x_exit_preconfig(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_x_exit_preconfig("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_str(char *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_str(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_str(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_human_monitor_command(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    char *retval;
    q_obj_human_monitor_command_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_human_monitor_command_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_HUMAN_MONITOR_COMMAND)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_human_monitor_command(req_json->str);
    }
    
    retval = qmp_human_monitor_command(arg.command_line, arg.has_cpu_index, arg.cpu_index, &err);
    if (err) {
        trace_qmp_exit_human_monitor_command(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_str(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_HUMAN_MONITOR_COMMAND)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_human_monitor_command(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_human_monitor_command_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_getfd(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_getfd_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_getfd_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_GETFD)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_getfd(req_json->str);
    }
    
    qmp_getfd(arg.fdname, &err);
    if (err) {
        trace_qmp_exit_getfd(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_getfd("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_getfd_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_closefd(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_closefd_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_closefd_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_CLOSEFD)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_closefd(req_json->str);
    }
    
    qmp_closefd(arg.fdname, &err);
    if (err) {
        trace_qmp_exit_closefd(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_closefd("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_closefd_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_AddfdInfo(AddfdInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_AddfdInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_AddfdInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_add_fd(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    AddfdInfo *retval;
    q_obj_add_fd_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_add_fd_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_ADD_FD)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_add_fd(req_json->str);
    }
    
    retval = qmp_add_fd(arg.has_fdset_id, arg.fdset_id, arg.has_opaque, arg.opaque, &err);
    if (err) {
        trace_qmp_exit_add_fd(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_AddfdInfo(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_ADD_FD)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_add_fd(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_add_fd_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_remove_fd(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_remove_fd_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_remove_fd_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_REMOVE_FD)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_remove_fd(req_json->str);
    }
    
    qmp_remove_fd(arg.fdset_id, arg.has_fd, arg.fd, &err);
    if (err) {
        trace_qmp_exit_remove_fd(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_remove_fd("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_remove_fd_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_FdsetInfoList(FdsetInfoList *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_FdsetInfoList(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_FdsetInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_fdsets(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    FdsetInfoList *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_FDSETS)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_fdsets(req_json->str);
    }
    
    retval = qmp_query_fdsets(&err);
    if (err) {
        trace_qmp_exit_query_fdsets(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_FdsetInfoList(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_FDSETS)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_fdsets(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_CommandLineOptionInfoList(CommandLineOptionInfoList *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_CommandLineOptionInfoList(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CommandLineOptionInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_command_line_options(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    CommandLineOptionInfoList *retval;
    q_obj_query_command_line_options_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_query_command_line_options_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_COMMAND_LINE_OPTIONS)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_command_line_options(req_json->str);
    }
    
    retval = qmp_query_command_line_options(arg.has_option, arg.option, &err);
    if (err) {
        trace_qmp_exit_query_command_line_options(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_CommandLineOptionInfoList(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_COMMAND_LINE_OPTIONS)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_command_line_options(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_query_command_line_options_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_misc_c;
