/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI/QMP schema introspection
 *
 * Copyright (C) 2015-2021 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "test-qapi-introspect.h"

const QLitObject test_qmp_schema_qlit = QLIT_QLIST(((QLitObject[]) {
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("user-def-cmd0"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("user-def-cmd"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("2"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("user-def-cmd1"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("3"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("user-def-cmd2"), },
        { "ret-type", QLIT_QSTR("4"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("cmd-success-response"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("coroutine-cmd"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("5"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("guest-get-time"), },
        { "ret-type", QLIT_QSTR("int"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("6"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("guest-sync"), },
        { "ret-type", QLIT_QSTR("any"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("7"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("boxed-struct"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("8"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("boxed-union"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("9"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("boxed-empty"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "allow-oob", QLIT_QBOOL(true), },
        { "arg-type", QLIT_QSTR("1"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-flags-command"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("EVENT_A"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("EVENT_B"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("10"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("EVENT_C"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("11"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("EVENT_D"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("7"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("EVENT_E"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("8"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("EVENT_F"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("9"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("EVENT_G"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("12"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("__ORG.QEMU_X-EVENT"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("13"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("__org.qemu_x-command"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("14"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-if-union-cmd"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */
#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("15"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-if-alternate-cmd"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */
#if defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("16"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-if-cmd"), },
        { "ret-type", QLIT_QSTR("17"), },
        {}
    })),
#endif /* defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT) */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-cmd-return-def-three"), },
        { "ret-type", QLIT_QSTR("17"), },
        {}
    })),
#if defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("18"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("TEST_IF_EVENT"), },
        {}
    })),
#endif /* defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT) */
#if !(!defined(TEST_IF_EVT) || !defined(TEST_IF_STRUCT))
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("TEST_IF_EVENT2"), },
        {}
    })),
#endif /* !(!defined(TEST_IF_EVT) || !defined(TEST_IF_STRUCT)) */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("19"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-features0"), },
        { "ret-type", QLIT_QSTR("20"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("deprecated"),
            {}
        })), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-command-features1"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("unstable"),
            QLIT_QSTR("feature1"),
            QLIT_QSTR("feature2"),
            {}
        })), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-command-features3"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
#if defined(TEST_IF_FEATURE_1)
            QLIT_QSTR("feature1"),
#endif /* defined(TEST_IF_FEATURE_1) */
            {}
        })), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-command-cond-features1"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
#if defined(TEST_IF_FEATURE_1)
            QLIT_QSTR("feature1"),
#endif /* defined(TEST_IF_FEATURE_1) */
#if defined(TEST_IF_FEATURE_2)
            QLIT_QSTR("feature2"),
#endif /* defined(TEST_IF_FEATURE_2) */
            {}
        })), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-command-cond-features2"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
#if defined(TEST_IF_COND_1) && defined(TEST_IF_COND_2)
            QLIT_QSTR("feature1"),
#endif /* defined(TEST_IF_COND_1) && defined(TEST_IF_COND_2) */
            {}
        })), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("test-command-cond-features3"), },
        { "ret-type", QLIT_QSTR("1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("20"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("TEST_EVENT_FEATURES0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("deprecated"),
            {}
        })), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("TEST_EVENT_FEATURES1"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("1"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("unstable"),
            {}
        })), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("TEST_EVENT_FEATURES2"), },
        {}
    })),
    /* "0" = Empty2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("0"), },
        {}
    })),
    /* "1" = q_empty */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("1"), },
        {}
    })),
    /* "2" = q_obj_user-def-cmd1-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ud1a"), },
                { "type", QLIT_QSTR("21"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("2"), },
        {}
    })),
    /* "3" = q_obj_user-def-cmd2-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ud1a"), },
                { "type", QLIT_QSTR("21"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ud1b"), },
                { "type", QLIT_QSTR("21"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("3"), },
        {}
    })),
    /* "4" = UserDefTwo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("string0"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("dict1"), },
                { "type", QLIT_QSTR("22"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("4"), },
        {}
    })),
    /* "5" = q_obj_guest-get-time-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("a"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("b"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("5"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("int"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("int"), },
        {}
    })),
    /* "6" = q_obj_guest-sync-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg"), },
                { "type", QLIT_QSTR("any"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("6"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("value"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("any"), },
        {}
    })),
    /* "7" = UserDefZero */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("integer"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("7"), },
        {}
    })),
    /* "8" = UserDefFlatUnion */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("integer"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("string"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("enum1"), },
                { "type", QLIT_QSTR("23"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("8"), },
        { "tag", QLIT_QSTR("enum1"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("value1"), },
                { "type", QLIT_QSTR("24"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("value2"), },
                { "type", QLIT_QSTR("25"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("value3"), },
                { "type", QLIT_QSTR("25"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("value4"), },
                { "type", QLIT_QSTR("1"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "9" = Empty1 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("9"), },
        {}
    })),
    /* "10" = q_obj_EVENT_C-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("a"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("b"), },
                { "type", QLIT_QSTR("21"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("c"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("10"), },
        {}
    })),
    /* "11" = q_obj_EVENT_D-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("a"), },
                { "type", QLIT_QSTR("26"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("b"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("c"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("enum3"), },
                { "type", QLIT_QSTR("23"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("11"), },
        {}
    })),
    /* "12" = __org.qemu_x-Struct */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("__org.qemu_x-member1"), },
                { "type", QLIT_QSTR("27"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("__org.qemu_x-member2"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("wchar-t"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("12"), },
        {}
    })),
    /* "13" = q_obj___org.qemu_x-command-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("a"), },
                { "type", QLIT_QSTR("[27]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("b"), },
                { "type", QLIT_QSTR("[12]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("c"), },
                { "type", QLIT_QSTR("28"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("d"), },
                { "type", QLIT_QSTR("29"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("13"), },
        {}
    })),
    /* "14" = q_obj_test-if-union-cmd-arg */
#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("union-cmd-arg"), },
                { "type", QLIT_QSTR("30"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("14"), },
        {}
    })),
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */
    /* "15" = q_obj_test-if-alternate-cmd-arg */
#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("alt-cmd-arg"), },
                { "type", QLIT_QSTR("31"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("15"), },
        {}
    })),
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */
    /* "16" = q_obj_test-if-cmd-arg */
#if defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("32"), },
                {}
            })),
#if defined(TEST_IF_CMD_BAR)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bar"), },
                { "type", QLIT_QSTR("33"), },
                {}
            })),
#endif /* defined(TEST_IF_CMD_BAR) */
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("16"), },
        {}
    })),
#endif /* defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT) */
    /* "17" = UserDefThree */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("string0"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("17"), },
        {}
    })),
    /* "18" = q_obj_TEST_IF_EVENT-arg */
#if defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("32"), },
                {}
            })),
#if defined(TEST_IF_EVT_BAR)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bar"), },
                { "type", QLIT_QSTR("[33]"), },
                {}
            })),
#endif /* defined(TEST_IF_EVT_BAR) */
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("18"), },
        {}
    })),
#endif /* defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT) */
    /* "19" = q_obj_test-features0-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fs0"), },
                { "type", QLIT_QSTR("34"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fs1"), },
                { "type", QLIT_QSTR("20"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fs2"), },
                { "type", QLIT_QSTR("35"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fs3"), },
                { "type", QLIT_QSTR("36"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fs4"), },
                { "type", QLIT_QSTR("37"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cfs1"), },
                { "type", QLIT_QSTR("38"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cfs2"), },
                { "type", QLIT_QSTR("39"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cfs3"), },
                { "type", QLIT_QSTR("40"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cfs4"), },
                { "type", QLIT_QSTR("41"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("19"), },
        {}
    })),
    /* "20" = FeatureStruct1 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("feature1"),
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "features", QLIT_QLIST(((QLitObject[]) {
                    QLIT_QSTR("deprecated"),
                    {}
                })), },
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("20"), },
        {}
    })),
    /* "21" = UserDefOne */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("integer"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("string"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("enum1"), },
                { "type", QLIT_QSTR("23"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("21"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("string"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("str"), },
        {}
    })),
    /* "22" = UserDefTwoDict */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("string1"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("dict2"), },
                { "type", QLIT_QSTR("42"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("dict3"), },
                { "type", QLIT_QSTR("42"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("22"), },
        {}
    })),
    /* "23" = EnumOne */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value1"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value2"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value3"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value4"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("23"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("value1"),
            QLIT_QSTR("value2"),
            QLIT_QSTR("value3"),
            QLIT_QSTR("value4"),
            {}
        })), },
        {}
    })),
    /* "24" = UserDefA */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("boolean"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("a_b"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("24"), },
        {}
    })),
    /* "25" = UserDefB */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("intb"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("a-b"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("25"), },
        {}
    })),
    /* "26" = EventStructOne */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("struct1"), },
                { "type", QLIT_QSTR("21"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("string"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("enum2"), },
                { "type", QLIT_QSTR("23"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("26"), },
        {}
    })),
    /* "27" = __org.qemu_x-Enum */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("__org.qemu_x-value"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("27"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("__org.qemu_x-value"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("27"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[27]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("12"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[12]"), },
        {}
    })),
    /* "28" = __org.qemu_x-Union */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("__org.qemu_x-member1"), },
                { "type", QLIT_QSTR("27"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("28"), },
        { "tag", QLIT_QSTR("__org.qemu_x-member1"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("__org.qemu_x-value"), },
                { "type", QLIT_QSTR("43"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "29" = __org.qemu_x-Alt */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("44"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("29"), },
        {}
    })),
    /* "30" = TestIfUnion */
#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("33"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("30"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("45"), },
                {}
            })),
#if defined(TEST_IF_ENUM_BAR)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("bar"), },
                { "type", QLIT_QSTR("7"), },
                {}
            })),
#endif /* defined(TEST_IF_ENUM_BAR) */
            {}
        })), },
        {}
    })),
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */
    /* "31" = TestIfAlternate */
#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("int"), },
                {}
            })),
#if defined(TEST_IF_ALT_BAR)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("45"), },
                {}
            })),
#endif /* defined(TEST_IF_ALT_BAR) */
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("31"), },
        {}
    })),
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */
    /* "32" = TestIfStruct */
#if defined(TEST_IF_STRUCT)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
#if defined(TEST_IF_STRUCT_BAR)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bar"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
#endif /* defined(TEST_IF_STRUCT_BAR) */
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("32"), },
        {}
    })),
#endif /* defined(TEST_IF_STRUCT) */
    /* "33" = TestIfEnum */
#if defined(TEST_IF_ENUM)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                {}
            })),
#if defined(TEST_IF_ENUM_BAR)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bar"), },
                {}
            })),
#endif /* defined(TEST_IF_ENUM_BAR) */
            {}
        })), },
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("33"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("foo"),
#if defined(TEST_IF_ENUM_BAR)
            QLIT_QSTR("bar"),
#endif /* defined(TEST_IF_ENUM_BAR) */
            {}
        })), },
        {}
    })),
#endif /* defined(TEST_IF_ENUM) */
#if defined(TEST_IF_ENUM)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("33"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[33]"), },
        {}
    })),
#endif /* defined(TEST_IF_ENUM) */
    /* "34" = FeatureStruct0 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("34"), },
        {}
    })),
    /* "35" = FeatureStruct2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("feature1"),
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "features", QLIT_QLIST(((QLitObject[]) {
                    QLIT_QSTR("unstable"),
                    {}
                })), },
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("35"), },
        {}
    })),
    /* "36" = FeatureStruct3 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("feature1"),
            QLIT_QSTR("feature2"),
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("36"), },
        {}
    })),
    /* "37" = FeatureStruct4 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("namespace-test"),
            QLIT_QSTR("int"),
            QLIT_QSTR("name"),
            QLIT_QSTR("if"),
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("namespace-test"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("37"), },
        {}
    })),
    /* "38" = CondFeatureStruct1 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
#if defined(TEST_IF_FEATURE_1)
            QLIT_QSTR("feature1"),
#endif /* defined(TEST_IF_FEATURE_1) */
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("38"), },
        {}
    })),
    /* "39" = CondFeatureStruct2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
#if defined(TEST_IF_FEATURE_1)
            QLIT_QSTR("feature1"),
#endif /* defined(TEST_IF_FEATURE_1) */
#if defined(TEST_IF_FEATURE_2)
            QLIT_QSTR("feature2"),
#endif /* defined(TEST_IF_FEATURE_2) */
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("39"), },
        {}
    })),
    /* "40" = CondFeatureStruct3 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
#if defined(TEST_IF_COND_1) && defined(TEST_IF_COND_2)
            QLIT_QSTR("feature1"),
#endif /* defined(TEST_IF_COND_1) && defined(TEST_IF_COND_2) */
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("40"), },
        {}
    })),
    /* "41" = CondFeatureStruct4 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
#if defined(TEST_IF_COND_1) || defined(TEST_IF_COND_2)
            QLIT_QSTR("feature1"),
#endif /* defined(TEST_IF_COND_1) || defined(TEST_IF_COND_2) */
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("foo"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("41"), },
        {}
    })),
    /* "42" = UserDefTwoDictDict */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("userdef"), },
                { "type", QLIT_QSTR("21"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("string"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("42"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("boolean"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("bool"), },
        {}
    })),
    /* "43" = __org.qemu_x-Struct2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("array"), },
                { "type", QLIT_QSTR("[28]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("43"), },
        {}
    })),
    /* "44" = __org.qemu_x-Base */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("__org.qemu_x-member1"), },
                { "type", QLIT_QSTR("27"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("44"), },
        {}
    })),
    /* "45" = TestStruct */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("integer"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("boolean"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("string"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("45"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("28"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[28]"), },
        {}
    })),
    {}
}));

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_test_qapi_introspect_c;
