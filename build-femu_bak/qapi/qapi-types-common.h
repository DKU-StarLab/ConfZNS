/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_TYPES_COMMON_H
#define QAPI_TYPES_COMMON_H

#include "qapi/qapi-builtin-types.h"

typedef enum IoOperationType {
    IO_OPERATION_TYPE_READ,
    IO_OPERATION_TYPE_WRITE,
    IO_OPERATION_TYPE__MAX,
} IoOperationType;

#define IoOperationType_str(val) \
    qapi_enum_lookup(&IoOperationType_lookup, (val))

extern const QEnumLookup IoOperationType_lookup;

typedef enum OnOffAuto {
    ON_OFF_AUTO_AUTO,
    ON_OFF_AUTO_ON,
    ON_OFF_AUTO_OFF,
    ON_OFF_AUTO__MAX,
} OnOffAuto;

#define OnOffAuto_str(val) \
    qapi_enum_lookup(&OnOffAuto_lookup, (val))

extern const QEnumLookup OnOffAuto_lookup;

typedef enum OnOffSplit {
    ON_OFF_SPLIT_ON,
    ON_OFF_SPLIT_OFF,
    ON_OFF_SPLIT_SPLIT,
    ON_OFF_SPLIT__MAX,
} OnOffSplit;

#define OnOffSplit_str(val) \
    qapi_enum_lookup(&OnOffSplit_lookup, (val))

extern const QEnumLookup OnOffSplit_lookup;

typedef struct String String;

typedef struct StrOrNull StrOrNull;

typedef enum OffAutoPCIBAR {
    OFF_AUTOPCIBAR_OFF,
    OFF_AUTOPCIBAR_AUTO,
    OFF_AUTOPCIBAR_BAR0,
    OFF_AUTOPCIBAR_BAR1,
    OFF_AUTOPCIBAR_BAR2,
    OFF_AUTOPCIBAR_BAR3,
    OFF_AUTOPCIBAR_BAR4,
    OFF_AUTOPCIBAR_BAR5,
    OFF_AUTOPCIBAR__MAX,
} OffAutoPCIBAR;

#define OffAutoPCIBAR_str(val) \
    qapi_enum_lookup(&OffAutoPCIBAR_lookup, (val))

extern const QEnumLookup OffAutoPCIBAR_lookup;

typedef enum PCIELinkSpeed {
    PCIE_LINK_SPEED_2_5,
    PCIE_LINK_SPEED_5,
    PCIE_LINK_SPEED_8,
    PCIE_LINK_SPEED_16,
    PCIE_LINK_SPEED__MAX,
} PCIELinkSpeed;

#define PCIELinkSpeed_str(val) \
    qapi_enum_lookup(&PCIELinkSpeed_lookup, (val))

extern const QEnumLookup PCIELinkSpeed_lookup;

typedef enum PCIELinkWidth {
    PCIE_LINK_WIDTH_1,
    PCIE_LINK_WIDTH_2,
    PCIE_LINK_WIDTH_4,
    PCIE_LINK_WIDTH_8,
    PCIE_LINK_WIDTH_12,
    PCIE_LINK_WIDTH_16,
    PCIE_LINK_WIDTH_32,
    PCIE_LINK_WIDTH__MAX,
} PCIELinkWidth;

#define PCIELinkWidth_str(val) \
    qapi_enum_lookup(&PCIELinkWidth_lookup, (val))

extern const QEnumLookup PCIELinkWidth_lookup;

typedef struct StringList StringList;

struct String {
    char *str;
};

void qapi_free_String(String *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(String, qapi_free_String)

struct StrOrNull {
    QType type;
    union { /* union tag is @type */
        char *s;
        QNull *n;
    } u;
};

void qapi_free_StrOrNull(StrOrNull *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StrOrNull, qapi_free_StrOrNull)

struct StringList {
    StringList *next;
    String *value;
};

void qapi_free_StringList(StringList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(StringList, qapi_free_StringList)

#endif /* QAPI_TYPES_COMMON_H */
