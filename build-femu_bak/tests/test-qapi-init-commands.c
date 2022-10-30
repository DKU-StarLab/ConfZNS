/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI Commands initialization
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "test-qapi-commands.h"
#include "test-qapi-init-commands.h"

void test_qmp_init_marshal(QmpCommandList *cmds)
{
    QTAILQ_INIT(cmds);

    qmp_register_command(cmds, "user_def_cmd0",
                         qmp_marshal_user_def_cmd0, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "user_def_cmd",
                         qmp_marshal_user_def_cmd, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "user_def_cmd1",
                         qmp_marshal_user_def_cmd1, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "user_def_cmd2",
                         qmp_marshal_user_def_cmd2, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "cmd-success-response",
                         qmp_marshal_cmd_success_response, QCO_NO_SUCCESS_RESP);
    qmp_register_command(cmds, "coroutine-cmd",
                         qmp_marshal_coroutine_cmd, QCO_COROUTINE);
    qmp_register_command(cmds, "guest-get-time",
                         qmp_marshal_guest_get_time, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "guest-sync",
                         qmp_marshal_guest_sync, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "boxed-struct",
                         qmp_marshal_boxed_struct, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "boxed-union",
                         qmp_marshal_boxed_union, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "boxed-empty",
                         qmp_marshal_boxed_empty, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "test-flags-command",
                         qmp_marshal_test_flags_command, QCO_ALLOW_OOB | QCO_ALLOW_PRECONFIG);
    qmp_register_command(cmds, "__org.qemu_x-command",
                         qmp_marshal___org_qemu_x_command, QCO_NO_OPTIONS);
#if defined(TEST_IF_UNION)
    qmp_register_command(cmds, "TestIfUnionCmd",
                         qmp_marshal_TestIfUnionCmd, QCO_NO_OPTIONS);
#endif /* defined(TEST_IF_UNION) */
#if defined(TEST_IF_ALT)
    qmp_register_command(cmds, "TestIfAlternateCmd",
                         qmp_marshal_TestIfAlternateCmd, QCO_NO_OPTIONS);
#endif /* defined(TEST_IF_ALT) */
#if defined(TEST_IF_CMD)
#if defined(TEST_IF_STRUCT)
    qmp_register_command(cmds, "TestIfCmd",
                         qmp_marshal_TestIfCmd, QCO_NO_OPTIONS);
#endif /* defined(TEST_IF_STRUCT) */
#endif /* defined(TEST_IF_CMD) */
    qmp_register_command(cmds, "TestCmdReturnDefThree",
                         qmp_marshal_TestCmdReturnDefThree, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "test-features0",
                         qmp_marshal_test_features0, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "test-command-features1",
                         qmp_marshal_test_command_features1, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "test-command-features3",
                         qmp_marshal_test_command_features3, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "test-command-cond-features1",
                         qmp_marshal_test_command_cond_features1, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "test-command-cond-features2",
                         qmp_marshal_test_command_cond_features2, QCO_NO_OPTIONS);
    qmp_register_command(cmds, "test-command-cond-features3",
                         qmp_marshal_test_command_cond_features3, QCO_NO_OPTIONS);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_test_qapi_init_commands_c;
