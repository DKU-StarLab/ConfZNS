/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI visitors
 *
 * Copyright IBM, Corp. 2011
 * Copyright (C) 2014-2018 Red Hat, Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef TEST_QAPI_VISIT_H
#define TEST_QAPI_VISIT_H

#include "qapi/qapi-builtin-visit.h"
#include "test-qapi-types.h"

#include "include/test-qapi-visit-sub-module.h"

bool visit_type_TestStruct_members(Visitor *v, TestStruct *obj, Error **errp);

bool visit_type_TestStruct(Visitor *v, const char *name,
                 TestStruct **obj, Error **errp);

bool visit_type_NestedEnumsOne_members(Visitor *v, NestedEnumsOne *obj, Error **errp);

bool visit_type_NestedEnumsOne(Visitor *v, const char *name,
                 NestedEnumsOne **obj, Error **errp);

bool visit_type_MyEnum(Visitor *v, const char *name,
                 MyEnum *obj, Error **errp);

bool visit_type_Empty1_members(Visitor *v, Empty1 *obj, Error **errp);

bool visit_type_Empty1(Visitor *v, const char *name,
                 Empty1 **obj, Error **errp);

bool visit_type_Empty2_members(Visitor *v, Empty2 *obj, Error **errp);

bool visit_type_Empty2(Visitor *v, const char *name,
                 Empty2 **obj, Error **errp);

bool visit_type_q_obj_Union_base_members(Visitor *v, q_obj_Union_base *obj, Error **errp);

bool visit_type_Union_members(Visitor *v, Union *obj, Error **errp);

bool visit_type_Union(Visitor *v, const char *name,
                 Union **obj, Error **errp);

bool visit_type_QEnumTwo(Visitor *v, const char *name,
                 QEnumTwo *obj, Error **errp);

bool visit_type_UserDefOne_members(Visitor *v, UserDefOne *obj, Error **errp);

bool visit_type_UserDefOne(Visitor *v, const char *name,
                 UserDefOne **obj, Error **errp);

bool visit_type_EnumOne(Visitor *v, const char *name,
                 EnumOne *obj, Error **errp);

bool visit_type_UserDefZero_members(Visitor *v, UserDefZero *obj, Error **errp);

bool visit_type_UserDefZero(Visitor *v, const char *name,
                 UserDefZero **obj, Error **errp);

bool visit_type_UserDefTwoDictDict_members(Visitor *v, UserDefTwoDictDict *obj, Error **errp);

bool visit_type_UserDefTwoDictDict(Visitor *v, const char *name,
                 UserDefTwoDictDict **obj, Error **errp);

bool visit_type_UserDefTwoDict_members(Visitor *v, UserDefTwoDict *obj, Error **errp);

bool visit_type_UserDefTwoDict(Visitor *v, const char *name,
                 UserDefTwoDict **obj, Error **errp);

bool visit_type_UserDefTwo_members(Visitor *v, UserDefTwo *obj, Error **errp);

bool visit_type_UserDefTwo(Visitor *v, const char *name,
                 UserDefTwo **obj, Error **errp);

bool visit_type_UserDefThree_members(Visitor *v, UserDefThree *obj, Error **errp);

bool visit_type_UserDefThree(Visitor *v, const char *name,
                 UserDefThree **obj, Error **errp);

bool visit_type_UserDefOneList(Visitor *v, const char *name,
                 UserDefOneList **obj, Error **errp);

bool visit_type_UserDefTwoList(Visitor *v, const char *name,
                 UserDefTwoList **obj, Error **errp);

bool visit_type_TestStructList(Visitor *v, const char *name,
                 TestStructList **obj, Error **errp);

bool visit_type_ForceArrays_members(Visitor *v, ForceArrays *obj, Error **errp);

bool visit_type_ForceArrays(Visitor *v, const char *name,
                 ForceArrays **obj, Error **errp);

bool visit_type_UserDefA_members(Visitor *v, UserDefA *obj, Error **errp);

bool visit_type_UserDefA(Visitor *v, const char *name,
                 UserDefA **obj, Error **errp);

bool visit_type_UserDefB_members(Visitor *v, UserDefB *obj, Error **errp);

bool visit_type_UserDefB(Visitor *v, const char *name,
                 UserDefB **obj, Error **errp);

bool visit_type_UserDefFlatUnion_members(Visitor *v, UserDefFlatUnion *obj, Error **errp);

bool visit_type_UserDefFlatUnion(Visitor *v, const char *name,
                 UserDefFlatUnion **obj, Error **errp);

bool visit_type_UserDefUnionBase_members(Visitor *v, UserDefUnionBase *obj, Error **errp);

bool visit_type_UserDefUnionBase(Visitor *v, const char *name,
                 UserDefUnionBase **obj, Error **errp);

bool visit_type_q_obj_UserDefFlatUnion2_base_members(Visitor *v, q_obj_UserDefFlatUnion2_base *obj, Error **errp);

bool visit_type_UserDefFlatUnion2_members(Visitor *v, UserDefFlatUnion2 *obj, Error **errp);

bool visit_type_UserDefFlatUnion2(Visitor *v, const char *name,
                 UserDefFlatUnion2 **obj, Error **errp);

bool visit_type_WrapAlternate_members(Visitor *v, WrapAlternate *obj, Error **errp);

bool visit_type_WrapAlternate(Visitor *v, const char *name,
                 WrapAlternate **obj, Error **errp);

bool visit_type_UserDefAlternate(Visitor *v, const char *name,
                 UserDefAlternate **obj, Error **errp);

bool visit_type_UserDefC_members(Visitor *v, UserDefC *obj, Error **errp);

bool visit_type_UserDefC(Visitor *v, const char *name,
                 UserDefC **obj, Error **errp);

bool visit_type_AltEnumBool(Visitor *v, const char *name,
                 AltEnumBool **obj, Error **errp);

bool visit_type_AltEnumNum(Visitor *v, const char *name,
                 AltEnumNum **obj, Error **errp);

bool visit_type_AltNumEnum(Visitor *v, const char *name,
                 AltNumEnum **obj, Error **errp);

bool visit_type_AltEnumInt(Visitor *v, const char *name,
                 AltEnumInt **obj, Error **errp);

bool visit_type_AltStrObj(Visitor *v, const char *name,
                 AltStrObj **obj, Error **errp);

bool visit_type_ArrayStruct_members(Visitor *v, ArrayStruct *obj, Error **errp);

bool visit_type_ArrayStruct(Visitor *v, const char *name,
                 ArrayStruct **obj, Error **errp);

bool visit_type_q_obj_user_def_cmd1_arg_members(Visitor *v, q_obj_user_def_cmd1_arg *obj, Error **errp);

bool visit_type_q_obj_user_def_cmd2_arg_members(Visitor *v, q_obj_user_def_cmd2_arg *obj, Error **errp);

bool visit_type_q_obj_guest_get_time_arg_members(Visitor *v, q_obj_guest_get_time_arg *obj, Error **errp);

bool visit_type_q_obj_guest_sync_arg_members(Visitor *v, q_obj_guest_sync_arg *obj, Error **errp);

bool visit_type_UserDefOptions_members(Visitor *v, UserDefOptions *obj, Error **errp);

bool visit_type_UserDefOptions(Visitor *v, const char *name,
                 UserDefOptions **obj, Error **errp);

bool visit_type_EventStructOne_members(Visitor *v, EventStructOne *obj, Error **errp);

bool visit_type_EventStructOne(Visitor *v, const char *name,
                 EventStructOne **obj, Error **errp);

bool visit_type_q_obj_EVENT_C_arg_members(Visitor *v, q_obj_EVENT_C_arg *obj, Error **errp);

bool visit_type_q_obj_EVENT_D_arg_members(Visitor *v, q_obj_EVENT_D_arg *obj, Error **errp);

bool visit_type___org_qemu_x_Enum(Visitor *v, const char *name,
                 __org_qemu_x_Enum *obj, Error **errp);

bool visit_type___org_qemu_x_Base_members(Visitor *v, __org_qemu_x_Base *obj, Error **errp);

bool visit_type___org_qemu_x_Base(Visitor *v, const char *name,
                 __org_qemu_x_Base **obj, Error **errp);

bool visit_type___org_qemu_x_Struct_members(Visitor *v, __org_qemu_x_Struct *obj, Error **errp);

bool visit_type___org_qemu_x_Struct(Visitor *v, const char *name,
                 __org_qemu_x_Struct **obj, Error **errp);

bool visit_type___org_qemu_x_Alt1(Visitor *v, const char *name,
                 __org_qemu_x_Alt1 **obj, Error **errp);

bool visit_type___org_qemu_x_UnionList(Visitor *v, const char *name,
                 __org_qemu_x_UnionList **obj, Error **errp);

bool visit_type___org_qemu_x_Struct2_members(Visitor *v, __org_qemu_x_Struct2 *obj, Error **errp);

bool visit_type___org_qemu_x_Struct2(Visitor *v, const char *name,
                 __org_qemu_x_Struct2 **obj, Error **errp);

bool visit_type___org_qemu_x_Union_members(Visitor *v, __org_qemu_x_Union *obj, Error **errp);

bool visit_type___org_qemu_x_Union(Visitor *v, const char *name,
                 __org_qemu_x_Union **obj, Error **errp);

bool visit_type___org_qemu_x_Alt(Visitor *v, const char *name,
                 __org_qemu_x_Alt **obj, Error **errp);

bool visit_type___org_qemu_x_EnumList(Visitor *v, const char *name,
                 __org_qemu_x_EnumList **obj, Error **errp);

bool visit_type___org_qemu_x_StructList(Visitor *v, const char *name,
                 __org_qemu_x_StructList **obj, Error **errp);

bool visit_type_q_obj___org_qemu_x_command_arg_members(Visitor *v, q_obj___org_qemu_x_command_arg *obj, Error **errp);

#if defined(TEST_IF_STRUCT)
bool visit_type_TestIfStruct_members(Visitor *v, TestIfStruct *obj, Error **errp);

bool visit_type_TestIfStruct(Visitor *v, const char *name,
                 TestIfStruct **obj, Error **errp);
#endif /* defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ENUM)
bool visit_type_TestIfEnum(Visitor *v, const char *name,
                 TestIfEnum *obj, Error **errp);
#endif /* defined(TEST_IF_ENUM) */

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_TestIfUnion_base_members(Visitor *v, q_obj_TestIfUnion_base *obj, Error **errp);
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
bool visit_type_TestIfUnion_members(Visitor *v, TestIfUnion *obj, Error **errp);

bool visit_type_TestIfUnion(Visitor *v, const char *name,
                 TestIfUnion **obj, Error **errp);
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_test_if_union_cmd_arg_members(Visitor *v, q_obj_test_if_union_cmd_arg *obj, Error **errp);
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
bool visit_type_TestIfAlternate(Visitor *v, const char *name,
                 TestIfAlternate **obj, Error **errp);
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_test_if_alternate_cmd_arg_members(Visitor *v, q_obj_test_if_alternate_cmd_arg *obj, Error **errp);
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_test_if_cmd_arg_members(Visitor *v, q_obj_test_if_cmd_arg *obj, Error **errp);
#endif /* defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ENUM)
bool visit_type_TestIfEnumList(Visitor *v, const char *name,
                 TestIfEnumList **obj, Error **errp);
#endif /* defined(TEST_IF_ENUM) */

#if defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_TEST_IF_EVENT_arg_members(Visitor *v, q_obj_TEST_IF_EVENT_arg *obj, Error **errp);
#endif /* defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT) */

bool visit_type_FeatureStruct0_members(Visitor *v, FeatureStruct0 *obj, Error **errp);

bool visit_type_FeatureStruct0(Visitor *v, const char *name,
                 FeatureStruct0 **obj, Error **errp);

bool visit_type_FeatureStruct1_members(Visitor *v, FeatureStruct1 *obj, Error **errp);

bool visit_type_FeatureStruct1(Visitor *v, const char *name,
                 FeatureStruct1 **obj, Error **errp);

bool visit_type_FeatureStruct2_members(Visitor *v, FeatureStruct2 *obj, Error **errp);

bool visit_type_FeatureStruct2(Visitor *v, const char *name,
                 FeatureStruct2 **obj, Error **errp);

bool visit_type_FeatureStruct3_members(Visitor *v, FeatureStruct3 *obj, Error **errp);

bool visit_type_FeatureStruct3(Visitor *v, const char *name,
                 FeatureStruct3 **obj, Error **errp);

bool visit_type_FeatureStruct4_members(Visitor *v, FeatureStruct4 *obj, Error **errp);

bool visit_type_FeatureStruct4(Visitor *v, const char *name,
                 FeatureStruct4 **obj, Error **errp);

bool visit_type_CondFeatureStruct1_members(Visitor *v, CondFeatureStruct1 *obj, Error **errp);

bool visit_type_CondFeatureStruct1(Visitor *v, const char *name,
                 CondFeatureStruct1 **obj, Error **errp);

bool visit_type_CondFeatureStruct2_members(Visitor *v, CondFeatureStruct2 *obj, Error **errp);

bool visit_type_CondFeatureStruct2(Visitor *v, const char *name,
                 CondFeatureStruct2 **obj, Error **errp);

bool visit_type_CondFeatureStruct3_members(Visitor *v, CondFeatureStruct3 *obj, Error **errp);

bool visit_type_CondFeatureStruct3(Visitor *v, const char *name,
                 CondFeatureStruct3 **obj, Error **errp);

bool visit_type_CondFeatureStruct4_members(Visitor *v, CondFeatureStruct4 *obj, Error **errp);

bool visit_type_CondFeatureStruct4(Visitor *v, const char *name,
                 CondFeatureStruct4 **obj, Error **errp);

bool visit_type_FeatureEnum1(Visitor *v, const char *name,
                 FeatureEnum1 *obj, Error **errp);

bool visit_type_q_obj_FeatureUnion1_base_members(Visitor *v, q_obj_FeatureUnion1_base *obj, Error **errp);

bool visit_type_FeatureUnion1_members(Visitor *v, FeatureUnion1 *obj, Error **errp);

bool visit_type_FeatureUnion1(Visitor *v, const char *name,
                 FeatureUnion1 **obj, Error **errp);

bool visit_type_FeatureAlternate1(Visitor *v, const char *name,
                 FeatureAlternate1 **obj, Error **errp);

bool visit_type_q_obj_test_features0_arg_members(Visitor *v, q_obj_test_features0_arg *obj, Error **errp);

#endif /* TEST_QAPI_VISIT_H */
