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

#ifndef TEST_QAPI_TYPES_H
#define TEST_QAPI_TYPES_H

#include "qapi/qapi-builtin-types.h"

typedef struct TestStruct TestStruct;

typedef struct NestedEnumsOne NestedEnumsOne;

typedef enum MyEnum {
    MY_ENUM__MAX,
} MyEnum;

#define MyEnum_str(val) \
    qapi_enum_lookup(&MyEnum_lookup, (val))

extern const QEnumLookup MyEnum_lookup;

typedef struct Empty1 Empty1;

typedef struct Empty2 Empty2;

typedef struct q_obj_Union_base q_obj_Union_base;

typedef struct Union Union;

typedef enum QEnumTwo {
    QENUM_TWO_VALUE1,
    QENUM_TWO_VALUE2,
    QENUM_TWO__MAX,
} QEnumTwo;

#define QEnumTwo_str(val) \
    qapi_enum_lookup(&QEnumTwo_lookup, (val))

extern const QEnumLookup QEnumTwo_lookup;

typedef struct UserDefOne UserDefOne;

typedef enum EnumOne {
    ENUM_ONE_VALUE1,
    ENUM_ONE_VALUE2,
    ENUM_ONE_VALUE3,
    ENUM_ONE_VALUE4,
    ENUM_ONE__MAX,
} EnumOne;

#define EnumOne_str(val) \
    qapi_enum_lookup(&EnumOne_lookup, (val))

extern const QEnumLookup EnumOne_lookup;

typedef struct UserDefZero UserDefZero;

typedef struct UserDefTwoDictDict UserDefTwoDictDict;

typedef struct UserDefTwoDict UserDefTwoDict;

typedef struct UserDefTwo UserDefTwo;

typedef struct UserDefThree UserDefThree;

typedef struct UserDefOneList UserDefOneList;

typedef struct UserDefTwoList UserDefTwoList;

typedef struct TestStructList TestStructList;

typedef struct ForceArrays ForceArrays;

typedef struct UserDefA UserDefA;

typedef struct UserDefB UserDefB;

typedef struct UserDefFlatUnion UserDefFlatUnion;

typedef struct UserDefUnionBase UserDefUnionBase;

typedef struct q_obj_UserDefFlatUnion2_base q_obj_UserDefFlatUnion2_base;

typedef struct UserDefFlatUnion2 UserDefFlatUnion2;

typedef struct WrapAlternate WrapAlternate;

typedef struct UserDefAlternate UserDefAlternate;

typedef struct UserDefC UserDefC;

typedef struct AltEnumBool AltEnumBool;

typedef struct AltEnumNum AltEnumNum;

typedef struct AltNumEnum AltNumEnum;

typedef struct AltEnumInt AltEnumInt;

typedef struct AltStrObj AltStrObj;

typedef struct q_obj_intList_wrapper q_obj_intList_wrapper;

typedef struct q_obj_int8List_wrapper q_obj_int8List_wrapper;

typedef struct q_obj_int16List_wrapper q_obj_int16List_wrapper;

typedef struct q_obj_int32List_wrapper q_obj_int32List_wrapper;

typedef struct q_obj_int64List_wrapper q_obj_int64List_wrapper;

typedef struct q_obj_uint8List_wrapper q_obj_uint8List_wrapper;

typedef struct q_obj_uint16List_wrapper q_obj_uint16List_wrapper;

typedef struct q_obj_uint32List_wrapper q_obj_uint32List_wrapper;

typedef struct q_obj_uint64List_wrapper q_obj_uint64List_wrapper;

typedef struct q_obj_numberList_wrapper q_obj_numberList_wrapper;

typedef struct q_obj_boolList_wrapper q_obj_boolList_wrapper;

typedef struct q_obj_strList_wrapper q_obj_strList_wrapper;

typedef struct q_obj_sizeList_wrapper q_obj_sizeList_wrapper;

typedef struct q_obj_anyList_wrapper q_obj_anyList_wrapper;

typedef struct q_obj_StatusList_wrapper q_obj_StatusList_wrapper;

typedef enum UserDefListUnionKind {
    USER_DEF_LIST_UNION_KIND_INTEGER,
    USER_DEF_LIST_UNION_KIND_S8,
    USER_DEF_LIST_UNION_KIND_S16,
    USER_DEF_LIST_UNION_KIND_S32,
    USER_DEF_LIST_UNION_KIND_S64,
    USER_DEF_LIST_UNION_KIND_U8,
    USER_DEF_LIST_UNION_KIND_U16,
    USER_DEF_LIST_UNION_KIND_U32,
    USER_DEF_LIST_UNION_KIND_U64,
    USER_DEF_LIST_UNION_KIND_NUMBER,
    USER_DEF_LIST_UNION_KIND_BOOLEAN,
    USER_DEF_LIST_UNION_KIND_STRING,
    USER_DEF_LIST_UNION_KIND_SIZES,
    USER_DEF_LIST_UNION_KIND_ANY,
    USER_DEF_LIST_UNION_KIND_USER,
    USER_DEF_LIST_UNION_KIND__MAX,
} UserDefListUnionKind;

#define UserDefListUnionKind_str(val) \
    qapi_enum_lookup(&UserDefListUnionKind_lookup, (val))

extern const QEnumLookup UserDefListUnionKind_lookup;

typedef struct UserDefListUnion UserDefListUnion;
#include "include/test-qapi-types-sub-module.h"

typedef struct q_obj_user_def_cmd1_arg q_obj_user_def_cmd1_arg;

typedef struct q_obj_user_def_cmd2_arg q_obj_user_def_cmd2_arg;

typedef struct q_obj_guest_get_time_arg q_obj_guest_get_time_arg;

typedef struct q_obj_guest_sync_arg q_obj_guest_sync_arg;

typedef struct UserDefOptions UserDefOptions;

typedef struct EventStructOne EventStructOne;

typedef struct q_obj_EVENT_C_arg q_obj_EVENT_C_arg;

typedef struct q_obj_EVENT_D_arg q_obj_EVENT_D_arg;

typedef enum __org_qemu_x_Enum {
    ORG_QEMU_X_ENUM___ORG_QEMU_X_VALUE,
    ORG_QEMU_X_ENUM__MAX,
} __org_qemu_x_Enum;

#define __org_qemu_x_Enum_str(val) \
    qapi_enum_lookup(&__org_qemu_x_Enum_lookup, (val))

extern const QEnumLookup __org_qemu_x_Enum_lookup;

typedef struct __org_qemu_x_Base __org_qemu_x_Base;

typedef struct __org_qemu_x_Struct __org_qemu_x_Struct;

typedef struct q_obj_str_wrapper q_obj_str_wrapper;

typedef enum __org_qemu_x_Union1Kind {
    ORG_QEMU_X_UNION1_KIND___ORG_QEMU_X_BRANCH,
    ORG_QEMU_X_UNION1_KIND__MAX,
} __org_qemu_x_Union1Kind;

#define __org_qemu_x_Union1Kind_str(val) \
    qapi_enum_lookup(&__org_qemu_x_Union1Kind_lookup, (val))

extern const QEnumLookup __org_qemu_x_Union1Kind_lookup;

typedef struct __org_qemu_x_Union1 __org_qemu_x_Union1;

typedef struct __org_qemu_x_Alt1 __org_qemu_x_Alt1;

typedef struct __org_qemu_x_Union1List __org_qemu_x_Union1List;

typedef struct __org_qemu_x_Struct2 __org_qemu_x_Struct2;

typedef struct __org_qemu_x_Union2 __org_qemu_x_Union2;

typedef struct __org_qemu_x_Alt __org_qemu_x_Alt;

typedef struct __org_qemu_x_EnumList __org_qemu_x_EnumList;

typedef struct __org_qemu_x_StructList __org_qemu_x_StructList;

typedef struct q_obj___org_qemu_x_command_arg q_obj___org_qemu_x_command_arg;

#if defined(TEST_IF_STRUCT)
typedef struct TestIfStruct TestIfStruct;
#endif /* defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ENUM)
typedef enum TestIfEnum {
    TEST_IF_ENUM_FOO,
#if defined(TEST_IF_ENUM_BAR)
    TEST_IF_ENUM_BAR,
#endif /* defined(TEST_IF_ENUM_BAR) */
    TEST_IF_ENUM__MAX,
} TestIfEnum;

#define TestIfEnum_str(val) \
    qapi_enum_lookup(&TestIfEnum_lookup, (val))

extern const QEnumLookup TestIfEnum_lookup;
#endif /* defined(TEST_IF_ENUM) */

typedef struct q_obj_TestStruct_wrapper q_obj_TestStruct_wrapper;

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
typedef enum TestIfUnionKind {
    TEST_IF_UNION_KIND_FOO,
#if defined(TEST_IF_UNION_BAR)
    TEST_IF_UNION_KIND_UNION_BAR,
#endif /* defined(TEST_IF_UNION_BAR) */
    TEST_IF_UNION_KIND__MAX,
} TestIfUnionKind;

#define TestIfUnionKind_str(val) \
    qapi_enum_lookup(&TestIfUnionKind_lookup, (val))

extern const QEnumLookup TestIfUnionKind_lookup;
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
typedef struct TestIfUnion TestIfUnion;
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_UNION)
typedef struct q_obj_TestIfUnionCmd_arg q_obj_TestIfUnionCmd_arg;
#endif /* defined(TEST_IF_UNION) */

#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
typedef struct TestIfAlternate TestIfAlternate;
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ALT)
typedef struct q_obj_TestIfAlternateCmd_arg q_obj_TestIfAlternateCmd_arg;
#endif /* defined(TEST_IF_ALT) */

#if defined(TEST_IF_CMD)
#if defined(TEST_IF_STRUCT)
typedef struct q_obj_TestIfCmd_arg q_obj_TestIfCmd_arg;
#endif /* defined(TEST_IF_STRUCT) */
#endif /* defined(TEST_IF_CMD) */

#if defined(TEST_IF_ENUM)
typedef struct TestIfEnumList TestIfEnumList;
#endif /* defined(TEST_IF_ENUM) */

#if defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT)
typedef struct q_obj_TestIfEvent_arg q_obj_TestIfEvent_arg;
#endif /* defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT) */

typedef struct FeatureStruct0 FeatureStruct0;

typedef struct FeatureStruct1 FeatureStruct1;

typedef struct FeatureStruct2 FeatureStruct2;

typedef struct FeatureStruct3 FeatureStruct3;

typedef struct FeatureStruct4 FeatureStruct4;

typedef struct CondFeatureStruct1 CondFeatureStruct1;

typedef struct CondFeatureStruct2 CondFeatureStruct2;

typedef struct CondFeatureStruct3 CondFeatureStruct3;

typedef enum FeatureEnum1 {
    FEATURE_ENUM1_EINS,
    FEATURE_ENUM1_ZWEI,
    FEATURE_ENUM1_DREI,
    FEATURE_ENUM1__MAX,
} FeatureEnum1;

#define FeatureEnum1_str(val) \
    qapi_enum_lookup(&FeatureEnum1_lookup, (val))

extern const QEnumLookup FeatureEnum1_lookup;

typedef struct q_obj_FeatureUnion1_base q_obj_FeatureUnion1_base;

typedef struct FeatureUnion1 FeatureUnion1;

typedef struct FeatureAlternate1 FeatureAlternate1;

typedef struct q_obj_test_features0_arg q_obj_test_features0_arg;

struct TestStruct {
    int64_t integer;
    bool boolean;
    char *string;
};

void qapi_free_TestStruct(TestStruct *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TestStruct, qapi_free_TestStruct)

struct NestedEnumsOne {
    EnumOne enum1;
    bool has_enum2;
    EnumOne enum2;
    EnumOne enum3;
    bool has_enum4;
    EnumOne enum4;
};

void qapi_free_NestedEnumsOne(NestedEnumsOne *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NestedEnumsOne, qapi_free_NestedEnumsOne)

struct Empty1 {
    char qapi_dummy_for_empty_struct;
};

void qapi_free_Empty1(Empty1 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Empty1, qapi_free_Empty1)

struct Empty2 {
    /* Members inherited from Empty1: */
    /* Own members: */
    char qapi_dummy_for_empty_struct;
};

static inline Empty1 *qapi_Empty2_base(const Empty2 *obj)
{
    return (Empty1 *)obj;
}

void qapi_free_Empty2(Empty2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Empty2, qapi_free_Empty2)

struct q_obj_Union_base {
    EnumOne type;
};

struct Union {
    EnumOne type;
    union { /* union tag is @type */
    } u;
};

void qapi_free_Union(Union *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Union, qapi_free_Union)

struct UserDefOne {
    /* Members inherited from UserDefZero: */
    int64_t integer;
    /* Own members: */
    char *string;
    bool has_enum1;
    EnumOne enum1;
};

static inline UserDefZero *qapi_UserDefOne_base(const UserDefOne *obj)
{
    return (UserDefZero *)obj;
}

void qapi_free_UserDefOne(UserDefOne *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefOne, qapi_free_UserDefOne)

struct UserDefZero {
    int64_t integer;
};

void qapi_free_UserDefZero(UserDefZero *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefZero, qapi_free_UserDefZero)

struct UserDefTwoDictDict {
    UserDefOne *userdef;
    char *string;
};

void qapi_free_UserDefTwoDictDict(UserDefTwoDictDict *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefTwoDictDict, qapi_free_UserDefTwoDictDict)

struct UserDefTwoDict {
    char *string1;
    UserDefTwoDictDict *dict2;
    bool has_dict3;
    UserDefTwoDictDict *dict3;
};

void qapi_free_UserDefTwoDict(UserDefTwoDict *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefTwoDict, qapi_free_UserDefTwoDict)

struct UserDefTwo {
    char *string0;
    UserDefTwoDict *dict1;
};

void qapi_free_UserDefTwo(UserDefTwo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefTwo, qapi_free_UserDefTwo)

struct UserDefThree {
    char *string0;
};

void qapi_free_UserDefThree(UserDefThree *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefThree, qapi_free_UserDefThree)

struct UserDefOneList {
    UserDefOneList *next;
    UserDefOne *value;
};

void qapi_free_UserDefOneList(UserDefOneList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefOneList, qapi_free_UserDefOneList)

struct UserDefTwoList {
    UserDefTwoList *next;
    UserDefTwo *value;
};

void qapi_free_UserDefTwoList(UserDefTwoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefTwoList, qapi_free_UserDefTwoList)

struct TestStructList {
    TestStructList *next;
    TestStruct *value;
};

void qapi_free_TestStructList(TestStructList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TestStructList, qapi_free_TestStructList)

struct ForceArrays {
    UserDefOneList *unused1;
    UserDefTwoList *unused2;
    TestStructList *unused3;
};

void qapi_free_ForceArrays(ForceArrays *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ForceArrays, qapi_free_ForceArrays)

struct UserDefA {
    bool boolean;
    bool has_a_b;
    int64_t a_b;
};

void qapi_free_UserDefA(UserDefA *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefA, qapi_free_UserDefA)

struct UserDefB {
    int64_t intb;
    bool has_a_b;
    bool a_b;
};

void qapi_free_UserDefB(UserDefB *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefB, qapi_free_UserDefB)

struct UserDefFlatUnion {
    /* Members inherited from UserDefUnionBase: */
    int64_t integer;
    char *string;
    EnumOne enum1;
    /* Own members: */
    union { /* union tag is @enum1 */
        UserDefA value1;
        UserDefB value2;
        UserDefB value3;
    } u;
};

static inline UserDefUnionBase *qapi_UserDefFlatUnion_base(const UserDefFlatUnion *obj)
{
    return (UserDefUnionBase *)obj;
}

void qapi_free_UserDefFlatUnion(UserDefFlatUnion *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefFlatUnion, qapi_free_UserDefFlatUnion)

struct UserDefUnionBase {
    /* Members inherited from UserDefZero: */
    int64_t integer;
    /* Own members: */
    char *string;
    EnumOne enum1;
};

static inline UserDefZero *qapi_UserDefUnionBase_base(const UserDefUnionBase *obj)
{
    return (UserDefZero *)obj;
}

void qapi_free_UserDefUnionBase(UserDefUnionBase *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefUnionBase, qapi_free_UserDefUnionBase)

struct q_obj_UserDefFlatUnion2_base {
    bool has_integer;
    int64_t integer;
    char *string;
    QEnumTwo enum1;
};

struct UserDefC {
    char *string1;
    char *string2;
};

struct UserDefFlatUnion2 {
    bool has_integer;
    int64_t integer;
    char *string;
    QEnumTwo enum1;
    union { /* union tag is @enum1 */
        UserDefC value1;
        UserDefB value2;
    } u;
};

void qapi_free_UserDefFlatUnion2(UserDefFlatUnion2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefFlatUnion2, qapi_free_UserDefFlatUnion2)

struct WrapAlternate {
    UserDefAlternate *alt;
};

void qapi_free_WrapAlternate(WrapAlternate *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(WrapAlternate, qapi_free_WrapAlternate)

struct UserDefAlternate {
    QType type;
    union { /* union tag is @type */
        UserDefFlatUnion udfu;
        EnumOne e;
        int64_t i;
        QNull *n;
    } u;
};

void qapi_free_UserDefAlternate(UserDefAlternate *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefAlternate, qapi_free_UserDefAlternate)

void qapi_free_UserDefC(UserDefC *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefC, qapi_free_UserDefC)

struct AltEnumBool {
    QType type;
    union { /* union tag is @type */
        EnumOne e;
        bool b;
    } u;
};

void qapi_free_AltEnumBool(AltEnumBool *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AltEnumBool, qapi_free_AltEnumBool)

struct AltEnumNum {
    QType type;
    union { /* union tag is @type */
        EnumOne e;
        double n;
    } u;
};

void qapi_free_AltEnumNum(AltEnumNum *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AltEnumNum, qapi_free_AltEnumNum)

struct AltNumEnum {
    QType type;
    union { /* union tag is @type */
        double n;
        EnumOne e;
    } u;
};

void qapi_free_AltNumEnum(AltNumEnum *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AltNumEnum, qapi_free_AltNumEnum)

struct AltEnumInt {
    QType type;
    union { /* union tag is @type */
        EnumOne e;
        int64_t i;
    } u;
};

void qapi_free_AltEnumInt(AltEnumInt *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AltEnumInt, qapi_free_AltEnumInt)

struct AltStrObj {
    QType type;
    union { /* union tag is @type */
        char *s;
        TestStruct o;
    } u;
};

void qapi_free_AltStrObj(AltStrObj *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AltStrObj, qapi_free_AltStrObj)

struct q_obj_intList_wrapper {
    intList *data;
};

struct q_obj_int8List_wrapper {
    int8List *data;
};

struct q_obj_int16List_wrapper {
    int16List *data;
};

struct q_obj_int32List_wrapper {
    int32List *data;
};

struct q_obj_int64List_wrapper {
    int64List *data;
};

struct q_obj_uint8List_wrapper {
    uint8List *data;
};

struct q_obj_uint16List_wrapper {
    uint16List *data;
};

struct q_obj_uint32List_wrapper {
    uint32List *data;
};

struct q_obj_uint64List_wrapper {
    uint64List *data;
};

struct q_obj_numberList_wrapper {
    numberList *data;
};

struct q_obj_boolList_wrapper {
    boolList *data;
};

struct q_obj_strList_wrapper {
    strList *data;
};

struct q_obj_sizeList_wrapper {
    sizeList *data;
};

struct q_obj_anyList_wrapper {
    anyList *data;
};

struct q_obj_StatusList_wrapper {
    StatusList *data;
};

struct UserDefListUnion {
    UserDefListUnionKind type;
    union { /* union tag is @type */
        q_obj_intList_wrapper integer;
        q_obj_int8List_wrapper s8;
        q_obj_int16List_wrapper s16;
        q_obj_int32List_wrapper s32;
        q_obj_int64List_wrapper s64;
        q_obj_uint8List_wrapper u8;
        q_obj_uint16List_wrapper u16;
        q_obj_uint32List_wrapper u32;
        q_obj_uint64List_wrapper u64;
        q_obj_numberList_wrapper number;
        q_obj_boolList_wrapper boolean;
        q_obj_strList_wrapper string;
        q_obj_sizeList_wrapper sizes;
        q_obj_anyList_wrapper any;
        q_obj_StatusList_wrapper user;
    } u;
};

void qapi_free_UserDefListUnion(UserDefListUnion *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefListUnion, qapi_free_UserDefListUnion)

struct q_obj_user_def_cmd1_arg {
    UserDefOne *ud1a;
};

struct q_obj_user_def_cmd2_arg {
    UserDefOne *ud1a;
    bool has_ud1b;
    UserDefOne *ud1b;
};

struct q_obj_guest_get_time_arg {
    int64_t a;
    bool has_b;
    int64_t b;
};

struct q_obj_guest_sync_arg {
    QObject *arg;
};

struct UserDefOptions {
    bool has_i64;
    intList *i64;
    bool has_u64;
    uint64List *u64;
    bool has_u16;
    uint16List *u16;
    bool has_i64x;
    int64_t i64x;
    bool has_u64x;
    uint64_t u64x;
};

void qapi_free_UserDefOptions(UserDefOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(UserDefOptions, qapi_free_UserDefOptions)

struct EventStructOne {
    UserDefOne *struct1;
    char *string;
    bool has_enum2;
    EnumOne enum2;
};

void qapi_free_EventStructOne(EventStructOne *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(EventStructOne, qapi_free_EventStructOne)

struct q_obj_EVENT_C_arg {
    bool has_a;
    int64_t a;
    bool has_b;
    UserDefOne *b;
    char *c;
};

struct q_obj_EVENT_D_arg {
    EventStructOne *a;
    char *b;
    bool has_c;
    char *c;
    bool has_enum3;
    EnumOne enum3;
};

struct __org_qemu_x_Base {
    __org_qemu_x_Enum __org_qemu_x_member1;
};

void qapi_free___org_qemu_x_Base(__org_qemu_x_Base *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_Base, qapi_free___org_qemu_x_Base)

struct __org_qemu_x_Struct {
    /* Members inherited from __org_qemu_x_Base: */
    __org_qemu_x_Enum __org_qemu_x_member1;
    /* Own members: */
    char *__org_qemu_x_member2;
    bool has_q_wchar_t;
    int64_t q_wchar_t;
};

static inline __org_qemu_x_Base *qapi___org_qemu_x_Struct_base(const __org_qemu_x_Struct *obj)
{
    return (__org_qemu_x_Base *)obj;
}

void qapi_free___org_qemu_x_Struct(__org_qemu_x_Struct *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_Struct, qapi_free___org_qemu_x_Struct)

struct q_obj_str_wrapper {
    char *data;
};

struct __org_qemu_x_Union1 {
    __org_qemu_x_Union1Kind type;
    union { /* union tag is @type */
        q_obj_str_wrapper __org_qemu_x_branch;
    } u;
};

void qapi_free___org_qemu_x_Union1(__org_qemu_x_Union1 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_Union1, qapi_free___org_qemu_x_Union1)

struct __org_qemu_x_Alt1 {
    QType type;
    union { /* union tag is @type */
        char *__org_qemu_x_branch;
    } u;
};

void qapi_free___org_qemu_x_Alt1(__org_qemu_x_Alt1 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_Alt1, qapi_free___org_qemu_x_Alt1)

struct __org_qemu_x_Union1List {
    __org_qemu_x_Union1List *next;
    __org_qemu_x_Union1 *value;
};

void qapi_free___org_qemu_x_Union1List(__org_qemu_x_Union1List *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_Union1List, qapi_free___org_qemu_x_Union1List)

struct __org_qemu_x_Struct2 {
    __org_qemu_x_Union1List *array;
};

void qapi_free___org_qemu_x_Struct2(__org_qemu_x_Struct2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_Struct2, qapi_free___org_qemu_x_Struct2)

struct __org_qemu_x_Union2 {
    /* Members inherited from __org_qemu_x_Base: */
    __org_qemu_x_Enum __org_qemu_x_member1;
    /* Own members: */
    union { /* union tag is @__org_qemu_x_member1 */
        __org_qemu_x_Struct2 __org_qemu_x_value;
    } u;
};

static inline __org_qemu_x_Base *qapi___org_qemu_x_Union2_base(const __org_qemu_x_Union2 *obj)
{
    return (__org_qemu_x_Base *)obj;
}

void qapi_free___org_qemu_x_Union2(__org_qemu_x_Union2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_Union2, qapi_free___org_qemu_x_Union2)

struct __org_qemu_x_Alt {
    QType type;
    union { /* union tag is @type */
        __org_qemu_x_Base __org_qemu_x_branch;
    } u;
};

void qapi_free___org_qemu_x_Alt(__org_qemu_x_Alt *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_Alt, qapi_free___org_qemu_x_Alt)

struct __org_qemu_x_EnumList {
    __org_qemu_x_EnumList *next;
    __org_qemu_x_Enum value;
};

void qapi_free___org_qemu_x_EnumList(__org_qemu_x_EnumList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_EnumList, qapi_free___org_qemu_x_EnumList)

struct __org_qemu_x_StructList {
    __org_qemu_x_StructList *next;
    __org_qemu_x_Struct *value;
};

void qapi_free___org_qemu_x_StructList(__org_qemu_x_StructList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(__org_qemu_x_StructList, qapi_free___org_qemu_x_StructList)

struct q_obj___org_qemu_x_command_arg {
    __org_qemu_x_EnumList *a;
    __org_qemu_x_StructList *b;
    __org_qemu_x_Union2 *c;
    __org_qemu_x_Alt *d;
};

#if defined(TEST_IF_STRUCT)
struct TestIfStruct {
    int64_t foo;
#if defined(TEST_IF_STRUCT_BAR)
    int64_t bar;
#endif /* defined(TEST_IF_STRUCT_BAR) */
};
#endif /* defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_STRUCT)
void qapi_free_TestIfStruct(TestIfStruct *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TestIfStruct, qapi_free_TestIfStruct)
#endif /* defined(TEST_IF_STRUCT) */

struct q_obj_TestStruct_wrapper {
    TestStruct *data;
};

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
struct TestIfUnion {
    TestIfUnionKind type;
    union { /* union tag is @type */
        q_obj_TestStruct_wrapper foo;
#if defined(TEST_IF_UNION_BAR)
        q_obj_str_wrapper union_bar;
#endif /* defined(TEST_IF_UNION_BAR) */
    } u;
};
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
void qapi_free_TestIfUnion(TestIfUnion *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TestIfUnion, qapi_free_TestIfUnion)
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_UNION)
struct q_obj_TestIfUnionCmd_arg {
    TestIfUnion *union_cmd_arg;
};
#endif /* defined(TEST_IF_UNION) */

#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
struct TestIfAlternate {
    QType type;
    union { /* union tag is @type */
        int64_t foo;
#if defined(TEST_IF_ALT_BAR)
        TestStruct bar;
#endif /* defined(TEST_IF_ALT_BAR) */
    } u;
};
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
void qapi_free_TestIfAlternate(TestIfAlternate *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TestIfAlternate, qapi_free_TestIfAlternate)
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ALT)
struct q_obj_TestIfAlternateCmd_arg {
    TestIfAlternate *alt_cmd_arg;
};
#endif /* defined(TEST_IF_ALT) */

#if defined(TEST_IF_CMD)
#if defined(TEST_IF_STRUCT)
struct q_obj_TestIfCmd_arg {
    TestIfStruct *foo;
#if defined(TEST_IF_CMD_BAR)
    TestIfEnum bar;
#endif /* defined(TEST_IF_CMD_BAR) */
};
#endif /* defined(TEST_IF_STRUCT) */
#endif /* defined(TEST_IF_CMD) */

#if defined(TEST_IF_ENUM)
struct TestIfEnumList {
    TestIfEnumList *next;
    TestIfEnum value;
};

void qapi_free_TestIfEnumList(TestIfEnumList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(TestIfEnumList, qapi_free_TestIfEnumList)
#endif /* defined(TEST_IF_ENUM) */

#if defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT)
struct q_obj_TestIfEvent_arg {
    TestIfStruct *foo;
#if defined(TEST_IF_EVT_BAR)
    TestIfEnumList *bar;
#endif /* defined(TEST_IF_EVT_BAR) */
};
#endif /* defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT) */

struct FeatureStruct0 {
    int64_t foo;
};

void qapi_free_FeatureStruct0(FeatureStruct0 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FeatureStruct0, qapi_free_FeatureStruct0)

struct FeatureStruct1 {
    int64_t foo;
};

void qapi_free_FeatureStruct1(FeatureStruct1 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FeatureStruct1, qapi_free_FeatureStruct1)

struct FeatureStruct2 {
    int64_t foo;
};

void qapi_free_FeatureStruct2(FeatureStruct2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FeatureStruct2, qapi_free_FeatureStruct2)

struct FeatureStruct3 {
    int64_t foo;
};

void qapi_free_FeatureStruct3(FeatureStruct3 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FeatureStruct3, qapi_free_FeatureStruct3)

struct FeatureStruct4 {
    int64_t namespace_test;
};

void qapi_free_FeatureStruct4(FeatureStruct4 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FeatureStruct4, qapi_free_FeatureStruct4)

struct CondFeatureStruct1 {
    int64_t foo;
};

void qapi_free_CondFeatureStruct1(CondFeatureStruct1 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CondFeatureStruct1, qapi_free_CondFeatureStruct1)

struct CondFeatureStruct2 {
    int64_t foo;
};

void qapi_free_CondFeatureStruct2(CondFeatureStruct2 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CondFeatureStruct2, qapi_free_CondFeatureStruct2)

struct CondFeatureStruct3 {
    int64_t foo;
};

void qapi_free_CondFeatureStruct3(CondFeatureStruct3 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(CondFeatureStruct3, qapi_free_CondFeatureStruct3)

struct q_obj_FeatureUnion1_base {
    FeatureEnum1 tag;
};

struct FeatureUnion1 {
    FeatureEnum1 tag;
    union { /* union tag is @tag */
        FeatureStruct1 eins;
    } u;
};

void qapi_free_FeatureUnion1(FeatureUnion1 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FeatureUnion1, qapi_free_FeatureUnion1)

struct FeatureAlternate1 {
    QType type;
    union { /* union tag is @type */
        FeatureStruct1 eins;
    } u;
};

void qapi_free_FeatureAlternate1(FeatureAlternate1 *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(FeatureAlternate1, qapi_free_FeatureAlternate1)

struct q_obj_test_features0_arg {
    FeatureStruct0 *fs0;
    FeatureStruct1 *fs1;
    FeatureStruct2 *fs2;
    FeatureStruct3 *fs3;
    FeatureStruct4 *fs4;
    CondFeatureStruct1 *cfs1;
    CondFeatureStruct2 *cfs2;
    CondFeatureStruct3 *cfs3;
};

#endif /* TEST_QAPI_TYPES_H */
