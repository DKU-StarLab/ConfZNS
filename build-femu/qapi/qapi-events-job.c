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
#include "qapi-events-job.h"
#include "qapi-visit-job.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


void qapi_event_send_job_status_change(const char *id, JobStatus status)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_JOB_STATUS_CHANGE_arg param = {
        (char *)id, status
    };

    qmp = qmp_event_build_dict("JOB_STATUS_CHANGE");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "JOB_STATUS_CHANGE", NULL, 0, &error_abort);
    visit_type_q_obj_JOB_STATUS_CHANGE_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_JOB_STATUS_CHANGE, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_job_c;
