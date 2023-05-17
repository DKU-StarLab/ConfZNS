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
#include "qapi-visit-misc-target.h"
#include "qapi-commands-misc-target.h"

#include "qapi/qmp/qjson.h"
#include "trace/trace-qapi_commands_misc_target_trace_events.h"

#if defined(TARGET_I386)
void qmp_marshal_rtc_reset_reinjection(QDict *args, QObject **ret, Error **errp)
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

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_RTC_RESET_REINJECTION)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_rtc_reset_reinjection(req_json->str);
    }
    
    qmp_rtc_reset_reinjection(&err);
    if (err) {
        trace_qmp_exit_rtc_reset_reinjection(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_rtc_reset_reinjection("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static void qmp_marshal_output_SevInfo(SevInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_SevInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_SevInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_query_sev(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    SevInfo *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_SEV)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_sev(req_json->str);
    }
    
    retval = qmp_query_sev(&err);
    if (err) {
        trace_qmp_exit_query_sev(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_SevInfo(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_SEV)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_sev(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static void qmp_marshal_output_SevLaunchMeasureInfo(SevLaunchMeasureInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_SevLaunchMeasureInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_SevLaunchMeasureInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_query_sev_launch_measure(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    SevLaunchMeasureInfo *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_SEV_LAUNCH_MEASURE)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_sev_launch_measure(req_json->str);
    }
    
    retval = qmp_query_sev_launch_measure(&err);
    if (err) {
        trace_qmp_exit_query_sev_launch_measure(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_SevLaunchMeasureInfo(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_SEV_LAUNCH_MEASURE)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_sev_launch_measure(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static void qmp_marshal_output_SevCapability(SevCapability *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_SevCapability(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_SevCapability(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_query_sev_capabilities(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    SevCapability *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_SEV_CAPABILITIES)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_sev_capabilities(req_json->str);
    }
    
    retval = qmp_query_sev_capabilities(&err);
    if (err) {
        trace_qmp_exit_query_sev_capabilities(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_SevCapability(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_SEV_CAPABILITIES)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_sev_capabilities(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_sev_inject_launch_secret(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_sev_inject_launch_secret_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_sev_inject_launch_secret_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_SEV_INJECT_LAUNCH_SECRET)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_sev_inject_launch_secret(req_json->str);
    }
    
    qmp_sev_inject_launch_secret(arg.packet_header, arg.secret, arg.has_gpa, arg.gpa, &err);
    if (err) {
        trace_qmp_exit_sev_inject_launch_secret(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_sev_inject_launch_secret("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_sev_inject_launch_secret_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
static void qmp_marshal_output_SevAttestationReport(SevAttestationReport *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_SevAttestationReport(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_SevAttestationReport(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_query_sev_attestation_report(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    SevAttestationReport *retval;
    q_obj_query_sev_attestation_report_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_query_sev_attestation_report_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_SEV_ATTESTATION_REPORT)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_sev_attestation_report(req_json->str);
    }
    
    retval = qmp_query_sev_attestation_report(arg.mnonce, &err);
    if (err) {
        trace_qmp_exit_query_sev_attestation_report(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_SevAttestationReport(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_SEV_ATTESTATION_REPORT)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_sev_attestation_report(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_query_sev_attestation_report_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_S390X)
void qmp_marshal_dump_skeys(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    q_obj_dump_skeys_arg arg = {0};

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_dump_skeys_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_DUMP_SKEYS)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_dump_skeys(req_json->str);
    }
    
    qmp_dump_skeys(arg.filename, &err);
    if (err) {
        trace_qmp_exit_dump_skeys(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    trace_qmp_exit_dump_skeys("{}", true);
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_dump_skeys_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_ARM)
static void qmp_marshal_output_GICCapabilityList(GICCapabilityList *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_GICCapabilityList(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_GICCapabilityList(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_ARM)
void qmp_marshal_query_gic_capabilities(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    GICCapabilityList *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_GIC_CAPABILITIES)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_gic_capabilities(req_json->str);
    }
    
    retval = qmp_query_gic_capabilities(&err);
    if (err) {
        trace_qmp_exit_query_gic_capabilities(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_GICCapabilityList(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_GIC_CAPABILITIES)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_gic_capabilities(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_ARM) */

#if defined(TARGET_I386)
static void qmp_marshal_output_SGXInfo(SGXInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new_qmp(ret_out);
    if (visit_type_SGXInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_SGXInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_query_sgx(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    SGXInfo *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_SGX)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_sgx(req_json->str);
    }
    
    retval = qmp_query_sgx(&err);
    if (err) {
        trace_qmp_exit_query_sgx(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_SGXInfo(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_SGX)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_sgx(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

#if defined(TARGET_I386)
void qmp_marshal_query_sgx_capabilities(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    SGXInfo *retval;

    v = qobject_input_visitor_new_qmp(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    if (trace_event_get_state_backends(TRACE_QMP_ENTER_QUERY_SGX_CAPABILITIES)) {
        g_autoptr(GString) req_json = qobject_to_json(QOBJECT(args));

        trace_qmp_enter_query_sgx_capabilities(req_json->str);
    }
    
    retval = qmp_query_sgx_capabilities(&err);
    if (err) {
        trace_qmp_exit_query_sgx_capabilities(error_get_pretty(err), false);
        error_propagate(errp, err);
        goto out;
    }

    qmp_marshal_output_SGXInfo(retval, ret, errp);

    if (trace_event_get_state_backends(TRACE_QMP_EXIT_QUERY_SGX_CAPABILITIES)) {
        g_autoptr(GString) ret_json = qobject_to_json(*ret);

        trace_qmp_exit_query_sgx_capabilities(ret_json->str, true);
    }
    
out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_I386) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_misc_target_c;
