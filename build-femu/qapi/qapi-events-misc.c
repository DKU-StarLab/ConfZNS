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
#include "qapi-events-misc.h"
#include "qapi-visit-misc.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


void qapi_event_send_rtc_change(int64_t offset, const char *qom_path)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_RTC_CHANGE_arg param = {
        offset, (char *)qom_path
    };

    qmp = qmp_event_build_dict("RTC_CHANGE");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "RTC_CHANGE", NULL, 0, &error_abort);
    visit_type_q_obj_RTC_CHANGE_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_RTC_CHANGE, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_misc_c;
