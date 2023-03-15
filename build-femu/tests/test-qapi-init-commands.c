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

    qmp_register_command(cmds, "user-def-cmd0",
                         qmp_marshal_user_def_cmd0, 0, 0);
    qmp_register_command(cmds, "user-def-cmd",
                         qmp_marshal_user_def_cmd, 0, 0);
    qmp_register_command(cmds, "user-def-cmd1",
                         qmp_marshal_user_def_cmd1, 0, 0);
    qmp_register_command(cmds, "user-def-cmd2",
                         qmp_marshal_user_def_cmd2, 0, 0);
    qmp_register_command(cmds, "cmd-success-response",
                         qmp_marshal_cmd_success_response, QCO_NO_SUCCESS_RESP, 0);
    qmp_register_command(cmds, "coroutine-cmd",
                         qmp_marshal_coroutine_cmd, QCO_COROUTINE, 0);
    qmp_register_command(cmds, "guest-get-time",
                         qmp_marshal_guest_get_time, 0, 0);
    qmp_register_command(cmds, "guest-sync",
                         qmp_marshal_guest_sync, 0, 0);
    qmp_register_command(cmds, "boxed-struct",
                         qmp_marshal_boxed_struct, 0, 0);
    qmp_register_command(cmds, "boxed-union",
                         qmp_marshal_boxed_union, 0, 0);
    qmp_register_command(cmds, "boxed-empty",
                         qmp_marshal_boxed_empty, 0, 0);
    qmp_register_command(cmds, "test-flags-command",
                         qmp_marshal_test_flags_command, QCO_ALLOW_OOB | QCO_ALLOW_PRECONFIG, 0);
    qmp_register_command(cmds, "__org.qemu_x-command",
                         qmp_marshal___org_qemu_x_command, 0, 0);
#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
    qmp_register_command(cmds, "test-if-union-cmd",
                         qmp_marshal_test_if_union_cmd, 0, 0);
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */
#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
    qmp_register_command(cmds, "test-if-alternate-cmd",
                         qmp_marshal_test_if_alternate_cmd, 0, 0);
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */
#if defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT)
    qmp_register_command(cmds, "test-if-cmd",
                         qmp_marshal_test_if_cmd, 0, 0);
#endif /* defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT) */
    qmp_register_command(cmds, "test-cmd-return-def-three",
                         qmp_marshal_test_cmd_return_def_three, 0, 0);
    qmp_register_command(cmds, "test-features0",
                         qmp_marshal_test_features0, 0, 0);
    qmp_register_command(cmds, "test-command-features1",
                         qmp_marshal_test_command_features1, 0, 1u << QAPI_DEPRECATED);
    qmp_register_command(cmds, "test-command-features3",
                         qmp_marshal_test_command_features3, 0, 1u << QAPI_UNSTABLE);
    qmp_register_command(cmds, "test-command-cond-features1",
                         qmp_marshal_test_command_cond_features1, 0, 0);
    qmp_register_command(cmds, "test-command-cond-features2",
                         qmp_marshal_test_command_cond_features2, 0, 0);
    qmp_register_command(cmds, "test-command-cond-features3",
                         qmp_marshal_test_command_cond_features3, 0, 0);
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_test_qapi_init_commands_c;
