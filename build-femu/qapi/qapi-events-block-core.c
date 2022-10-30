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
#include "qapi-events-block-core.h"
#include "qapi-visit-block-core.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


void qapi_event_send_block_image_corrupted(const char *device, bool has_node_name, const char *node_name, const char *msg, bool has_offset, int64_t offset, bool has_size, int64_t size, bool fatal)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BLOCK_IMAGE_CORRUPTED_arg param = {
        (char *)device, has_node_name, (char *)node_name, (char *)msg, has_offset, offset, has_size, size, fatal
    };

    qmp = qmp_event_build_dict("BLOCK_IMAGE_CORRUPTED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "BLOCK_IMAGE_CORRUPTED", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_IMAGE_CORRUPTED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_BLOCK_IMAGE_CORRUPTED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_block_io_error(const char *device, bool has_node_name, const char *node_name, IoOperationType operation, BlockErrorAction action, bool has_nospace, bool nospace, const char *reason)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BLOCK_IO_ERROR_arg param = {
        (char *)device, has_node_name, (char *)node_name, operation, action, has_nospace, nospace, (char *)reason
    };

    qmp = qmp_event_build_dict("BLOCK_IO_ERROR");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "BLOCK_IO_ERROR", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_IO_ERROR_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_BLOCK_IO_ERROR, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_block_job_completed(JobType type, const char *device, int64_t len, int64_t offset, int64_t speed, bool has_error, const char *error)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BLOCK_JOB_COMPLETED_arg param = {
        type, (char *)device, len, offset, speed, has_error, (char *)error
    };

    qmp = qmp_event_build_dict("BLOCK_JOB_COMPLETED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "BLOCK_JOB_COMPLETED", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_COMPLETED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_BLOCK_JOB_COMPLETED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_block_job_cancelled(JobType type, const char *device, int64_t len, int64_t offset, int64_t speed)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BLOCK_JOB_CANCELLED_arg param = {
        type, (char *)device, len, offset, speed
    };

    qmp = qmp_event_build_dict("BLOCK_JOB_CANCELLED");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "BLOCK_JOB_CANCELLED", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_CANCELLED_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_BLOCK_JOB_CANCELLED, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_block_job_error(const char *device, IoOperationType operation, BlockErrorAction action)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BLOCK_JOB_ERROR_arg param = {
        (char *)device, operation, action
    };

    qmp = qmp_event_build_dict("BLOCK_JOB_ERROR");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "BLOCK_JOB_ERROR", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_ERROR_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_BLOCK_JOB_ERROR, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_block_job_ready(JobType type, const char *device, int64_t len, int64_t offset, int64_t speed)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BLOCK_JOB_READY_arg param = {
        type, (char *)device, len, offset, speed
    };

    qmp = qmp_event_build_dict("BLOCK_JOB_READY");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "BLOCK_JOB_READY", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_READY_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_BLOCK_JOB_READY, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_block_job_pending(JobType type, const char *id)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BLOCK_JOB_PENDING_arg param = {
        type, (char *)id
    };

    qmp = qmp_event_build_dict("BLOCK_JOB_PENDING");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "BLOCK_JOB_PENDING", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_JOB_PENDING_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_BLOCK_JOB_PENDING, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_block_write_threshold(const char *node_name, uint64_t amount_exceeded, uint64_t write_threshold)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_BLOCK_WRITE_THRESHOLD_arg param = {
        (char *)node_name, amount_exceeded, write_threshold
    };

    qmp = qmp_event_build_dict("BLOCK_WRITE_THRESHOLD");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "BLOCK_WRITE_THRESHOLD", NULL, 0, &error_abort);
    visit_type_q_obj_BLOCK_WRITE_THRESHOLD_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_BLOCK_WRITE_THRESHOLD, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_quorum_failure(const char *reference, int64_t sector_num, int64_t sectors_count)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_QUORUM_FAILURE_arg param = {
        (char *)reference, sector_num, sectors_count
    };

    qmp = qmp_event_build_dict("QUORUM_FAILURE");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "QUORUM_FAILURE", NULL, 0, &error_abort);
    visit_type_q_obj_QUORUM_FAILURE_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_QUORUM_FAILURE, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_quorum_report_bad(QuorumOpType type, bool has_error, const char *error, const char *node_name, int64_t sector_num, int64_t sectors_count)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_QUORUM_REPORT_BAD_arg param = {
        type, has_error, (char *)error, (char *)node_name, sector_num, sectors_count
    };

    qmp = qmp_event_build_dict("QUORUM_REPORT_BAD");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "QUORUM_REPORT_BAD", NULL, 0, &error_abort);
    visit_type_q_obj_QUORUM_REPORT_BAD_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_QUORUM_REPORT_BAD, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_block_core_c;
