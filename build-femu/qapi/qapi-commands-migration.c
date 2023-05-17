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
#include "qapi-visit-migration.h"
#include "qapi-commands-migration.h"

#include "qapi/qmp/qjson.h"
#include "trace/trace-qapi_commands_migration_trace_events.h"

static void qmp_marshal_output_MigrationInfo(MigrationInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_MigrationInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_MigrationInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_migrate(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    MigrationInfo *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_MIGRATE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_migrate(req_json->str);
    }
    
    retval = qmp_query_migrate(&err);
    if (err) {
        trace_qmp_exit_query_migrate(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_MigrationInfo(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_MIGRATE)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_migrate(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_migrate_set_capabilities(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_migrate_set_capabilities_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_migrate_set_capabilities_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_MIGRATE_SET_CAPABILITIES)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_migrate_set_capabilities(req_json->str);
    }
    
    qmp_migrate_set_capabilities(arg.capabilities, &err);
    if (err) {
        trace_qmp_exit_migrate_set_capabilities(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_migrate_set_capabilities("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_migrate_set_capabilities_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_MigrationCapabilityStatusList(MigrationCapabilityStatusList *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_MigrationCapabilityStatusList(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_MigrationCapabilityStatusList(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_migrate_capabilities(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    MigrationCapabilityStatusList *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_MIGRATE_CAPABILITIES)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_migrate_capabilities(req_json->str);
    }
    
    retval = qmp_query_migrate_capabilities(&err);
    if (err) {
        trace_qmp_exit_query_migrate_capabilities(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_MigrationCapabilityStatusList(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_MIGRATE_CAPABILITIES)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_migrate_capabilities(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_migrate_set_parameters(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    MigrateSetParameters arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_MigrateSetParameters_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_MIGRATE_SET_PARAMETERS)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_migrate_set_parameters(req_json->str);
    }
    
    qmp_migrate_set_parameters(&arg, &err);
    if (err) {
        trace_qmp_exit_migrate_set_parameters(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_migrate_set_parameters("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_MigrateSetParameters_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_MigrationParameters(MigrationParameters *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_MigrationParameters(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_MigrationParameters(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_migrate_parameters(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    MigrationParameters *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_MIGRATE_PARAMETERS)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_migrate_parameters(req_json->str);
    }
    
    retval = qmp_query_migrate_parameters(&err);
    if (err) {
        trace_qmp_exit_query_migrate_parameters(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_MigrationParameters(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_MIGRATE_PARAMETERS)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_migrate_parameters(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_client_migrate_info(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_client_migrate_info_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_client_migrate_info_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_CLIENT_MIGRATE_INFO)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_client_migrate_info(req_json->str);
    }
    
    qmp_client_migrate_info(arg.protocol, arg.hostname, arg.has_port, arg.port, arg.has_tls_port, arg.tls_port, arg.has_cert_subject, arg.cert_subject, &err);
    if (err) {
        trace_qmp_exit_client_migrate_info(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_client_migrate_info("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_client_migrate_info_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_migrate_start_postcopy(QDict *args, QObject **ret, Error **errp)
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

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_MIGRATE_START_POSTCOPY)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_migrate_start_postcopy(req_json->str);
    }
    
    qmp_migrate_start_postcopy(&err);
    if (err) {
        trace_qmp_exit_migrate_start_postcopy(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_migrate_start_postcopy("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_x_colo_lost_heartbeat(QDict *args, QObject **ret, Error **errp)
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

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_X_COLO_LOST_HEARTBEAT)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_x_colo_lost_heartbeat(req_json->str);
    }
    
    qmp_x_colo_lost_heartbeat(&err);
    if (err) {
        trace_qmp_exit_x_colo_lost_heartbeat(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_x_colo_lost_heartbeat("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_migrate_cancel(QDict *args, QObject **ret, Error **errp)
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

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_MIGRATE_CANCEL)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_migrate_cancel(req_json->str);
    }
    
    qmp_migrate_cancel(&err);
    if (err) {
        trace_qmp_exit_migrate_cancel(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_migrate_cancel("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_migrate_continue(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_migrate_continue_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_migrate_continue_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_MIGRATE_CONTINUE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_migrate_continue(req_json->str);
    }
    
    qmp_migrate_continue(arg.state, &err);
    if (err) {
        trace_qmp_exit_migrate_continue(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_migrate_continue("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_migrate_continue_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_migrate(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_migrate_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_migrate_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_MIGRATE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_migrate(req_json->str);
    }
    
    qmp_migrate(arg.uri, arg.has_blk, arg.blk, arg.has_inc, arg.inc, arg.has_detach, arg.detach, arg.has_resume, arg.resume, &err);
    if (err) {
        trace_qmp_exit_migrate(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_migrate("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_migrate_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_migrate_incoming(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_migrate_incoming_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_migrate_incoming_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_MIGRATE_INCOMING)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_migrate_incoming(req_json->str);
    }
    
    qmp_migrate_incoming(arg.uri, &err);
    if (err) {
        trace_qmp_exit_migrate_incoming(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_migrate_incoming("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_migrate_incoming_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_xen_save_devices_state(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_xen_save_devices_state_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_xen_save_devices_state_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_XEN_SAVE_DEVICES_STATE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_xen_save_devices_state(req_json->str);
    }
    
    qmp_xen_save_devices_state(arg.filename, arg.has_live, arg.live, &err);
    if (err) {
        trace_qmp_exit_xen_save_devices_state(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_xen_save_devices_state("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_xen_save_devices_state_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_xen_set_global_dirty_log(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_xen_set_global_dirty_log_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_xen_set_global_dirty_log_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_XEN_SET_GLOBAL_DIRTY_LOG)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_xen_set_global_dirty_log(req_json->str);
    }
    
    qmp_xen_set_global_dirty_log(arg.enable, &err);
    if (err) {
        trace_qmp_exit_xen_set_global_dirty_log(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_xen_set_global_dirty_log("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_xen_set_global_dirty_log_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_xen_load_devices_state(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_xen_load_devices_state_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_xen_load_devices_state_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_XEN_LOAD_DEVICES_STATE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_xen_load_devices_state(req_json->str);
    }
    
    qmp_xen_load_devices_state(arg.filename, &err);
    if (err) {
        trace_qmp_exit_xen_load_devices_state(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_xen_load_devices_state("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_xen_load_devices_state_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

#if defined(CONFIG_REPLICATION)
void qmp_marshal_xen_set_replication(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_xen_set_replication_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_xen_set_replication_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_XEN_SET_REPLICATION)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_xen_set_replication(req_json->str);
    }
    
    qmp_xen_set_replication(arg.enable, arg.primary, arg.has_failover, arg.failover, &err);
    if (err) {
        trace_qmp_exit_xen_set_replication(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_xen_set_replication("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_xen_set_replication_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
static void qmp_marshal_output_ReplicationStatus(ReplicationStatus *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_ReplicationStatus(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_ReplicationStatus(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
void qmp_marshal_query_xen_replication_status(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    ReplicationStatus *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_XEN_REPLICATION_STATUS)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_xen_replication_status(req_json->str);
    }
    
    retval = qmp_query_xen_replication_status(&err);
    if (err) {
        trace_qmp_exit_query_xen_replication_status(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_ReplicationStatus(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_XEN_REPLICATION_STATUS)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_xen_replication_status(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_REPLICATION) */

#if defined(CONFIG_REPLICATION)
void qmp_marshal_xen_colo_do_checkpoint(QDict *args, QObject **ret, Error **errp)
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

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_XEN_COLO_DO_CHECKPOINT)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_xen_colo_do_checkpoint(req_json->str);
    }
    
    qmp_xen_colo_do_checkpoint(&err);
    if (err) {
        trace_qmp_exit_xen_colo_do_checkpoint(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_xen_colo_do_checkpoint("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(CONFIG_REPLICATION) */

static void qmp_marshal_output_COLOStatus(COLOStatus *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_COLOStatus(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_COLOStatus(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_colo_status(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    COLOStatus *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_COLO_STATUS)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_colo_status(req_json->str);
    }
    
    retval = qmp_query_colo_status(&err);
    if (err) {
        trace_qmp_exit_query_colo_status(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_COLOStatus(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_COLO_STATUS)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_colo_status(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_migrate_recover(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_migrate_recover_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_migrate_recover_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_MIGRATE_RECOVER)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_migrate_recover(req_json->str);
    }
    
    qmp_migrate_recover(arg.uri, &err);
    if (err) {
        trace_qmp_exit_migrate_recover(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_migrate_recover("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_migrate_recover_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_migrate_pause(QDict *args, QObject **ret, Error **errp)
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

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_MIGRATE_PAUSE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_migrate_pause(req_json->str);
    }
    
    qmp_migrate_pause(&err);
    if (err) {
        trace_qmp_exit_migrate_pause(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_migrate_pause("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_calc_dirty_rate(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_calc_dirty_rate_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_calc_dirty_rate_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_CALC_DIRTY_RATE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_calc_dirty_rate(req_json->str);
    }
    
    qmp_calc_dirty_rate(arg.calc_time, arg.has_sample_pages, arg.sample_pages, arg.has_mode, arg.mode, &err);
    if (err) {
        trace_qmp_exit_calc_dirty_rate(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_calc_dirty_rate("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_calc_dirty_rate_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

static void qmp_marshal_output_DirtyRateInfo(DirtyRateInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_DirtyRateInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_DirtyRateInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}

void qmp_marshal_query_dirty_rate(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    DirtyRateInfo *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_DIRTY_RATE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_dirty_rate(req_json->str);
    }
    
    retval = qmp_query_dirty_rate(&err);
    if (err) {
        trace_qmp_exit_query_dirty_rate(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_DirtyRateInfo(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_DIRTY_RATE)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_dirty_rate(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_snapshot_save(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_snapshot_save_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_snapshot_save_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_SNAPSHOT_SAVE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_snapshot_save(req_json->str);
    }
    
    qmp_snapshot_save(arg.job_id, arg.tag, arg.vmstate, arg.devices, &err);
    if (err) {
        trace_qmp_exit_snapshot_save(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_snapshot_save("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_snapshot_save_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_snapshot_load(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_snapshot_load_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_snapshot_load_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_SNAPSHOT_LOAD)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_snapshot_load(req_json->str);
    }
    
    qmp_snapshot_load(arg.job_id, arg.tag, arg.vmstate, arg.devices, &err);
    if (err) {
        trace_qmp_exit_snapshot_load(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_snapshot_load("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_snapshot_load_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

void qmp_marshal_snapshot_delete(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_snapshot_delete_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_snapshot_delete_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_SNAPSHOT_DELETE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_snapshot_delete(req_json->str);
    }
    
    qmp_snapshot_delete(arg.job_id, arg.tag, arg.devices, &err);
    if (err) {
        trace_qmp_exit_snapshot_delete(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_snapshot_delete("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_snapshot_delete_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_migration_c;
