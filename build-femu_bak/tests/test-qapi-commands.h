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
void qmp_boxed_union(UserDefListUnion *arg, Error **errp);
void qmp_marshal_boxed_union(QDict *args, QObject **ret, Error **errp);
void qmp_boxed_empty(Empty1 *arg, Error **errp);
void qmp_marshal_boxed_empty(QDict *args, QObject **ret, Error **errp);
void qmp_test_flags_command(Error **errp);
void qmp_marshal_test_flags_command(QDict *args, QObject **ret, Error **errp);
__org_qemu_x_Union1 *qmp___org_qemu_x_command(__org_qemu_x_EnumList *a, __org_qemu_x_StructList *b, __org_qemu_x_Union2 *c, __org_qemu_x_Alt *d, Error **errp);
void qmp_marshal___org_qemu_x_command(QDict *args, QObject **ret, Error **errp);
#if defined(TEST_IF_UNION)
void qmp_TestIfUnionCmd(TestIfUnion *union_cmd_arg, Error **errp);
void qmp_marshal_TestIfUnionCmd(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TEST_IF_UNION) */
#if defined(TEST_IF_ALT)
void qmp_TestIfAlternateCmd(TestIfAlternate *alt_cmd_arg, Error **errp);
void qmp_marshal_TestIfAlternateCmd(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TEST_IF_ALT) */
#if defined(TEST_IF_CMD)
#if defined(TEST_IF_STRUCT)
UserDefThree *qmp_TestIfCmd(TestIfStruct *foo, TestIfEnum bar, Error **errp);
void qmp_marshal_TestIfCmd(QDict *args, QObject **ret, Error **errp);
#endif /* defined(TEST_IF_STRUCT) */
#endif /* defined(TEST_IF_CMD) */
UserDefThree *qmp_TestCmdReturnDefThree(Error **errp);
void qmp_marshal_TestCmdReturnDefThree(QDict *args, QObject **ret, Error **errp);
void qmp_test_features0(FeatureStruct0 *fs0, FeatureStruct1 *fs1, FeatureStruct2 *fs2, FeatureStruct3 *fs3, FeatureStruct4 *fs4, CondFeatureStruct1 *cfs1, CondFeatureStruct2 *cfs2, CondFeatureStruct3 *cfs3, Error **errp);
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
