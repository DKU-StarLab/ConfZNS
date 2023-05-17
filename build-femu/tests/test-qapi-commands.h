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

#ifndef TEST_QAPI_COMMANDS_H
#define TEST_QAPI_COMMANDS_H

#include "include/test-qapi-commands-sub-module.h"
#include "test-qapi-types.h"

Empty2 *qmp_user_def_cmd0(Error **errp);
void qmp_marshal_user_def_cmd0(QDict *args, QObject **ret, Error **errp);
void qmp_user_def_cmd(Error **errp);
void qmp_marshal_user_def_cmd(QDict *args, QObject **ret, Error **errp);
void qmp_user_def_cmd1(UserDefOne *ud1a, Error **errp);
void qmp_marshal_user_def_cmd1(QDict *args, QObject **ret, Error **errp);
UserDefTwo *qmp_user_def_cmd2(UserDefOne *ud1a, bool has_ud1b, UserDefOne *ud1b, Error **errp);
void qmp_marshal_user_def_cmd2(QDict *args, QObject **ret, Error **errp);
void qmp_cmd_success_response(Error **errp);
void qmp_marshal_cmd_success_response(QDict *args, QObject **ret, Error **errp);
void qmp_coroutine_cmd(Error **errp);
void qmp_marshal_coroutine_cmd(QDict *args, QObject **ret, Error **errp);
int64_t qmp_guest_get_time(int64_t a, bool has_b, int64_t b, Error **errp);
void qmp_marshal_guest_get_time(QDict *args, QObject **ret, Error **errp);
QObject *qmp_guest_sync(QObject *arg, Error **errp);
void qmp_marshal_guest_sync(QDict *args, QObject **ret, Error **errp);
void qmp_boxed_struct(UserDefZero *arg, Error **errp);
void qmp_marshal_boxed_struct(QDict *args, QObject **ret, Error **errp);
void qmp_boxed_union(UserDefFlatUnion *arg, Error **errp);
void qmp_marshal_boxed_union(QDict *args, QObject **ret, Error **errp);
void qmp_boxed_empty(Empty1 *arg, Error **errp);
void qmp_marshal_boxed_empty(QDict *args, QObject **ret, Error **errp);
void qmp_test_flags_command(Error **errp);
void qmp_marshal_test_flags_command(QDict *args, QObject **ret, Error **errp);
void qmp___org_qemu_x_command(__org_qemu_x_EnumList *a, __org_qemu_x_StructList *b, __org_qemu_x_Union *c, __org_qemu_x_Alt *d, Error **errp);
void qmp_marshal___org_qemu_x_command(QDict *args, QObject **ret, Error **errp);
#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
void qmp_test_if_union_cmd(TestIfUnion *union_cmd_arg, Error **errp);
void qmp_marshal_test_if_union_cmd(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */
#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
void qmp_test_if_alternate_cmd(TestIfAlternate *alt_cmd_arg, Error **errp);
void qmp_marshal_test_if_alternate_cmd(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */
#if defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT)
UserDefThree *qmp_test_if_cmd(TestIfStruct *foo, TestIfEnum bar, Error **errp);
void qmp_marshal_test_if_cmd(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT) */
UserDefThree *qmp_test_cmd_return_def_three(Error **errp);
void qmp_marshal_test_cmd_return_def_three(QDict *args, QObject **ret, Error **errp);
FeatureStruct1 *qmp_test_features0(bool has_fs0, FeatureStruct0 *fs0, bool has_fs1, FeatureStruct1 *fs1, bool has_fs2, FeatureStruct2 *fs2, bool has_fs3, FeatureStruct3 *fs3, bool has_fs4, FeatureStruct4 *fs4, bool has_cfs1, CondFeatureStruct1 *cfs1, bool has_cfs2, CondFeatureStruct2 *cfs2, bool has_cfs3, CondFeatureStruct3 *cfs3, bool has_cfs4, CondFeatureStruct4 *cfs4, Error **errp);
void qmp_marshal_test_features0(QDict *args, QObject **ret, Error **errp);
void qmp_test_command_features1(Error **errp);
void qmp_marshal_test_command_features1(QDict *args, QObject **ret, Error **errp);
void qmp_test_command_features3(Error **errp);
void qmp_marshal_test_command_features3(QDict *args, QObject **ret, Error **errp);
void qmp_test_command_cond_features1(Error **errp);
void qmp_marshal_test_command_cond_features1(QDict *args, QObject **ret, Error **errp);
void qmp_test_command_cond_features2(Error **errp);
void qmp_marshal_test_command_cond_features2(QDict *args, QObject **ret, Error **errp);
void qmp_test_command_cond_features3(Error **errp);
void qmp_marshal_test_command_cond_features3(QDict *args, QObject **ret, Error **errp);

#endif /* TEST_QAPI_COMMANDS_H */
