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
#include "qapi-events-migration.h"
#include "qapi-visit-migration.h"
#include "qapi/compat-policy.h"
#include "qapi/error.h"
#include "qapi/qmp/qdict.h"
#include "qapi/qmp-event.h"


void qapi_event_send_migration(MigrationStatus status)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_MIGRATION_arg param = {
        status
    };

    qmp = qmp_event_build_dict("MIGRATION");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "MIGRATION", NULL, 0, &error_abort);
    visit_type_q_obj_MIGRATION_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_MIGRATION, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_migration_pass(int64_t pass)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_MIGRATION_PASS_arg param = {
        pass
    };

    qmp = qmp_event_build_dict("MIGRATION_PASS");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "MIGRATION_PASS", NULL, 0, &error_abort);
    visit_type_q_obj_MIGRATION_PASS_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_MIGRATION_PASS, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_colo_exit(COLOMode mode, COLOExitReason reason)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_COLO_EXIT_arg param = {
        mode, reason
    };

    qmp = qmp_event_build_dict("COLO_EXIT");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "COLO_EXIT", NULL, 0, &error_abort);
    visit_type_q_obj_COLO_EXIT_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_COLO_EXIT, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

void qapi_event_send_unplug_primary(const char *device_id)
{
    QDict *qmp;
    QObject *obj;
    Visitor *v;
    q_obj_UNPLUG_PRIMARY_arg param = {
        (char *)device_id
    };

    qmp = qmp_event_build_dict("UNPLUG_PRIMARY");

    v = qobject_output_visitor_new_qmp(&obj);

    visit_start_struct(v, "UNPLUG_PRIMARY", NULL, 0, &error_abort);
    visit_type_q_obj_UNPLUG_PRIMARY_arg_members(v, &param, &error_abort);
    visit_check_struct(v, &error_abort);
    visit_end_struct(v, NULL);

    visit_complete(v, &obj);
    if (qdict_size(qobject_to(QDict, obj))) {
        qdict_put_obj(qmp, "data", obj);
    } else {
        qobject_unref(obj);
    }
    qapi_event_emit(QAPI_EVENT_UNPLUG_PRIMARY, qmp);

    visit_free(v);
    qobject_unref(qmp);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_events_migration_c;
