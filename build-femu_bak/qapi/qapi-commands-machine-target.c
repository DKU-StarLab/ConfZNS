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
#include "qapi-visit-machine-target.h"
#include "qapi-commands-machine-target.h"


#if defined(TARGET_S390X)
static void qmp_marshal_output_CpuModelCompareInfo(CpuModelCompareInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    if (visit_type_CpuModelCompareInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelCompareInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qmp_marshal_query_cpu_model_comparison(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    CpuModelCompareInfo *retval;
    q_obj_query_cpu_model_comparison_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_query_cpu_model_comparison_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    retval = qmp_query_cpu_model_comparison(arg.modela, arg.modelb, &err);
    error_propagate(errp, err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CpuModelCompareInfo(retval, ret, errp);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_query_cpu_model_comparison_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
static void qmp_marshal_output_CpuModelBaselineInfo(CpuModelBaselineInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    if (visit_type_CpuModelBaselineInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelBaselineInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X)
void qmp_marshal_query_cpu_model_baseline(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    CpuModelBaselineInfo *retval;
    q_obj_query_cpu_model_baseline_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_query_cpu_model_baseline_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    retval = qmp_query_cpu_model_baseline(arg.modela, arg.modelb, &err);
    error_propagate(errp, err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CpuModelBaselineInfo(retval, ret, errp);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_query_cpu_model_baseline_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
static void qmp_marshal_output_CpuModelExpansionInfo(CpuModelExpansionInfo *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    if (visit_type_CpuModelExpansionInfo(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CpuModelExpansionInfo(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM)
void qmp_marshal_query_cpu_model_expansion(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    CpuModelExpansionInfo *retval;
    q_obj_query_cpu_model_expansion_arg arg = {0};

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    if (visit_type_q_obj_query_cpu_model_expansion_arg_members(v, &arg, errp)) {
        ok = visit_check_struct(v, errp);
    }
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    retval = qmp_query_cpu_model_expansion(arg.type, arg.model, &err);
    error_propagate(errp, err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CpuModelExpansionInfo(retval, ret, errp);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_type_q_obj_query_cpu_model_expansion_arg_members(v, &arg, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_S390X) || defined(TARGET_I386) || defined(TARGET_ARM) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
static void qmp_marshal_output_CpuDefinitionInfoList(CpuDefinitionInfoList *ret_in,
                                QObject **ret_out, Error **errp)
{
    Visitor *v;

    v = qobject_output_visitor_new(ret_out);
    if (visit_type_CpuDefinitionInfoList(v, "unused", &ret_in, errp)) {
        visit_complete(v, ret_out);
    }
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_type_CpuDefinitionInfoList(v, "unused", &ret_in, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

#if defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS)
void qmp_marshal_query_cpu_definitions(QDict *args, QObject **ret, Error **errp)
{
    Error *err = NULL;
    bool ok = false;
    Visitor *v;
    CpuDefinitionInfoList *retval;

    v = qobject_input_visitor_new(QOBJECT(args));
    if (!visit_start_struct(v, NULL, NULL, 0, errp)) {
        goto out;
    }
    ok = visit_check_struct(v, errp);
    visit_end_struct(v, NULL);
    if (!ok) {
        goto out;
    }

    retval = qmp_query_cpu_definitions(&err);
    error_propagate(errp, err);
    if (err) {
        goto out;
    }

    qmp_marshal_output_CpuDefinitionInfoList(retval, ret, errp);

out:
    visit_free(v);
    v = qapi_dealloc_visitor_new();
    visit_start_struct(v, NULL, NULL, 0, NULL);
    visit_end_struct(v, NULL);
    visit_free(v);
}
#endif /* defined(TARGET_PPC) || defined(TARGET_ARM) || defined(TARGET_I386) || defined(TARGET_S390X) || defined(TARGET_MIPS) */

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_commands_machine_target_c;
