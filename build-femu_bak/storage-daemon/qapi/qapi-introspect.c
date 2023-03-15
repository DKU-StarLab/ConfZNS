/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * QAPI/QMP schema introspection
 *
 * Copyright (C) 2015-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#include "qemu/osdep.h"
#include "qapi-introspect.h"

const QLitObject qmp_schema_qlit = QLIT_QLIST(((QLitObject[]) {
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-block"), },
        { "ret-type", QLIT_QSTR("[1]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("2"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-blockstats"), },
        { "ret-type", QLIT_QSTR("[3]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-block-jobs"), },
        { "ret-type", QLIT_QSTR("[4]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("5"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block_passwd"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("6"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block_resize"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("7"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-snapshot-sync"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("8"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("allow-write-only-overlay"),
            {}
        })), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-snapshot"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("9"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("change-backing-file"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("10"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-commit"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("11"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("drive-backup"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("12"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-backup"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("13"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-named-block-nodes"), },
        { "ret-type", QLIT_QSTR("[14]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-debug-query-block-graph"), },
        { "ret-type", QLIT_QSTR("15"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("16"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("drive-mirror"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("17"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("18"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-remove"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("18"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-clear"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("18"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-enable"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("18"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-disable"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("19"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-dirty-bitmap-merge"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("18"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-debug-block-dirty-bitmap-sha256"), },
        { "ret-type", QLIT_QSTR("20"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("21"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-mirror"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("22"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-stream"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("23"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-set-speed"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("24"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-cancel"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("25"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-pause"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("26"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-resume"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("27"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-complete"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("28"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-dismiss"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("29"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-job-finalize"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("30"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("30"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-blockdev-reopen"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("31"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-del"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("32"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-create"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("33"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-blockdev-amend"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("34"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_IMAGE_CORRUPTED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("35"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_IO_ERROR"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("36"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_COMPLETED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("37"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_CANCELLED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("38"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_ERROR"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("39"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_READY"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("40"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_JOB_PENDING"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("41"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_WRITE_THRESHOLD"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("42"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-set-write-threshold"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("43"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-blockdev-change"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("44"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("x-blockdev-set-iothread"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("45"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("QUORUM_FAILURE"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("46"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("QUORUM_REPORT_BAD"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("47"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-snapshot-internal-sync"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("48"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("blockdev-snapshot-delete-internal-sync"), },
        { "ret-type", QLIT_QSTR("49"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("50"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("JOB_STATUS_CHANGE"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("51"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-pause"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("52"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-resume"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("53"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-cancel"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("54"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-complete"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("55"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-dismiss"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("56"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("job-finalize"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-jobs"), },
        { "ret-type", QLIT_QSTR("[57]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("58"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("nbd-server-start"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("59"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("deprecated"),
            {}
        })), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("nbd-server-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("60"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("deprecated"),
            {}
        })), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("nbd-server-remove"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("nbd-server-stop"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("61"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-export-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("62"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("block-export-del"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("63"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("BLOCK_EXPORT_DELETED"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-block-exports"), },
        { "ret-type", QLIT_QSTR("[64]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-chardev"), },
        { "ret-type", QLIT_QSTR("[65]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-chardev-backends"), },
        { "ret-type", QLIT_QSTR("[66]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("67"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("ringbuf-write"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("68"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("ringbuf-read"), },
        { "ret-type", QLIT_QSTR("str"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("69"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("chardev-add"), },
        { "ret-type", QLIT_QSTR("70"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("71"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("chardev-change"), },
        { "ret-type", QLIT_QSTR("70"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("72"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("chardev-remove"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("73"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("chardev-send-break"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("74"), },
        { "meta-type", QLIT_QSTR("event"), },
        { "name", QLIT_QSTR("VSERPORT_CHANGE"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("75"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qmp_capabilities"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-version"), },
        { "ret-type", QLIT_QSTR("76"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-commands"), },
        { "ret-type", QLIT_QSTR("[77]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "features", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("deprecated"),
            {}
        })), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-events"), },
        { "ret-type", QLIT_QSTR("[78]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("quit"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("0"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("query-qmp-schema"), },
        { "ret-type", QLIT_QSTR("[79]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("80"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-list"), },
        { "ret-type", QLIT_QSTR("[81]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("82"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-get"), },
        { "ret-type", QLIT_QSTR("any"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("83"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-set"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("84"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-list-types"), },
        { "ret-type", QLIT_QSTR("[85]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("86"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("qom-list-properties"), },
        { "ret-type", QLIT_QSTR("[81]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("87"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("object-add"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("88"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("object-del"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "arg-type", QLIT_QSTR("89"), },
        { "meta-type", QLIT_QSTR("command"), },
        { "name", QLIT_QSTR("transaction"), },
        { "ret-type", QLIT_QSTR("0"), },
        {}
    })),
    /* "0" = q_empty */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("0"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("1"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[1]"), },
        {}
    })),
    /* "1" = BlockInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("qdev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("removable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("locked"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inserted"), },
                { "type", QLIT_QSTR("14"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tray_open"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("io-status"), },
                { "type", QLIT_QSTR("90"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "features", QLIT_QLIST(((QLitObject[]) {
                    QLIT_QSTR("deprecated"),
                    {}
                })), },
                { "name", QLIT_QSTR("dirty-bitmaps"), },
                { "type", QLIT_QSTR("[91]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("1"), },
        {}
    })),
    /* "2" = q_obj_query-blockstats-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("query-nodes"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("2"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("3"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[3]"), },
        {}
    })),
    /* "3" = BlockStats */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("qdev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("stats"), },
                { "type", QLIT_QSTR("92"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("driver-specific"), },
                { "type", QLIT_QSTR("93"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("parent"), },
                { "type", QLIT_QSTR("3"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing"), },
                { "type", QLIT_QSTR("3"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("3"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("4"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[4]"), },
        {}
    })),
    /* "4" = BlockJobInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("len"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("busy"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("paused"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("io-status"), },
                { "type", QLIT_QSTR("90"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ready"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("94"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("4"), },
        {}
    })),
    /* "5" = q_obj_block_passwd-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("password"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("5"), },
        {}
    })),
    /* "6" = q_obj_block_resize-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("6"), },
        {}
    })),
    /* "7" = BlockdevSnapshotSync */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("snapshot-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snapshot-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("95"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("7"), },
        {}
    })),
    /* "8" = BlockdevSnapshot */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("overlay"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("8"), },
        {}
    })),
    /* "9" = q_obj_change-backing-file-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("image-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("9"), },
        {}
    })),
    /* "10" = q_obj_block-commit-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("base-node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "features", QLIT_QLIST(((QLitObject[]) {
                    QLIT_QSTR("deprecated"),
                    {}
                })), },
                { "name", QLIT_QSTR("base"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("top-node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "features", QLIT_QLIST(((QLitObject[]) {
                    QLIT_QSTR("deprecated"),
                    {}
                })), },
                { "name", QLIT_QSTR("top"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("filter-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("10"), },
        {}
    })),
    /* "11" = DriveBackup */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sync"), },
                { "type", QLIT_QSTR("97"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap-mode"), },
                { "type", QLIT_QSTR("98"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-source-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-target-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("filter-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("95"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("11"), },
        {}
    })),
    /* "12" = BlockdevBackup */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sync"), },
                { "type", QLIT_QSTR("97"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap-mode"), },
                { "type", QLIT_QSTR("98"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compress"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-source-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-target-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("filter-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("12"), },
        {}
    })),
    /* "13" = q_obj_query-named-block-nodes-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("flat"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("13"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("14"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[14]"), },
        {}
    })),
    /* "14" = BlockDeviceInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ro"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("drv"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing_file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("backing_file_depth"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("encrypted"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "features", QLIT_QLIST(((QLitObject[]) {
                    QLIT_QSTR("deprecated"),
                    {}
                })), },
                { "name", QLIT_QSTR("encryption_key_missing"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("detect_zeroes"), },
                { "type", QLIT_QSTR("99"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bps"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bps_rd"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bps_wr"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iops"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iops_rd"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iops_wr"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("image"), },
                { "type", QLIT_QSTR("100"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_rd_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_wr_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_rd_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_wr_max"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_rd_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bps_wr_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_rd_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_wr_max_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iops_size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("group"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cache"), },
                { "type", QLIT_QSTR("101"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("write_threshold"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("dirty-bitmaps"), },
                { "type", QLIT_QSTR("[91]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("14"), },
        {}
    })),
    /* "15" = XDbgBlockGraph */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("nodes"), },
                { "type", QLIT_QSTR("[102]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("edges"), },
                { "type", QLIT_QSTR("[103]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("15"), },
        {}
    })),
    /* "16" = DriveMirror */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("replaces"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sync"), },
                { "type", QLIT_QSTR("97"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("95"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("buf-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-source-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-target-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("unmap"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("copy-mode"), },
                { "type", QLIT_QSTR("104"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("16"), },
        {}
    })),
    /* "17" = BlockDirtyBitmapAdd */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("persistent"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("disabled"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("17"), },
        {}
    })),
    /* "18" = BlockDirtyBitmap */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("18"), },
        {}
    })),
    /* "19" = BlockDirtyBitmapMerge */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bitmaps"), },
                { "type", QLIT_QSTR("[105]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("19"), },
        {}
    })),
    /* "20" = BlockDirtyBitmapSha256 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sha256"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("20"), },
        {}
    })),
    /* "21" = q_obj_blockdev-mirror-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("replaces"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sync"), },
                { "type", QLIT_QSTR("97"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("buf-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-source-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-target-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("filter-node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("copy-mode"), },
                { "type", QLIT_QSTR("104"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("21"), },
        {}
    })),
    /* "22" = q_obj_block-stream-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("base"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("base-node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("on-error"), },
                { "type", QLIT_QSTR("96"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-finalize"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-dismiss"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("22"), },
        {}
    })),
    /* "23" = q_obj_block-job-set-speed-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("23"), },
        {}
    })),
    /* "24" = q_obj_block-job-cancel-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("24"), },
        {}
    })),
    /* "25" = q_obj_block-job-pause-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("25"), },
        {}
    })),
    /* "26" = q_obj_block-job-resume-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("26"), },
        {}
    })),
    /* "27" = q_obj_block-job-complete-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("27"), },
        {}
    })),
    /* "28" = q_obj_block-job-dismiss-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("28"), },
        {}
    })),
    /* "29" = q_obj_block-job-finalize-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("29"), },
        {}
    })),
    /* "30" = BlockdevOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("driver"), },
                { "type", QLIT_QSTR("106"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("discard"), },
                { "type", QLIT_QSTR("107"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cache"), },
                { "type", QLIT_QSTR("108"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("read-only"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auto-read-only"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force-share"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("detect-zeroes"), },
                { "type", QLIT_QSTR("99"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("30"), },
        { "tag", QLIT_QSTR("driver"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkdebug"), },
                { "type", QLIT_QSTR("109"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blklogwrites"), },
                { "type", QLIT_QSTR("110"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkverify"), },
                { "type", QLIT_QSTR("111"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkreplay"), },
                { "type", QLIT_QSTR("112"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("bochs"), },
                { "type", QLIT_QSTR("113"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("cloop"), },
                { "type", QLIT_QSTR("113"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("compress"), },
                { "type", QLIT_QSTR("113"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("copy-on-read"), },
                { "type", QLIT_QSTR("113"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("dmg"), },
                { "type", QLIT_QSTR("113"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("114"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftp"), },
                { "type", QLIT_QSTR("115"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftps"), },
                { "type", QLIT_QSTR("116"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("gluster"), },
                { "type", QLIT_QSTR("117"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_cdrom"), },
                { "type", QLIT_QSTR("114"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_device"), },
                { "type", QLIT_QSTR("114"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("http"), },
                { "type", QLIT_QSTR("118"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("https"), },
                { "type", QLIT_QSTR("119"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("iscsi"), },
                { "type", QLIT_QSTR("120"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("121"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nbd"), },
                { "type", QLIT_QSTR("122"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nfs"), },
                { "type", QLIT_QSTR("123"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-aio"), },
                { "type", QLIT_QSTR("124"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-co"), },
                { "type", QLIT_QSTR("124"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nvme"), },
                { "type", QLIT_QSTR("125"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("parallels"), },
                { "type", QLIT_QSTR("113"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow2"), },
                { "type", QLIT_QSTR("126"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow"), },
                { "type", QLIT_QSTR("127"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qed"), },
                { "type", QLIT_QSTR("128"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("quorum"), },
                { "type", QLIT_QSTR("129"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("raw"), },
                { "type", QLIT_QSTR("130"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("rbd"), },
                { "type", QLIT_QSTR("131"), },
                {}
            })),
#if defined(CONFIG_REPLICATION)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("replication"), },
                { "type", QLIT_QSTR("132"), },
                {}
            })),
#endif /* defined(CONFIG_REPLICATION) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sheepdog"), },
                { "type", QLIT_QSTR("133"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ssh"), },
                { "type", QLIT_QSTR("134"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("throttle"), },
                { "type", QLIT_QSTR("135"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vdi"), },
                { "type", QLIT_QSTR("113"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vhdx"), },
                { "type", QLIT_QSTR("113"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vmdk"), },
                { "type", QLIT_QSTR("128"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vpc"), },
                { "type", QLIT_QSTR("113"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vvfat"), },
                { "type", QLIT_QSTR("136"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "31" = q_obj_blockdev-del-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("31"), },
        {}
    })),
    /* "32" = q_obj_blockdev-create-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("options"), },
                { "type", QLIT_QSTR("137"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("32"), },
        {}
    })),
    /* "33" = q_obj_x-blockdev-amend-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("job-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("options"), },
                { "type", QLIT_QSTR("138"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("33"), },
        {}
    })),
    /* "34" = q_obj_BLOCK_IMAGE_CORRUPTED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("msg"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fatal"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("34"), },
        {}
    })),
    /* "35" = q_obj_BLOCK_IO_ERROR-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("operation"), },
                { "type", QLIT_QSTR("139"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("action"), },
                { "type", QLIT_QSTR("140"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("nospace"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reason"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("35"), },
        {}
    })),
    /* "36" = q_obj_BLOCK_JOB_COMPLETED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("141"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("len"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("36"), },
        {}
    })),
    /* "37" = q_obj_BLOCK_JOB_CANCELLED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("141"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("len"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("37"), },
        {}
    })),
    /* "38" = q_obj_BLOCK_JOB_ERROR-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("operation"), },
                { "type", QLIT_QSTR("139"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("action"), },
                { "type", QLIT_QSTR("140"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("38"), },
        {}
    })),
    /* "39" = q_obj_BLOCK_JOB_READY-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("141"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("len"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("speed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("39"), },
        {}
    })),
    /* "40" = q_obj_BLOCK_JOB_PENDING-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("141"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("40"), },
        {}
    })),
    /* "41" = q_obj_BLOCK_WRITE_THRESHOLD-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("amount-exceeded"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("write-threshold"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("41"), },
        {}
    })),
    /* "42" = q_obj_block-set-write-threshold-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("write-threshold"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("42"), },
        {}
    })),
    /* "43" = q_obj_x-blockdev-change-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("parent"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("child"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("node"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("43"), },
        {}
    })),
    /* "44" = q_obj_x-blockdev-set-iothread-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("iothread"), },
                { "type", QLIT_QSTR("142"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("44"), },
        {}
    })),
    /* "45" = q_obj_QUORUM_FAILURE-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("reference"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sector-num"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sectors-count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("45"), },
        {}
    })),
    /* "46" = q_obj_QUORUM_REPORT_BAD-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("143"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sector-num"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("sectors-count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("46"), },
        {}
    })),
    /* "47" = BlockdevSnapshotInternal */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("47"), },
        {}
    })),
    /* "48" = q_obj_blockdev-snapshot-delete-internal-sync-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("48"), },
        {}
    })),
    /* "49" = SnapshotInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vm-state-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("date-sec"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("date-nsec"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vm-clock-sec"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vm-clock-nsec"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("icount"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("49"), },
        {}
    })),
    /* "50" = q_obj_JOB_STATUS_CHANGE-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("94"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("50"), },
        {}
    })),
    /* "51" = q_obj_job-pause-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("51"), },
        {}
    })),
    /* "52" = q_obj_job-resume-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("52"), },
        {}
    })),
    /* "53" = q_obj_job-cancel-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("53"), },
        {}
    })),
    /* "54" = q_obj_job-complete-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("54"), },
        {}
    })),
    /* "55" = q_obj_job-dismiss-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("55"), },
        {}
    })),
    /* "56" = q_obj_job-finalize-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("56"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("57"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[57]"), },
        {}
    })),
    /* "57" = JobInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("141"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("94"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("current-progress"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("total-progress"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("error"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("57"), },
        {}
    })),
    /* "58" = q_obj_nbd-server-start-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("addr"), },
                { "type", QLIT_QSTR("144"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-creds"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-authz"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-connections"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("58"), },
        {}
    })),
    /* "59" = NbdServerAddOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("description"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("writable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("59"), },
        {}
    })),
    /* "60" = q_obj_nbd-server-remove-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("145"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("60"), },
        {}
    })),
    /* "61" = BlockExportOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("146"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fixed-iothread"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iothread"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("writable"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("writethrough"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("61"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nbd"), },
                { "type", QLIT_QSTR("147"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vhost-user-blk"), },
                { "type", QLIT_QSTR("148"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "62" = q_obj_block-export-del-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("145"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("62"), },
        {}
    })),
    /* "63" = q_obj_BLOCK_EXPORT_DELETED-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("63"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("64"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[64]"), },
        {}
    })),
    /* "64" = BlockExportInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("146"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("node-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("shutting-down"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("64"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("65"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[65]"), },
        {}
    })),
    /* "65" = ChardevInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("label"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("frontend-open"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("65"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("66"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[66]"), },
        {}
    })),
    /* "66" = ChardevBackendInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("66"), },
        {}
    })),
    /* "67" = q_obj_ringbuf-write-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("149"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("67"), },
        {}
    })),
    /* "68" = q_obj_ringbuf-read-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("149"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("68"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("string"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("str"), },
        {}
    })),
    /* "69" = q_obj_chardev-add-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("backend"), },
                { "type", QLIT_QSTR("150"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("69"), },
        {}
    })),
    /* "70" = ChardevReturn */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pty"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("70"), },
        {}
    })),
    /* "71" = q_obj_chardev-change-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("backend"), },
                { "type", QLIT_QSTR("150"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("71"), },
        {}
    })),
    /* "72" = q_obj_chardev-remove-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("72"), },
        {}
    })),
    /* "73" = q_obj_chardev-send-break-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("73"), },
        {}
    })),
    /* "74" = q_obj_VSERPORT_CHANGE-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("open"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("74"), },
        {}
    })),
    /* "75" = q_obj_qmp_capabilities-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("enable"), },
                { "type", QLIT_QSTR("[151]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("75"), },
        {}
    })),
    /* "76" = VersionInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("qemu"), },
                { "type", QLIT_QSTR("152"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("package"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("76"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("77"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[77]"), },
        {}
    })),
    /* "77" = CommandInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("77"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("78"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[78]"), },
        {}
    })),
    /* "78" = EventInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("78"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("79"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[79]"), },
        {}
    })),
    /* "79" = SchemaInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("meta-type"), },
                { "type", QLIT_QSTR("153"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("features"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("79"), },
        { "tag", QLIT_QSTR("meta-type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("builtin"), },
                { "type", QLIT_QSTR("154"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("enum"), },
                { "type", QLIT_QSTR("155"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("array"), },
                { "type", QLIT_QSTR("156"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("object"), },
                { "type", QLIT_QSTR("157"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("alternate"), },
                { "type", QLIT_QSTR("158"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("command"), },
                { "type", QLIT_QSTR("159"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("event"), },
                { "type", QLIT_QSTR("160"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "80" = q_obj_qom-list-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("80"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("81"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[81]"), },
        {}
    })),
    /* "81" = ObjectPropertyInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("description"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("default-value"), },
                { "type", QLIT_QSTR("any"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("81"), },
        {}
    })),
    /* "82" = q_obj_qom-get-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("property"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("82"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("value"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("any"), },
        {}
    })),
    /* "83" = q_obj_qom-set-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("property"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("value"), },
                { "type", QLIT_QSTR("any"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("83"), },
        {}
    })),
    /* "84" = q_obj_qom-list-types-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("implements"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("abstract"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("84"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("85"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[85]"), },
        {}
    })),
    /* "85" = ObjectTypeInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("abstract"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("parent"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("85"), },
        {}
    })),
    /* "86" = q_obj_qom-list-properties-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("typename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("86"), },
        {}
    })),
    /* "87" = q_obj_object-add-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("qom-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("props"), },
                { "type", QLIT_QSTR("any"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("87"), },
        {}
    })),
    /* "88" = q_obj_object-del-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("88"), },
        {}
    })),
    /* "89" = q_obj_transaction-arg */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("actions"), },
                { "type", QLIT_QSTR("[161]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("properties"), },
                { "type", QLIT_QSTR("162"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("89"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("boolean"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("bool"), },
        {}
    })),
    /* "90" = BlockDeviceIoStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("90"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ok"),
            QLIT_QSTR("failed"),
            QLIT_QSTR("nospace"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("91"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[91]"), },
        {}
    })),
    /* "91" = BlockDirtyInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("recording"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("busy"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "features", QLIT_QLIST(((QLitObject[]) {
                    QLIT_QSTR("deprecated"),
                    {}
                })), },
                { "name", QLIT_QSTR("status"), },
                { "type", QLIT_QSTR("163"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("persistent"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inconsistent"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("91"), },
        {}
    })),
    /* "92" = BlockDeviceStats */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("rd_bytes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_bytes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("unmap_bytes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("rd_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("flush_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("unmap_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("rd_total_time_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_total_time_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("flush_total_time_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("unmap_total_time_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_highest_offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("rd_merged"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("wr_merged"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("unmap_merged"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("idle_time_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("failed_rd_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("failed_wr_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("failed_flush_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("failed_unmap_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("invalid_rd_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("invalid_wr_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("invalid_flush_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("invalid_unmap_operations"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("account_invalid"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("account_failed"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("timed_stats"), },
                { "type", QLIT_QSTR("[164]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("rd_latency_histogram"), },
                { "type", QLIT_QSTR("165"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("wr_latency_histogram"), },
                { "type", QLIT_QSTR("165"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("flush_latency_histogram"), },
                { "type", QLIT_QSTR("165"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("92"), },
        {}
    })),
    /* "93" = BlockStatsSpecific */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("driver"), },
                { "type", QLIT_QSTR("106"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("93"), },
        { "tag", QLIT_QSTR("driver"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("166"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_device"), },
                { "type", QLIT_QSTR("166"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nvme"), },
                { "type", QLIT_QSTR("167"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkdebug"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blklogwrites"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkreplay"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkverify"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("bochs"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("cloop"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("compress"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("copy-on-read"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("dmg"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftp"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftps"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("gluster"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_cdrom"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("http"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("https"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("iscsi"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nbd"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nfs"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-aio"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-co"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("parallels"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow2"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qed"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("quorum"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("raw"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("rbd"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
#if defined(CONFIG_REPLICATION)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("replication"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
#endif /* defined(CONFIG_REPLICATION) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sheepdog"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ssh"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("throttle"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vdi"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vhdx"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vmdk"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vpc"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vvfat"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("int"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("int"), },
        {}
    })),
    /* "94" = JobStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("94"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("undefined"),
            QLIT_QSTR("created"),
            QLIT_QSTR("running"),
            QLIT_QSTR("paused"),
            QLIT_QSTR("ready"),
            QLIT_QSTR("standby"),
            QLIT_QSTR("waiting"),
            QLIT_QSTR("pending"),
            QLIT_QSTR("aborting"),
            QLIT_QSTR("concluded"),
            QLIT_QSTR("null"),
            {}
        })), },
        {}
    })),
    /* "95" = NewImageMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("95"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("existing"),
            QLIT_QSTR("absolute-paths"),
            {}
        })), },
        {}
    })),
    /* "96" = BlockdevOnError */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("96"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("report"),
            QLIT_QSTR("ignore"),
            QLIT_QSTR("enospc"),
            QLIT_QSTR("stop"),
            QLIT_QSTR("auto"),
            {}
        })), },
        {}
    })),
    /* "97" = MirrorSyncMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("97"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("top"),
            QLIT_QSTR("full"),
            QLIT_QSTR("none"),
            QLIT_QSTR("incremental"),
            QLIT_QSTR("bitmap"),
            {}
        })), },
        {}
    })),
    /* "98" = BitmapSyncMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("98"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("on-success"),
            QLIT_QSTR("never"),
            QLIT_QSTR("always"),
            {}
        })), },
        {}
    })),
    /* "99" = BlockdevDetectZeroesOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("99"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("off"),
            QLIT_QSTR("on"),
            QLIT_QSTR("unmap"),
            {}
        })), },
        {}
    })),
    /* "100" = ImageInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("dirty-flag"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("actual-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("virtual-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypted"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compressed"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("full-backing-filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-filename-format"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snapshots"), },
                { "type", QLIT_QSTR("[49]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-image"), },
                { "type", QLIT_QSTR("100"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("format-specific"), },
                { "type", QLIT_QSTR("168"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("100"), },
        {}
    })),
    /* "101" = BlockdevCacheInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("writeback"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("direct"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("no-flush"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("101"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("102"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[102]"), },
        {}
    })),
    /* "102" = XDbgBlockGraphNode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("169"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("102"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("103"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[103]"), },
        {}
    })),
    /* "103" = XDbgBlockGraphEdge */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("parent"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("child"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("perm"), },
                { "type", QLIT_QSTR("[170]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("shared-perm"), },
                { "type", QLIT_QSTR("[170]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("103"), },
        {}
    })),
    /* "104" = MirrorCopyMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("104"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("background"),
            QLIT_QSTR("write-blocking"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("105"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[105]"), },
        {}
    })),
    /* "105" = BlockDirtyBitmapMergeSource */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("18"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("105"), },
        {}
    })),
    /* "106" = BlockdevDriver */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("106"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("blkdebug"),
            QLIT_QSTR("blklogwrites"),
            QLIT_QSTR("blkreplay"),
            QLIT_QSTR("blkverify"),
            QLIT_QSTR("bochs"),
            QLIT_QSTR("cloop"),
            QLIT_QSTR("compress"),
            QLIT_QSTR("copy-on-read"),
            QLIT_QSTR("dmg"),
            QLIT_QSTR("file"),
            QLIT_QSTR("ftp"),
            QLIT_QSTR("ftps"),
            QLIT_QSTR("gluster"),
            QLIT_QSTR("host_cdrom"),
            QLIT_QSTR("host_device"),
            QLIT_QSTR("http"),
            QLIT_QSTR("https"),
            QLIT_QSTR("iscsi"),
            QLIT_QSTR("luks"),
            QLIT_QSTR("nbd"),
            QLIT_QSTR("nfs"),
            QLIT_QSTR("null-aio"),
            QLIT_QSTR("null-co"),
            QLIT_QSTR("nvme"),
            QLIT_QSTR("parallels"),
            QLIT_QSTR("qcow"),
            QLIT_QSTR("qcow2"),
            QLIT_QSTR("qed"),
            QLIT_QSTR("quorum"),
            QLIT_QSTR("raw"),
            QLIT_QSTR("rbd"),
#if defined(CONFIG_REPLICATION)
            QLIT_QSTR("replication"),
#endif /* defined(CONFIG_REPLICATION) */
            QLIT_QSTR("sheepdog"),
            QLIT_QSTR("ssh"),
            QLIT_QSTR("throttle"),
            QLIT_QSTR("vdi"),
            QLIT_QSTR("vhdx"),
            QLIT_QSTR("vmdk"),
            QLIT_QSTR("vpc"),
            QLIT_QSTR("vvfat"),
            {}
        })), },
        {}
    })),
    /* "107" = BlockdevDiscardOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("107"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ignore"),
            QLIT_QSTR("unmap"),
            {}
        })), },
        {}
    })),
    /* "108" = BlockdevCacheOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("direct"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("no-flush"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("108"), },
        {}
    })),
    /* "109" = BlockdevOptionsBlkdebug */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("image"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("config"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("align"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-transfer"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("opt-write-zero"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-write-zero"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("opt-discard"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("max-discard"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inject-error"), },
                { "type", QLIT_QSTR("[172]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("set-state"), },
                { "type", QLIT_QSTR("[173]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("take-child-perms"), },
                { "type", QLIT_QSTR("[170]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("unshare-child-perms"), },
                { "type", QLIT_QSTR("[170]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("109"), },
        {}
    })),
    /* "110" = BlockdevOptionsBlklogwrites */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("log"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("log-sector-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("log-append"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("log-super-update-interval"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("110"), },
        {}
    })),
    /* "111" = BlockdevOptionsBlkverify */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("test"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("raw"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("111"), },
        {}
    })),
    /* "112" = BlockdevOptionsBlkreplay */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("image"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("112"), },
        {}
    })),
    /* "113" = BlockdevOptionsGenericFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("113"), },
        {}
    })),
    /* "114" = BlockdevOptionsFile */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "features", QLIT_QLIST(((QLitObject[]) {
#if defined(CONFIG_POSIX)
            QLIT_QSTR("dynamic-auto-read-only"),
#endif /* defined(CONFIG_POSIX) */
            {}
        })), },
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pr-manager"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("locking"), },
                { "type", QLIT_QSTR("174"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("aio"), },
                { "type", QLIT_QSTR("175"), },
                {}
            })),
#if defined(CONFIG_LINUX)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("drop-cache"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
#endif /* defined(CONFIG_LINUX) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("x-check-cache-dropped"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("114"), },
        {}
    })),
    /* "115" = BlockdevOptionsCurlFtp */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("url"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("115"), },
        {}
    })),
    /* "116" = BlockdevOptionsCurlFtps */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("url"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("sslverify"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("116"), },
        {}
    })),
    /* "117" = BlockdevOptionsGluster */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("volume"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("[176]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("debug"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("117"), },
        {}
    })),
    /* "118" = BlockdevOptionsCurlHttp */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("url"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cookie"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cookie-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("118"), },
        {}
    })),
    /* "119" = BlockdevOptionsCurlHttps */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("url"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-username"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("proxy-password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cookie"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("sslverify"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cookie-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("119"), },
        {}
    })),
    /* "120" = BlockdevOptionsIscsi */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("transport"), },
                { "type", QLIT_QSTR("177"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("portal"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("target"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("lun"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("user"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("password-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("initiator-name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("header-digest"), },
                { "type", QLIT_QSTR("178"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("timeout"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("120"), },
        {}
    })),
    /* "121" = BlockdevOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("121"), },
        {}
    })),
    /* "122" = BlockdevOptionsNbd */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("176"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("export"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-creds"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("x-dirty-bitmap"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("reconnect-delay"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("122"), },
        {}
    })),
    /* "123" = BlockdevOptionsNfs */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("179"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("user"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("group"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tcp-syn-count"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("readahead-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("page-cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("debug"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("123"), },
        {}
    })),
    /* "124" = BlockdevOptionsNull */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("latency-ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("read-zeroes"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("124"), },
        {}
    })),
    /* "125" = BlockdevOptionsNVMe */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("namespace"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("125"), },
        {}
    })),
    /* "126" = BlockdevOptionsQcow2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing"), },
                { "type", QLIT_QSTR("180"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("lazy-refcounts"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pass-discard-request"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pass-discard-snapshot"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("pass-discard-other"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("overlap-check"), },
                { "type", QLIT_QSTR("181"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("l2-cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("l2-cache-entry-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("refcount-cache-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cache-clean-interval"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("182"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("126"), },
        {}
    })),
    /* "127" = BlockdevOptionsQcow */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing"), },
                { "type", QLIT_QSTR("180"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("183"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("127"), },
        {}
    })),
    /* "128" = BlockdevOptionsGenericCOWFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing"), },
                { "type", QLIT_QSTR("180"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("128"), },
        {}
    })),
    /* "129" = BlockdevOptionsQuorum */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("blkverify"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("children"), },
                { "type", QLIT_QSTR("[171]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vote-threshold"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("rewrite-corrupted"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("read-pattern"), },
                { "type", QLIT_QSTR("184"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("129"), },
        {}
    })),
    /* "130" = BlockdevOptionsRaw */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("130"), },
        {}
    })),
    /* "131" = BlockdevOptionsRbd */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("pool"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("namespace"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("image"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("conf"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snapshot"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("user"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("auth-client-required"), },
                { "type", QLIT_QSTR("[185]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("[186]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("131"), },
        {}
    })),
    /* "132" = BlockdevOptionsReplication */
#if defined(CONFIG_REPLICATION)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("187"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("top-id"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("132"), },
        {}
    })),
#endif /* defined(CONFIG_REPLICATION) */
    /* "133" = BlockdevOptionsSheepdog */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("176"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("vdi"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snap-id"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tag"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("133"), },
        {}
    })),
    /* "134" = BlockdevOptionsSsh */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("188"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("user"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("host-key-check"), },
                { "type", QLIT_QSTR("189"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("134"), },
        {}
    })),
    /* "135" = BlockdevOptionsThrottle */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("throttle-group"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("135"), },
        {}
    })),
    /* "136" = BlockdevOptionsVVFAT */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("dir"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("fat-type"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("floppy"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("label"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("rw"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("136"), },
        {}
    })),
    /* "137" = BlockdevCreateOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("driver"), },
                { "type", QLIT_QSTR("106"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("137"), },
        { "tag", QLIT_QSTR("driver"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("190"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("gluster"), },
                { "type", QLIT_QSTR("191"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("192"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nfs"), },
                { "type", QLIT_QSTR("193"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("parallels"), },
                { "type", QLIT_QSTR("194"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow"), },
                { "type", QLIT_QSTR("195"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow2"), },
                { "type", QLIT_QSTR("196"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qed"), },
                { "type", QLIT_QSTR("197"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("rbd"), },
                { "type", QLIT_QSTR("198"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sheepdog"), },
                { "type", QLIT_QSTR("199"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ssh"), },
                { "type", QLIT_QSTR("200"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vdi"), },
                { "type", QLIT_QSTR("201"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vhdx"), },
                { "type", QLIT_QSTR("202"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vmdk"), },
                { "type", QLIT_QSTR("203"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vpc"), },
                { "type", QLIT_QSTR("204"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkdebug"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blklogwrites"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkreplay"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkverify"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("bochs"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("cloop"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("compress"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("copy-on-read"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("dmg"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftp"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftps"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_cdrom"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_device"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("http"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("https"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("iscsi"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nbd"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-aio"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-co"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nvme"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("quorum"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("raw"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
#if defined(CONFIG_REPLICATION)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("replication"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
#endif /* defined(CONFIG_REPLICATION) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("throttle"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vvfat"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "138" = BlockdevAmendOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("driver"), },
                { "type", QLIT_QSTR("106"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("138"), },
        { "tag", QLIT_QSTR("driver"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("205"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow2"), },
                { "type", QLIT_QSTR("206"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkdebug"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blklogwrites"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkreplay"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blkverify"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("bochs"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("cloop"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("compress"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("copy-on-read"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("dmg"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftp"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ftps"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("gluster"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_cdrom"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("host_device"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("http"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("https"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("iscsi"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nbd"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nfs"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-aio"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null-co"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("nvme"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("parallels"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qed"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("quorum"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("raw"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("rbd"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
#if defined(CONFIG_REPLICATION)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("replication"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
#endif /* defined(CONFIG_REPLICATION) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("sheepdog"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ssh"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("throttle"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vdi"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vhdx"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vmdk"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vpc"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vvfat"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "139" = IoOperationType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("139"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("read"),
            QLIT_QSTR("write"),
            {}
        })), },
        {}
    })),
    /* "140" = BlockErrorAction */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("140"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ignore"),
            QLIT_QSTR("report"),
            QLIT_QSTR("stop"),
            {}
        })), },
        {}
    })),
    /* "141" = JobType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("141"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("commit"),
            QLIT_QSTR("stream"),
            QLIT_QSTR("mirror"),
            QLIT_QSTR("backup"),
            QLIT_QSTR("create"),
            QLIT_QSTR("amend"),
            {}
        })), },
        {}
    })),
    /* "142" = StrOrNull */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("null"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("142"), },
        {}
    })),
    /* "143" = QuorumOpType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("143"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("read"),
            QLIT_QSTR("write"),
            QLIT_QSTR("flush"),
            {}
        })), },
        {}
    })),
    /* "144" = SocketAddressLegacy */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("207"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("144"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("inet"), },
                { "type", QLIT_QSTR("208"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("unix"), },
                { "type", QLIT_QSTR("209"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vsock"), },
                { "type", QLIT_QSTR("210"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("fd"), },
                { "type", QLIT_QSTR("211"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "145" = BlockExportRemoveMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("145"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("safe"),
            QLIT_QSTR("hard"),
            {}
        })), },
        {}
    })),
    /* "146" = BlockExportType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("146"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("nbd"),
            QLIT_QSTR("vhost-user-blk"),
            {}
        })), },
        {}
    })),
    /* "147" = BlockExportOptionsNbd */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("description"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmaps"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("allocation-depth"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("147"), },
        {}
    })),
    /* "148" = BlockExportOptionsVhostUserBlk */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("addr"), },
                { "type", QLIT_QSTR("176"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logical-block-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("num-queues"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("148"), },
        {}
    })),
    /* "149" = DataFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("149"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("utf8"),
            QLIT_QSTR("base64"),
            {}
        })), },
        {}
    })),
    /* "150" = ChardevBackend */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("212"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("150"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("213"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("serial"), },
                { "type", QLIT_QSTR("214"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("parallel"), },
                { "type", QLIT_QSTR("214"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("pipe"), },
                { "type", QLIT_QSTR("214"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("socket"), },
                { "type", QLIT_QSTR("215"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("udp"), },
                { "type", QLIT_QSTR("216"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("pty"), },
                { "type", QLIT_QSTR("217"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("null"), },
                { "type", QLIT_QSTR("217"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("mux"), },
                { "type", QLIT_QSTR("218"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("msmouse"), },
                { "type", QLIT_QSTR("217"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("wctablet"), },
                { "type", QLIT_QSTR("217"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("braille"), },
                { "type", QLIT_QSTR("217"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("testdev"), },
                { "type", QLIT_QSTR("217"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("stdio"), },
                { "type", QLIT_QSTR("219"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("console"), },
                { "type", QLIT_QSTR("217"), },
                {}
            })),
#if defined(CONFIG_SPICE)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("spicevmc"), },
                { "type", QLIT_QSTR("220"), },
                {}
            })),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("spiceport"), },
                { "type", QLIT_QSTR("221"), },
                {}
            })),
#endif /* defined(CONFIG_SPICE) */
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vc"), },
                { "type", QLIT_QSTR("222"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("ringbuf"), },
                { "type", QLIT_QSTR("223"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("memory"), },
                { "type", QLIT_QSTR("223"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("151"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[151]"), },
        {}
    })),
    /* "151" = QMPCapability */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("151"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("oob"),
            {}
        })), },
        {}
    })),
    /* "152" = VersionTriple */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("major"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("minor"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("micro"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("152"), },
        {}
    })),
    /* "153" = SchemaMetaType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("153"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("builtin"),
            QLIT_QSTR("enum"),
            QLIT_QSTR("array"),
            QLIT_QSTR("object"),
            QLIT_QSTR("alternate"),
            QLIT_QSTR("command"),
            QLIT_QSTR("event"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("str"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[str]"), },
        {}
    })),
    /* "154" = SchemaInfoBuiltin */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("json-type"), },
                { "type", QLIT_QSTR("224"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("154"), },
        {}
    })),
    /* "155" = SchemaInfoEnum */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("values"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("155"), },
        {}
    })),
    /* "156" = SchemaInfoArray */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("element-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("156"), },
        {}
    })),
    /* "157" = SchemaInfoObject */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("members"), },
                { "type", QLIT_QSTR("[225]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tag"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("variants"), },
                { "type", QLIT_QSTR("[226]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("157"), },
        {}
    })),
    /* "158" = SchemaInfoAlternate */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("members"), },
                { "type", QLIT_QSTR("[227]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("158"), },
        {}
    })),
    /* "159" = SchemaInfoCommand */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ret-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("allow-oob"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("159"), },
        {}
    })),
    /* "160" = SchemaInfoEvent */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("arg-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("160"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("161"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[161]"), },
        {}
    })),
    /* "161" = TransactionAction */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("228"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("161"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("abort"), },
                { "type", QLIT_QSTR("229"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-add"), },
                { "type", QLIT_QSTR("230"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-remove"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-clear"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-enable"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-disable"), },
                { "type", QLIT_QSTR("231"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("block-dirty-bitmap-merge"), },
                { "type", QLIT_QSTR("232"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blockdev-backup"), },
                { "type", QLIT_QSTR("233"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blockdev-snapshot"), },
                { "type", QLIT_QSTR("234"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blockdev-snapshot-internal-sync"), },
                { "type", QLIT_QSTR("235"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("blockdev-snapshot-sync"), },
                { "type", QLIT_QSTR("236"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("drive-backup"), },
                { "type", QLIT_QSTR("237"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "162" = TransactionProperties */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("completion-mode"), },
                { "type", QLIT_QSTR("238"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("162"), },
        {}
    })),
    /* "163" = DirtyBitmapStatus */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("163"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("active"),
            QLIT_QSTR("disabled"),
            QLIT_QSTR("frozen"),
            QLIT_QSTR("locked"),
            QLIT_QSTR("inconsistent"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("164"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[164]"), },
        {}
    })),
    /* "164" = BlockDeviceTimedStats */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("interval_length"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("min_rd_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("max_rd_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_rd_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("min_wr_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("max_wr_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_wr_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("min_flush_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("max_flush_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_flush_latency_ns"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_rd_queue_depth"), },
                { "type", QLIT_QSTR("number"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("avg_wr_queue_depth"), },
                { "type", QLIT_QSTR("number"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("164"), },
        {}
    })),
    /* "165" = BlockLatencyHistogramInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("boundaries"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("bins"), },
                { "type", QLIT_QSTR("[int]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("165"), },
        {}
    })),
    /* "166" = BlockStatsSpecificFile */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("discard-nb-ok"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("discard-nb-failed"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("discard-bytes-ok"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("166"), },
        {}
    })),
    /* "167" = BlockStatsSpecificNvme */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("completion-errors"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("aligned-accesses"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("unaligned-accesses"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("167"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("49"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[49]"), },
        {}
    })),
    /* "168" = ImageInfoSpecific */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("239"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("168"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow2"), },
                { "type", QLIT_QSTR("240"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vmdk"), },
                { "type", QLIT_QSTR("241"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("242"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "169" = XDbgBlockGraphNodeType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("169"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("block-backend"),
            QLIT_QSTR("block-job"),
            QLIT_QSTR("block-driver"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("170"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[170]"), },
        {}
    })),
    /* "170" = BlockPermission */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("170"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("consistent-read"),
            QLIT_QSTR("write"),
            QLIT_QSTR("write-unchanged"),
            QLIT_QSTR("resize"),
            QLIT_QSTR("graph-mod"),
            {}
        })), },
        {}
    })),
    /* "171" = BlockdevRef */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("30"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("171"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("172"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[172]"), },
        {}
    })),
    /* "172" = BlkdebugInjectErrorOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("event"), },
                { "type", QLIT_QSTR("243"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iotype"), },
                { "type", QLIT_QSTR("244"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("errno"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("sector"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("once"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("immediately"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("172"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("173"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[173]"), },
        {}
    })),
    /* "173" = BlkdebugSetStateOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("event"), },
                { "type", QLIT_QSTR("243"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("new_state"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("173"), },
        {}
    })),
    /* "174" = OnOffAuto */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("174"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("auto"),
            QLIT_QSTR("on"),
            QLIT_QSTR("off"),
            {}
        })), },
        {}
    })),
    /* "175" = BlockdevAioOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("175"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("threads"),
            QLIT_QSTR("native"),
#if defined(CONFIG_LINUX_IO_URING)
            QLIT_QSTR("io_uring"),
#endif /* defined(CONFIG_LINUX_IO_URING) */
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("176"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[176]"), },
        {}
    })),
    /* "176" = SocketAddress */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("245"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("176"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("inet"), },
                { "type", QLIT_QSTR("188"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("unix"), },
                { "type", QLIT_QSTR("246"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("vsock"), },
                { "type", QLIT_QSTR("247"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("fd"), },
                { "type", QLIT_QSTR("248"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "177" = IscsiTransport */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("177"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("tcp"),
            QLIT_QSTR("iser"),
            {}
        })), },
        {}
    })),
    /* "178" = IscsiHeaderDigest */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("178"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("crc32c"),
            QLIT_QSTR("none"),
            QLIT_QSTR("crc32c-none"),
            QLIT_QSTR("none-crc32c"),
            {}
        })), },
        {}
    })),
    /* "179" = NFSServer */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("249"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("179"), },
        {}
    })),
    /* "180" = BlockdevRefOrNull */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("30"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("null"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("180"), },
        {}
    })),
    /* "181" = Qcow2OverlapChecks */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("250"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "type", QLIT_QSTR("251"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("alternate"), },
        { "name", QLIT_QSTR("181"), },
        {}
    })),
    /* "182" = BlockdevQcow2Encryption */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("252"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("182"), },
        { "tag", QLIT_QSTR("format"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("aes"), },
                { "type", QLIT_QSTR("253"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("254"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "183" = BlockdevQcowEncryption */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("255"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("183"), },
        { "tag", QLIT_QSTR("format"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("aes"), },
                { "type", QLIT_QSTR("253"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("171"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[171]"), },
        {}
    })),
    /* "184" = QuorumReadPattern */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("184"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("quorum"),
            QLIT_QSTR("fifo"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("185"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[185]"), },
        {}
    })),
    /* "185" = RbdAuthMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("185"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("cephx"),
            QLIT_QSTR("none"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("186"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[186]"), },
        {}
    })),
    /* "186" = InetSocketAddressBase */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("186"), },
        {}
    })),
    /* "187" = ReplicationMode */
#if defined(CONFIG_REPLICATION)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("187"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("primary"),
            QLIT_QSTR("secondary"),
            {}
        })), },
        {}
    })),
#endif /* defined(CONFIG_REPLICATION) */
    /* "188" = InetSocketAddress */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("host"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("numeric"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("to"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ipv4"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ipv6"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("keep-alive"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("188"), },
        {}
    })),
    /* "189" = SshHostKeyCheck */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("mode"), },
                { "type", QLIT_QSTR("256"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("189"), },
        { "tag", QLIT_QSTR("mode"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("hash"), },
                { "type", QLIT_QSTR("257"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("none"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("known_hosts"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "190" = BlockdevCreateOptionsFile */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("filename"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("258"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("nocow"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("extent-size-hint"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("190"), },
        {}
    })),
    /* "191" = BlockdevCreateOptionsGluster */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("117"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("258"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("191"), },
        {}
    })),
    /* "192" = BlockdevCreateOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cipher-alg"), },
                { "type", QLIT_QSTR("259"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cipher-mode"), },
                { "type", QLIT_QSTR("260"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-alg"), },
                { "type", QLIT_QSTR("261"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-hash-alg"), },
                { "type", QLIT_QSTR("262"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("hash-alg"), },
                { "type", QLIT_QSTR("262"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iter-time"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("258"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("192"), },
        {}
    })),
    /* "193" = BlockdevCreateOptionsNfs */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("123"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("193"), },
        {}
    })),
    /* "194" = BlockdevCreateOptionsParallels */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("194"), },
        {}
    })),
    /* "195" = BlockdevCreateOptionsQcow */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("263"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("195"), },
        {}
    })),
    /* "196" = BlockdevCreateOptionsQcow2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file-raw"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("extended-l2"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("version"), },
                { "type", QLIT_QSTR("264"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-fmt"), },
                { "type", QLIT_QSTR("106"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("263"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("258"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("lazy-refcounts"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("refcount-bits"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("compression-type"), },
                { "type", QLIT_QSTR("265"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("196"), },
        {}
    })),
    /* "197" = BlockdevCreateOptionsQed */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-fmt"), },
                { "type", QLIT_QSTR("106"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("table-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("197"), },
        {}
    })),
    /* "198" = BlockdevCreateOptionsRbd */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("131"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cluster-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("198"), },
        {}
    })),
    /* "199" = BlockdevCreateOptionsSheepdog */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("133"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("258"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("redundancy"), },
                { "type", QLIT_QSTR("266"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("object-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("199"), },
        {}
    })),
    /* "200" = BlockdevCreateOptionsSsh */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("location"), },
                { "type", QLIT_QSTR("134"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("200"), },
        {}
    })),
    /* "201" = BlockdevCreateOptionsVdi */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("preallocation"), },
                { "type", QLIT_QSTR("258"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("201"), },
        {}
    })),
    /* "202" = BlockdevCreateOptionsVhdx */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("log-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("block-size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("subformat"), },
                { "type", QLIT_QSTR("267"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("block-state-zero"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("202"), },
        {}
    })),
    /* "203" = BlockdevCreateOptionsVmdk */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("extents"), },
                { "type", QLIT_QSTR("[171]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("subformat"), },
                { "type", QLIT_QSTR("268"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("backing-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("adapter-type"), },
                { "type", QLIT_QSTR("269"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("hwversion"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("zeroed-grain"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("203"), },
        {}
    })),
    /* "204" = BlockdevCreateOptionsVpc */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("file"), },
                { "type", QLIT_QSTR("171"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("subformat"), },
                { "type", QLIT_QSTR("270"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("force-size"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("204"), },
        {}
    })),
    /* "205" = BlockdevAmendOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("271"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("new-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("old-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("keyslot"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iter-time"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("205"), },
        {}
    })),
    /* "206" = BlockdevAmendOptionsQcow2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("272"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("206"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("null"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("null"), },
        {}
    })),
    /* "207" = SocketAddressLegacyKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("207"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("inet"),
            QLIT_QSTR("unix"),
            QLIT_QSTR("vsock"),
            QLIT_QSTR("fd"),
            {}
        })), },
        {}
    })),
    /* "208" = q_obj_InetSocketAddress-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("188"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("208"), },
        {}
    })),
    /* "209" = q_obj_UnixSocketAddress-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("246"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("209"), },
        {}
    })),
    /* "210" = q_obj_VsockSocketAddress-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("247"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("210"), },
        {}
    })),
    /* "211" = q_obj_String-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("248"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("211"), },
        {}
    })),
    /* "212" = ChardevBackendKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("212"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("file"),
            QLIT_QSTR("serial"),
            QLIT_QSTR("parallel"),
            QLIT_QSTR("pipe"),
            QLIT_QSTR("socket"),
            QLIT_QSTR("udp"),
            QLIT_QSTR("pty"),
            QLIT_QSTR("null"),
            QLIT_QSTR("mux"),
            QLIT_QSTR("msmouse"),
            QLIT_QSTR("wctablet"),
            QLIT_QSTR("braille"),
            QLIT_QSTR("testdev"),
            QLIT_QSTR("stdio"),
            QLIT_QSTR("console"),
#if defined(CONFIG_SPICE)
            QLIT_QSTR("spicevmc"),
#endif /* defined(CONFIG_SPICE) */
#if defined(CONFIG_SPICE)
            QLIT_QSTR("spiceport"),
#endif /* defined(CONFIG_SPICE) */
            QLIT_QSTR("vc"),
            QLIT_QSTR("ringbuf"),
            QLIT_QSTR("memory"),
            {}
        })), },
        {}
    })),
    /* "213" = q_obj_ChardevFile-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("273"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("213"), },
        {}
    })),
    /* "214" = q_obj_ChardevHostdev-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("274"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("214"), },
        {}
    })),
    /* "215" = q_obj_ChardevSocket-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("275"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("215"), },
        {}
    })),
    /* "216" = q_obj_ChardevUdp-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("276"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("216"), },
        {}
    })),
    /* "217" = q_obj_ChardevCommon-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("277"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("217"), },
        {}
    })),
    /* "218" = q_obj_ChardevMux-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("278"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("218"), },
        {}
    })),
    /* "219" = q_obj_ChardevStdio-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("279"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("219"), },
        {}
    })),
    /* "220" = q_obj_ChardevSpiceChannel-wrapper */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("280"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("220"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "221" = q_obj_ChardevSpicePort-wrapper */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("281"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("221"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "222" = q_obj_ChardevVC-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("282"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("222"), },
        {}
    })),
    /* "223" = q_obj_ChardevRingbuf-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("283"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("223"), },
        {}
    })),
    /* "224" = JSONType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("224"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("string"),
            QLIT_QSTR("number"),
            QLIT_QSTR("int"),
            QLIT_QSTR("boolean"),
            QLIT_QSTR("null"),
            QLIT_QSTR("object"),
            QLIT_QSTR("array"),
            QLIT_QSTR("value"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("225"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[225]"), },
        {}
    })),
    /* "225" = SchemaInfoObjectMember */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("default"), },
                { "type", QLIT_QSTR("any"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("features"), },
                { "type", QLIT_QSTR("[str]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("225"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("226"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[226]"), },
        {}
    })),
    /* "226" = SchemaInfoObjectVariant */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("case"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("226"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("227"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[227]"), },
        {}
    })),
    /* "227" = SchemaInfoAlternateMember */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("227"), },
        {}
    })),
    /* "228" = TransactionActionKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("228"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("abort"),
            QLIT_QSTR("block-dirty-bitmap-add"),
            QLIT_QSTR("block-dirty-bitmap-remove"),
            QLIT_QSTR("block-dirty-bitmap-clear"),
            QLIT_QSTR("block-dirty-bitmap-enable"),
            QLIT_QSTR("block-dirty-bitmap-disable"),
            QLIT_QSTR("block-dirty-bitmap-merge"),
            QLIT_QSTR("blockdev-backup"),
            QLIT_QSTR("blockdev-snapshot"),
            QLIT_QSTR("blockdev-snapshot-internal-sync"),
            QLIT_QSTR("blockdev-snapshot-sync"),
            QLIT_QSTR("drive-backup"),
            {}
        })), },
        {}
    })),
    /* "229" = q_obj_Abort-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("284"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("229"), },
        {}
    })),
    /* "230" = q_obj_BlockDirtyBitmapAdd-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("17"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("230"), },
        {}
    })),
    /* "231" = q_obj_BlockDirtyBitmap-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("18"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("231"), },
        {}
    })),
    /* "232" = q_obj_BlockDirtyBitmapMerge-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("19"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("232"), },
        {}
    })),
    /* "233" = q_obj_BlockdevBackup-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("12"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("233"), },
        {}
    })),
    /* "234" = q_obj_BlockdevSnapshot-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("8"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("234"), },
        {}
    })),
    /* "235" = q_obj_BlockdevSnapshotInternal-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("47"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("235"), },
        {}
    })),
    /* "236" = q_obj_BlockdevSnapshotSync-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("7"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("236"), },
        {}
    })),
    /* "237" = q_obj_DriveBackup-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("11"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("237"), },
        {}
    })),
    /* "238" = ActionCompletionMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("238"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("individual"),
            QLIT_QSTR("grouped"),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "json-type", QLIT_QSTR("number"), },
        { "meta-type", QLIT_QSTR("builtin"), },
        { "name", QLIT_QSTR("number"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("int"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[int]"), },
        {}
    })),
    /* "239" = ImageInfoSpecificKind */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("239"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("qcow2"),
            QLIT_QSTR("vmdk"),
            QLIT_QSTR("luks"),
            {}
        })), },
        {}
    })),
    /* "240" = q_obj_ImageInfoSpecificQCow2-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("285"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("240"), },
        {}
    })),
    /* "241" = q_obj_ImageInfoSpecificVmdk-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("286"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("241"), },
        {}
    })),
    /* "242" = q_obj_QCryptoBlockInfoLUKS-wrapper */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data"), },
                { "type", QLIT_QSTR("287"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("242"), },
        {}
    })),
    /* "243" = BlkdebugEvent */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("243"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("l1_update"),
            QLIT_QSTR("l1_grow_alloc_table"),
            QLIT_QSTR("l1_grow_write_table"),
            QLIT_QSTR("l1_grow_activate_table"),
            QLIT_QSTR("l2_load"),
            QLIT_QSTR("l2_update"),
            QLIT_QSTR("l2_update_compressed"),
            QLIT_QSTR("l2_alloc_cow_read"),
            QLIT_QSTR("l2_alloc_write"),
            QLIT_QSTR("read_aio"),
            QLIT_QSTR("read_backing_aio"),
            QLIT_QSTR("read_compressed"),
            QLIT_QSTR("write_aio"),
            QLIT_QSTR("write_compressed"),
            QLIT_QSTR("vmstate_load"),
            QLIT_QSTR("vmstate_save"),
            QLIT_QSTR("cow_read"),
            QLIT_QSTR("cow_write"),
            QLIT_QSTR("reftable_load"),
            QLIT_QSTR("reftable_grow"),
            QLIT_QSTR("reftable_update"),
            QLIT_QSTR("refblock_load"),
            QLIT_QSTR("refblock_update"),
            QLIT_QSTR("refblock_update_part"),
            QLIT_QSTR("refblock_alloc"),
            QLIT_QSTR("refblock_alloc_hookup"),
            QLIT_QSTR("refblock_alloc_write"),
            QLIT_QSTR("refblock_alloc_write_blocks"),
            QLIT_QSTR("refblock_alloc_write_table"),
            QLIT_QSTR("refblock_alloc_switch_table"),
            QLIT_QSTR("cluster_alloc"),
            QLIT_QSTR("cluster_alloc_bytes"),
            QLIT_QSTR("cluster_free"),
            QLIT_QSTR("flush_to_os"),
            QLIT_QSTR("flush_to_disk"),
            QLIT_QSTR("pwritev_rmw_head"),
            QLIT_QSTR("pwritev_rmw_after_head"),
            QLIT_QSTR("pwritev_rmw_tail"),
            QLIT_QSTR("pwritev_rmw_after_tail"),
            QLIT_QSTR("pwritev"),
            QLIT_QSTR("pwritev_zero"),
            QLIT_QSTR("pwritev_done"),
            QLIT_QSTR("empty_image_prepare"),
            QLIT_QSTR("l1_shrink_write_table"),
            QLIT_QSTR("l1_shrink_free_l2_clusters"),
            QLIT_QSTR("cor_write"),
            QLIT_QSTR("cluster_alloc_space"),
            QLIT_QSTR("none"),
            {}
        })), },
        {}
    })),
    /* "244" = BlkdebugIOType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("244"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("read"),
            QLIT_QSTR("write"),
            QLIT_QSTR("write-zeroes"),
            QLIT_QSTR("discard"),
            QLIT_QSTR("flush"),
            QLIT_QSTR("block-status"),
            {}
        })), },
        {}
    })),
    /* "245" = SocketAddressType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("245"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("inet"),
            QLIT_QSTR("unix"),
            QLIT_QSTR("vsock"),
            QLIT_QSTR("fd"),
            {}
        })), },
        {}
    })),
    /* "246" = UnixSocketAddress */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("path"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
#if defined(CONFIG_LINUX)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("abstract"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
#endif /* defined(CONFIG_LINUX) */
#if defined(CONFIG_LINUX)
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tight"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
#endif /* defined(CONFIG_LINUX) */
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("246"), },
        {}
    })),
    /* "247" = VsockSocketAddress */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cid"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("port"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("247"), },
        {}
    })),
    /* "248" = String */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("str"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("248"), },
        {}
    })),
    /* "249" = NFSTransport */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("249"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("inet"),
            {}
        })), },
        {}
    })),
    /* "250" = Qcow2OverlapCheckFlags */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("template"), },
                { "type", QLIT_QSTR("251"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("main-header"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("active-l1"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("active-l2"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("refcount-table"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("refcount-block"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("snapshot-table"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inactive-l1"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("inactive-l2"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmap-directory"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("250"), },
        {}
    })),
    /* "251" = Qcow2OverlapCheckMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("251"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("constant"),
            QLIT_QSTR("cached"),
            QLIT_QSTR("all"),
            {}
        })), },
        {}
    })),
    /* "252" = BlockdevQcow2EncryptionFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("252"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("aes"),
            QLIT_QSTR("luks"),
            {}
        })), },
        {}
    })),
    /* "253" = QCryptoBlockOptionsQCow */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("253"), },
        {}
    })),
    /* "254" = QCryptoBlockOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("254"), },
        {}
    })),
    /* "255" = BlockdevQcowEncryptionFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("255"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("aes"),
            {}
        })), },
        {}
    })),
    /* "256" = SshHostKeyCheckMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("256"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("none"),
            QLIT_QSTR("hash"),
            QLIT_QSTR("known_hosts"),
            {}
        })), },
        {}
    })),
    /* "257" = SshHostKeyHash */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("288"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("hash"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("257"), },
        {}
    })),
    /* "258" = PreallocMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("258"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("off"),
            QLIT_QSTR("metadata"),
            QLIT_QSTR("falloc"),
            QLIT_QSTR("full"),
            {}
        })), },
        {}
    })),
    /* "259" = QCryptoCipherAlgorithm */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("259"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("aes-128"),
            QLIT_QSTR("aes-192"),
            QLIT_QSTR("aes-256"),
            QLIT_QSTR("des-rfb"),
            QLIT_QSTR("3des"),
            QLIT_QSTR("cast5-128"),
            QLIT_QSTR("serpent-128"),
            QLIT_QSTR("serpent-192"),
            QLIT_QSTR("serpent-256"),
            QLIT_QSTR("twofish-128"),
            QLIT_QSTR("twofish-192"),
            QLIT_QSTR("twofish-256"),
            {}
        })), },
        {}
    })),
    /* "260" = QCryptoCipherMode */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("260"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ecb"),
            QLIT_QSTR("cbc"),
            QLIT_QSTR("xts"),
            QLIT_QSTR("ctr"),
            {}
        })), },
        {}
    })),
    /* "261" = QCryptoIVGenAlgorithm */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("261"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("plain"),
            QLIT_QSTR("plain64"),
            QLIT_QSTR("essiv"),
            {}
        })), },
        {}
    })),
    /* "262" = QCryptoHashAlgorithm */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("262"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("md5"),
            QLIT_QSTR("sha1"),
            QLIT_QSTR("sha224"),
            QLIT_QSTR("sha256"),
            QLIT_QSTR("sha384"),
            QLIT_QSTR("sha512"),
            QLIT_QSTR("ripemd160"),
            {}
        })), },
        {}
    })),
    /* "263" = QCryptoBlockCreateOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("289"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("263"), },
        { "tag", QLIT_QSTR("format"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow"), },
                { "type", QLIT_QSTR("253"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("290"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "264" = BlockdevQcow2Version */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("264"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("v2"),
            QLIT_QSTR("v3"),
            {}
        })), },
        {}
    })),
    /* "265" = Qcow2CompressionType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("265"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("zlib"),
#if defined(CONFIG_ZSTD)
            QLIT_QSTR("zstd"),
#endif /* defined(CONFIG_ZSTD) */
            {}
        })), },
        {}
    })),
    /* "266" = SheepdogRedundancy */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("291"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("266"), },
        { "tag", QLIT_QSTR("type"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("full"), },
                { "type", QLIT_QSTR("292"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("erasure-coded"), },
                { "type", QLIT_QSTR("293"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "267" = BlockdevVhdxSubformat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("267"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("dynamic"),
            QLIT_QSTR("fixed"),
            {}
        })), },
        {}
    })),
    /* "268" = BlockdevVmdkSubformat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("268"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("monolithicSparse"),
            QLIT_QSTR("monolithicFlat"),
            QLIT_QSTR("twoGbMaxExtentSparse"),
            QLIT_QSTR("twoGbMaxExtentFlat"),
            QLIT_QSTR("streamOptimized"),
            {}
        })), },
        {}
    })),
    /* "269" = BlockdevVmdkAdapterType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("269"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("ide"),
            QLIT_QSTR("buslogic"),
            QLIT_QSTR("lsilogic"),
            QLIT_QSTR("legacyESX"),
            {}
        })), },
        {}
    })),
    /* "270" = BlockdevVpcSubformat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("270"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("dynamic"),
            QLIT_QSTR("fixed"),
            {}
        })), },
        {}
    })),
    /* "271" = QCryptoBlockLUKSKeyslotState */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("271"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("active"),
            QLIT_QSTR("inactive"),
            {}
        })), },
        {}
    })),
    /* "272" = QCryptoBlockAmendOptions */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("289"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("272"), },
        { "tag", QLIT_QSTR("format"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("294"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("qcow"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    /* "273" = ChardevFile */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("in"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("out"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("append"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("273"), },
        {}
    })),
    /* "274" = ChardevHostdev */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("device"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("274"), },
        {}
    })),
    /* "275" = ChardevSocket */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("addr"), },
                { "type", QLIT_QSTR("144"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-creds"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tls-authz"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("server"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("wait"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("nodelay"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("telnet"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("tn3270"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("websocket"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("reconnect"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("275"), },
        {}
    })),
    /* "276" = ChardevUdp */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("remote"), },
                { "type", QLIT_QSTR("144"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("local"), },
                { "type", QLIT_QSTR("144"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("276"), },
        {}
    })),
    /* "277" = ChardevCommon */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("277"), },
        {}
    })),
    /* "278" = ChardevMux */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("chardev"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("278"), },
        {}
    })),
    /* "279" = ChardevStdio */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("signal"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("279"), },
        {}
    })),
    /* "280" = ChardevSpiceChannel */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("280"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "281" = ChardevSpicePort */
#if defined(CONFIG_SPICE)
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("fqdn"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("281"), },
        {}
    })),
#endif /* defined(CONFIG_SPICE) */
    /* "282" = ChardevVC */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("width"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("height"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cols"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("rows"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("282"), },
        {}
    })),
    /* "283" = ChardevRingbuf */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logfile"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("logappend"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("size"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("283"), },
        {}
    })),
    /* "284" = Abort */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("284"), },
        {}
    })),
    /* "285" = ImageInfoSpecificQCow2 */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("compat"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("data-file-raw"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("extended-l2"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("lazy-refcounts"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("corrupt"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("refcount-bits"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("encrypt"), },
                { "type", QLIT_QSTR("295"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("bitmaps"), },
                { "type", QLIT_QSTR("[296]"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("compression-type"), },
                { "type", QLIT_QSTR("265"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("285"), },
        {}
    })),
    /* "286" = ImageInfoSpecificVmdk */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("create-type"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cid"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("parent-cid"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("extents"), },
                { "type", QLIT_QSTR("[100]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("286"), },
        {}
    })),
    /* "287" = QCryptoBlockInfoLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cipher-alg"), },
                { "type", QLIT_QSTR("259"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("cipher-mode"), },
                { "type", QLIT_QSTR("260"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("ivgen-alg"), },
                { "type", QLIT_QSTR("261"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-hash-alg"), },
                { "type", QLIT_QSTR("262"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("hash-alg"), },
                { "type", QLIT_QSTR("262"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("payload-offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("master-key-iters"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("uuid"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("slots"), },
                { "type", QLIT_QSTR("[297]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("287"), },
        {}
    })),
    /* "288" = SshHostKeyCheckHashType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("288"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("md5"),
            QLIT_QSTR("sha1"),
            {}
        })), },
        {}
    })),
    /* "289" = QCryptoBlockFormat */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("289"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("qcow"),
            QLIT_QSTR("luks"),
            {}
        })), },
        {}
    })),
    /* "290" = QCryptoBlockCreateOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("key-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cipher-alg"), },
                { "type", QLIT_QSTR("259"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("cipher-mode"), },
                { "type", QLIT_QSTR("260"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-alg"), },
                { "type", QLIT_QSTR("261"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("ivgen-hash-alg"), },
                { "type", QLIT_QSTR("262"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("hash-alg"), },
                { "type", QLIT_QSTR("262"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iter-time"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("290"), },
        {}
    })),
    /* "291" = SheepdogRedundancyType */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("291"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("full"),
            QLIT_QSTR("erasure-coded"),
            {}
        })), },
        {}
    })),
    /* "292" = SheepdogRedundancyFull */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("copies"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("292"), },
        {}
    })),
    /* "293" = SheepdogRedundancyErasureCoded */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("data-strips"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("parity-strips"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("293"), },
        {}
    })),
    /* "294" = QCryptoBlockAmendOptionsLUKS */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("state"), },
                { "type", QLIT_QSTR("271"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("new-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("old-secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("keyslot"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iter-time"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("secret"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("294"), },
        {}
    })),
    /* "295" = ImageInfoSpecificQCow2Encryption */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("format"), },
                { "type", QLIT_QSTR("252"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("295"), },
        { "tag", QLIT_QSTR("format"), },
        { "variants", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("luks"), },
                { "type", QLIT_QSTR("287"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "case", QLIT_QSTR("aes"), },
                { "type", QLIT_QSTR("0"), },
                {}
            })),
            {}
        })), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("296"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[296]"), },
        {}
    })),
    /* "296" = Qcow2BitmapInfo */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("name"), },
                { "type", QLIT_QSTR("str"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("granularity"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("flags"), },
                { "type", QLIT_QSTR("[298]"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("296"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("100"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[100]"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("297"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[297]"), },
        {}
    })),
    /* "297" = QCryptoBlockInfoLUKSSlot */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "members", QLIT_QLIST(((QLitObject[]) {
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("active"), },
                { "type", QLIT_QSTR("bool"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("iters"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "default", QLIT_QNULL, },
                { "name", QLIT_QSTR("stripes"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            QLIT_QDICT(((QLitDictEntry[]) {
                { "name", QLIT_QSTR("key-offset"), },
                { "type", QLIT_QSTR("int"), },
                {}
            })),
            {}
        })), },
        { "meta-type", QLIT_QSTR("object"), },
        { "name", QLIT_QSTR("297"), },
        {}
    })),
    QLIT_QDICT(((QLitDictEntry[]) {
        { "element-type", QLIT_QSTR("298"), },
        { "meta-type", QLIT_QSTR("array"), },
        { "name", QLIT_QSTR("[298]"), },
        {}
    })),
    /* "298" = Qcow2BitmapInfoFlags */
    QLIT_QDICT(((QLitDictEntry[]) {
        { "meta-type", QLIT_QSTR("enum"), },
        { "name", QLIT_QSTR("298"), },
        { "values", QLIT_QLIST(((QLitObject[]) {
            QLIT_QSTR("in-use"),
            QLIT_QSTR("auto"),
            {}
        })), },
        {}
    })),
    {}
}));

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_qapi_introspect_c;
