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

#include "qemu/osdep.h"
#include "qapi/error.h"
#include "qapi/qmp/qerror.h"
#include "test-qapi-visit.h"

bool visit_type_TestStruct_members(Visitor *v, TestStruct *obj, Error **errp)
{
    if (!visit_type_int(v, "integer", &obj->integer, errp)) {
        return false;
    }
    if (!visit_type_bool(v, "boolean", &obj->boolean, errp)) {
        return false;
    }
    if (!visit_type_str(v, "string", &obj->string, errp)) {
        return false;
    }
    return true;
}

bool visit_type_TestStruct(Visitor *v, const char *name,
                 TestStruct **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TestStruct), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TestStruct_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TestStruct(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_NestedEnumsOne_members(Visitor *v, NestedEnumsOne *obj, Error **errp)
{
    if (!visit_type_EnumOne(v, "enum1", &obj->enum1, errp)) {
        return false;
    }
    if (visit_optional(v, "enum2", &obj->has_enum2)) {
        if (!visit_type_EnumOne(v, "enum2", &obj->enum2, errp)) {
            return false;
        }
    }
    if (!visit_type_EnumOne(v, "enum3", &obj->enum3, errp)) {
        return false;
    }
    if (visit_optional(v, "enum4", &obj->has_enum4)) {
        if (!visit_type_EnumOne(v, "enum4", &obj->enum4, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_NestedEnumsOne(Visitor *v, const char *name,
                 NestedEnumsOne **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(NestedEnumsOne), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_NestedEnumsOne_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_NestedEnumsOne(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_MyEnum(Visitor *v, const char *name,
                 MyEnum *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &MyEnum_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_Empty1_members(Visitor *v, Empty1 *obj, Error **errp)
{
    return true;
}

bool visit_type_Empty1(Visitor *v, const char *name,
                 Empty1 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Empty1), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Empty1_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Empty1(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_Empty2_members(Visitor *v, Empty2 *obj, Error **errp)
{
    if (!visit_type_Empty1_members(v, (Empty1 *)obj, errp)) {
        return false;
    }
    return true;
}

bool visit_type_Empty2(Visitor *v, const char *name,
                 Empty2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Empty2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Empty2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Empty2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_Union_base_members(Visitor *v, q_obj_Union_base *obj, Error **errp)
{
    if (!visit_type_EnumOne(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}

bool visit_type_Union_members(Visitor *v, Union *obj, Error **errp)
{
    if (!visit_type_q_obj_Union_base_members(v, (q_obj_Union_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case ENUM_ONE_VALUE1:
        break;
    case ENUM_ONE_VALUE2:
        break;
    case ENUM_ONE_VALUE3:
        break;
    case ENUM_ONE_VALUE4:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_Union(Visitor *v, const char *name,
                 Union **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(Union), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_Union_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_Union(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_QEnumTwo(Visitor *v, const char *name,
                 QEnumTwo *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &QEnumTwo_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_UserDefOne_members(Visitor *v, UserDefOne *obj, Error **errp)
{
    if (!visit_type_UserDefZero_members(v, (UserDefZero *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "string", &obj->string, errp)) {
        return false;
    }
    if (visit_optional(v, "enum1", &obj->has_enum1)) {
        if (!visit_type_EnumOne(v, "enum1", &obj->enum1, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_UserDefOne(Visitor *v, const char *name,
                 UserDefOne **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefOne), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefOne_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefOne(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_EnumOne(Visitor *v, const char *name,
                 EnumOne *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &EnumOne_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_UserDefZero_members(Visitor *v, UserDefZero *obj, Error **errp)
{
    if (!visit_type_int(v, "integer", &obj->integer, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UserDefZero(Visitor *v, const char *name,
                 UserDefZero **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefZero), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefZero_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefZero(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefTwoDictDict_members(Visitor *v, UserDefTwoDictDict *obj, Error **errp)
{
    if (!visit_type_UserDefOne(v, "userdef", &obj->userdef, errp)) {
        return false;
    }
    if (!visit_type_str(v, "string", &obj->string, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UserDefTwoDictDict(Visitor *v, const char *name,
                 UserDefTwoDictDict **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefTwoDictDict), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefTwoDictDict_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefTwoDictDict(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefTwoDict_members(Visitor *v, UserDefTwoDict *obj, Error **errp)
{
    if (!visit_type_str(v, "string1", &obj->string1, errp)) {
        return false;
    }
    if (!visit_type_UserDefTwoDictDict(v, "dict2", &obj->dict2, errp)) {
        return false;
    }
    if (visit_optional(v, "dict3", &obj->has_dict3)) {
        if (!visit_type_UserDefTwoDictDict(v, "dict3", &obj->dict3, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_UserDefTwoDict(Visitor *v, const char *name,
                 UserDefTwoDict **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefTwoDict), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefTwoDict_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefTwoDict(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefTwo_members(Visitor *v, UserDefTwo *obj, Error **errp)
{
    if (!visit_type_str(v, "string0", &obj->string0, errp)) {
        return false;
    }
    if (!visit_type_UserDefTwoDict(v, "dict1", &obj->dict1, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UserDefTwo(Visitor *v, const char *name,
                 UserDefTwo **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefTwo), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefTwo_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefTwo(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefThree_members(Visitor *v, UserDefThree *obj, Error **errp)
{
    if (!visit_type_str(v, "string0", &obj->string0, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UserDefThree(Visitor *v, const char *name,
                 UserDefThree **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefThree), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefThree_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefThree(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefOneList(Visitor *v, const char *name,
                 UserDefOneList **obj, Error **errp)
{
    bool ok = false;
    UserDefOneList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (UserDefOneList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_UserDefOne(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefOneList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefTwoList(Visitor *v, const char *name,
                 UserDefTwoList **obj, Error **errp)
{
    bool ok = false;
    UserDefTwoList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (UserDefTwoList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_UserDefTwo(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefTwoList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_TestStructList(Visitor *v, const char *name,
                 TestStructList **obj, Error **errp)
{
    bool ok = false;
    TestStructList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (TestStructList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_TestStruct(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TestStructList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ForceArrays_members(Visitor *v, ForceArrays *obj, Error **errp)
{
    if (!visit_type_UserDefOneList(v, "unused1", &obj->unused1, errp)) {
        return false;
    }
    if (!visit_type_UserDefTwoList(v, "unused2", &obj->unused2, errp)) {
        return false;
    }
    if (!visit_type_TestStructList(v, "unused3", &obj->unused3, errp)) {
        return false;
    }
    return true;
}

bool visit_type_ForceArrays(Visitor *v, const char *name,
                 ForceArrays **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ForceArrays), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ForceArrays_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ForceArrays(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefA_members(Visitor *v, UserDefA *obj, Error **errp)
{
    if (!visit_type_bool(v, "boolean", &obj->boolean, errp)) {
        return false;
    }
    if (visit_optional(v, "a_b", &obj->has_a_b)) {
        if (!visit_type_int(v, "a_b", &obj->a_b, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_UserDefA(Visitor *v, const char *name,
                 UserDefA **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefA), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefA_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefA(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefB_members(Visitor *v, UserDefB *obj, Error **errp)
{
    if (!visit_type_int(v, "intb", &obj->intb, errp)) {
        return false;
    }
    if (visit_optional(v, "a-b", &obj->has_a_b)) {
        if (!visit_type_bool(v, "a-b", &obj->a_b, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_UserDefB(Visitor *v, const char *name,
                 UserDefB **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefB), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefB_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefB(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefFlatUnion_members(Visitor *v, UserDefFlatUnion *obj, Error **errp)
{
    if (!visit_type_UserDefUnionBase_members(v, (UserDefUnionBase *)obj, errp)) {
        return false;
    }
    switch (obj->enum1) {
    case ENUM_ONE_VALUE1:
        return visit_type_UserDefA_members(v, &obj->u.value1, errp);
    case ENUM_ONE_VALUE2:
        return visit_type_UserDefB_members(v, &obj->u.value2, errp);
    case ENUM_ONE_VALUE3:
        return visit_type_UserDefB_members(v, &obj->u.value3, errp);
    case ENUM_ONE_VALUE4:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_UserDefFlatUnion(Visitor *v, const char *name,
                 UserDefFlatUnion **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefFlatUnion), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefFlatUnion_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefFlatUnion(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefUnionBase_members(Visitor *v, UserDefUnionBase *obj, Error **errp)
{
    if (!visit_type_UserDefZero_members(v, (UserDefZero *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "string", &obj->string, errp)) {
        return false;
    }
    if (!visit_type_EnumOne(v, "enum1", &obj->enum1, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UserDefUnionBase(Visitor *v, const char *name,
                 UserDefUnionBase **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefUnionBase), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefUnionBase_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefUnionBase(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_UserDefFlatUnion2_base_members(Visitor *v, q_obj_UserDefFlatUnion2_base *obj, Error **errp)
{
    if (visit_optional(v, "integer", &obj->has_integer)) {
        if (!visit_type_int(v, "integer", &obj->integer, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "string", &obj->string, errp)) {
        return false;
    }
    if (!visit_type_QEnumTwo(v, "enum1", &obj->enum1, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UserDefFlatUnion2_members(Visitor *v, UserDefFlatUnion2 *obj, Error **errp)
{
    if (!visit_type_q_obj_UserDefFlatUnion2_base_members(v, (q_obj_UserDefFlatUnion2_base *)obj, errp)) {
        return false;
    }
    switch (obj->enum1) {
    case QENUM_TWO_VALUE1:
        return visit_type_UserDefC_members(v, &obj->u.value1, errp);
    case QENUM_TWO_VALUE2:
        return visit_type_UserDefB_members(v, &obj->u.value2, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type_UserDefFlatUnion2(Visitor *v, const char *name,
                 UserDefFlatUnion2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefFlatUnion2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefFlatUnion2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefFlatUnion2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_WrapAlternate_members(Visitor *v, WrapAlternate *obj, Error **errp)
{
    if (!visit_type_UserDefAlternate(v, "alt", &obj->alt, errp)) {
        return false;
    }
    return true;
}

bool visit_type_WrapAlternate(Visitor *v, const char *name,
                 WrapAlternate **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(WrapAlternate), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_WrapAlternate_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_WrapAlternate(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefAlternate(Visitor *v, const char *name,
                 UserDefAlternate **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QDICT:
        if (!visit_start_struct(v, name, NULL, 0, errp)) {
            break;
        }
        if (visit_type_UserDefFlatUnion_members(v, &(*obj)->u.udfu, errp)) {
            ok = visit_check_struct(v, errp);
        }
        visit_end_struct(v, NULL);
        break;
    case QTYPE_QSTRING:
        ok = visit_type_EnumOne(v, name, &(*obj)->u.e, errp);
        break;
    case QTYPE_QNUM:
        ok = visit_type_int(v, name, &(*obj)->u.i, errp);
        break;
    case QTYPE_QNULL:
        ok = visit_type_null(v, name, &(*obj)->u.n, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "UserDefAlternate");
        /* Avoid passing invalid *obj to qapi_free_UserDefAlternate() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefAlternate(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_UserDefC_members(Visitor *v, UserDefC *obj, Error **errp)
{
    if (!visit_type_str(v, "string1", &obj->string1, errp)) {
        return false;
    }
    if (!visit_type_str(v, "string2", &obj->string2, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UserDefC(Visitor *v, const char *name,
                 UserDefC **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefC), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefC_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefC(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AltEnumBool(Visitor *v, const char *name,
                 AltEnumBool **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QSTRING:
        ok = visit_type_EnumOne(v, name, &(*obj)->u.e, errp);
        break;
    case QTYPE_QBOOL:
        ok = visit_type_bool(v, name, &(*obj)->u.b, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "AltEnumBool");
        /* Avoid passing invalid *obj to qapi_free_AltEnumBool() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AltEnumBool(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AltEnumNum(Visitor *v, const char *name,
                 AltEnumNum **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QSTRING:
        ok = visit_type_EnumOne(v, name, &(*obj)->u.e, errp);
        break;
    case QTYPE_QNUM:
        ok = visit_type_number(v, name, &(*obj)->u.n, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "AltEnumNum");
        /* Avoid passing invalid *obj to qapi_free_AltEnumNum() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AltEnumNum(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AltNumEnum(Visitor *v, const char *name,
                 AltNumEnum **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QNUM:
        ok = visit_type_number(v, name, &(*obj)->u.n, errp);
        break;
    case QTYPE_QSTRING:
        ok = visit_type_EnumOne(v, name, &(*obj)->u.e, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "AltNumEnum");
        /* Avoid passing invalid *obj to qapi_free_AltNumEnum() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AltNumEnum(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AltEnumInt(Visitor *v, const char *name,
                 AltEnumInt **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QSTRING:
        ok = visit_type_EnumOne(v, name, &(*obj)->u.e, errp);
        break;
    case QTYPE_QNUM:
        ok = visit_type_int(v, name, &(*obj)->u.i, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "AltEnumInt");
        /* Avoid passing invalid *obj to qapi_free_AltEnumInt() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AltEnumInt(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_AltStrObj(Visitor *v, const char *name,
                 AltStrObj **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QSTRING:
        ok = visit_type_str(v, name, &(*obj)->u.s, errp);
        break;
    case QTYPE_QDICT:
        if (!visit_start_struct(v, name, NULL, 0, errp)) {
            break;
        }
        if (visit_type_TestStruct_members(v, &(*obj)->u.o, errp)) {
            ok = visit_check_struct(v, errp);
        }
        visit_end_struct(v, NULL);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "AltStrObj");
        /* Avoid passing invalid *obj to qapi_free_AltStrObj() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_AltStrObj(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_ArrayStruct_members(Visitor *v, ArrayStruct *obj, Error **errp)
{
    if (!visit_type_intList(v, "integer", &obj->integer, errp)) {
        return false;
    }
    if (!visit_type_int8List(v, "s8", &obj->s8, errp)) {
        return false;
    }
    if (!visit_type_int16List(v, "s16", &obj->s16, errp)) {
        return false;
    }
    if (!visit_type_int32List(v, "s32", &obj->s32, errp)) {
        return false;
    }
    if (!visit_type_int64List(v, "s64", &obj->s64, errp)) {
        return false;
    }
    if (!visit_type_uint8List(v, "u8", &obj->u8, errp)) {
        return false;
    }
    if (!visit_type_uint16List(v, "u16", &obj->u16, errp)) {
        return false;
    }
    if (!visit_type_uint32List(v, "u32", &obj->u32, errp)) {
        return false;
    }
    if (!visit_type_uint64List(v, "u64", &obj->u64, errp)) {
        return false;
    }
    if (!visit_type_numberList(v, "number", &obj->number, errp)) {
        return false;
    }
    if (!visit_type_boolList(v, "boolean", &obj->boolean, errp)) {
        return false;
    }
    if (!visit_type_strList(v, "string", &obj->string, errp)) {
        return false;
    }
    if (visit_optional(v, "sz", &obj->has_sz)) {
        if (!visit_type_sizeList(v, "sz", &obj->sz, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "any", &obj->has_any)) {
        if (!visit_type_anyList(v, "any", &obj->any, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "user", &obj->has_user)) {
        if (!visit_type_StatusList(v, "user", &obj->user, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_ArrayStruct(Visitor *v, const char *name,
                 ArrayStruct **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(ArrayStruct), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_ArrayStruct_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_ArrayStruct(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_user_def_cmd1_arg_members(Visitor *v, q_obj_user_def_cmd1_arg *obj, Error **errp)
{
    if (!visit_type_UserDefOne(v, "ud1a", &obj->ud1a, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_user_def_cmd2_arg_members(Visitor *v, q_obj_user_def_cmd2_arg *obj, Error **errp)
{
    if (!visit_type_UserDefOne(v, "ud1a", &obj->ud1a, errp)) {
        return false;
    }
    if (visit_optional(v, "ud1b", &obj->has_ud1b)) {
        if (!visit_type_UserDefOne(v, "ud1b", &obj->ud1b, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_guest_get_time_arg_members(Visitor *v, q_obj_guest_get_time_arg *obj, Error **errp)
{
    if (!visit_type_int(v, "a", &obj->a, errp)) {
        return false;
    }
    if (visit_optional(v, "b", &obj->has_b)) {
        if (!visit_type_int(v, "b", &obj->b, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_q_obj_guest_sync_arg_members(Visitor *v, q_obj_guest_sync_arg *obj, Error **errp)
{
    if (!visit_type_any(v, "arg", &obj->arg, errp)) {
        return false;
    }
    return true;
}

bool visit_type_UserDefOptions_members(Visitor *v, UserDefOptions *obj, Error **errp)
{
    if (visit_optional(v, "i64", &obj->has_i64)) {
        if (!visit_type_intList(v, "i64", &obj->i64, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "u64", &obj->has_u64)) {
        if (!visit_type_uint64List(v, "u64", &obj->u64, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "u16", &obj->has_u16)) {
        if (!visit_type_uint16List(v, "u16", &obj->u16, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "i64x", &obj->has_i64x)) {
        if (!visit_type_int(v, "i64x", &obj->i64x, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "u64x", &obj->has_u64x)) {
        if (!visit_type_uint64(v, "u64x", &obj->u64x, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_UserDefOptions(Visitor *v, const char *name,
                 UserDefOptions **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(UserDefOptions), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_UserDefOptions_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_UserDefOptions(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_EventStructOne_members(Visitor *v, EventStructOne *obj, Error **errp)
{
    if (!visit_type_UserDefOne(v, "struct1", &obj->struct1, errp)) {
        return false;
    }
    if (!visit_type_str(v, "string", &obj->string, errp)) {
        return false;
    }
    if (visit_optional(v, "enum2", &obj->has_enum2)) {
        if (!visit_type_EnumOne(v, "enum2", &obj->enum2, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_EventStructOne(Visitor *v, const char *name,
                 EventStructOne **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(EventStructOne), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_EventStructOne_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_EventStructOne(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_EVENT_C_arg_members(Visitor *v, q_obj_EVENT_C_arg *obj, Error **errp)
{
    if (visit_optional(v, "a", &obj->has_a)) {
        if (!visit_type_int(v, "a", &obj->a, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "b", &obj->has_b)) {
        if (!visit_type_UserDefOne(v, "b", &obj->b, errp)) {
            return false;
        }
    }
    if (!visit_type_str(v, "c", &obj->c, errp)) {
        return false;
    }
    return true;
}

bool visit_type_q_obj_EVENT_D_arg_members(Visitor *v, q_obj_EVENT_D_arg *obj, Error **errp)
{
    if (!visit_type_EventStructOne(v, "a", &obj->a, errp)) {
        return false;
    }
    if (!visit_type_str(v, "b", &obj->b, errp)) {
        return false;
    }
    if (visit_optional(v, "c", &obj->has_c)) {
        if (!visit_type_str(v, "c", &obj->c, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "enum3", &obj->has_enum3)) {
        if (!visit_type_EnumOne(v, "enum3", &obj->enum3, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type___org_qemu_x_Enum(Visitor *v, const char *name,
                 __org_qemu_x_Enum *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &__org_qemu_x_Enum_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type___org_qemu_x_Base_members(Visitor *v, __org_qemu_x_Base *obj, Error **errp)
{
    if (!visit_type___org_qemu_x_Enum(v, "__org.qemu_x-member1", &obj->__org_qemu_x_member1, errp)) {
        return false;
    }
    return true;
}

bool visit_type___org_qemu_x_Base(Visitor *v, const char *name,
                 __org_qemu_x_Base **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(__org_qemu_x_Base), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type___org_qemu_x_Base_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free___org_qemu_x_Base(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type___org_qemu_x_Struct_members(Visitor *v, __org_qemu_x_Struct *obj, Error **errp)
{
    if (!visit_type___org_qemu_x_Base_members(v, (__org_qemu_x_Base *)obj, errp)) {
        return false;
    }
    if (!visit_type_str(v, "__org.qemu_x-member2", &obj->__org_qemu_x_member2, errp)) {
        return false;
    }
    if (visit_optional(v, "wchar-t", &obj->has_q_wchar_t)) {
        if (!visit_type_int(v, "wchar-t", &obj->q_wchar_t, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type___org_qemu_x_Struct(Visitor *v, const char *name,
                 __org_qemu_x_Struct **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(__org_qemu_x_Struct), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type___org_qemu_x_Struct_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free___org_qemu_x_Struct(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type___org_qemu_x_Alt1(Visitor *v, const char *name,
                 __org_qemu_x_Alt1 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QSTRING:
        ok = visit_type_str(v, name, &(*obj)->u.__org_qemu_x_branch, errp);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "__org.qemu_x-Alt1");
        /* Avoid passing invalid *obj to qapi_free___org_qemu_x_Alt1() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free___org_qemu_x_Alt1(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type___org_qemu_x_UnionList(Visitor *v, const char *name,
                 __org_qemu_x_UnionList **obj, Error **errp)
{
    bool ok = false;
    __org_qemu_x_UnionList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (__org_qemu_x_UnionList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type___org_qemu_x_Union(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free___org_qemu_x_UnionList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type___org_qemu_x_Struct2_members(Visitor *v, __org_qemu_x_Struct2 *obj, Error **errp)
{
    if (!visit_type___org_qemu_x_UnionList(v, "array", &obj->array, errp)) {
        return false;
    }
    return true;
}

bool visit_type___org_qemu_x_Struct2(Visitor *v, const char *name,
                 __org_qemu_x_Struct2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(__org_qemu_x_Struct2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type___org_qemu_x_Struct2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free___org_qemu_x_Struct2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type___org_qemu_x_Union_members(Visitor *v, __org_qemu_x_Union *obj, Error **errp)
{
    if (!visit_type___org_qemu_x_Base_members(v, (__org_qemu_x_Base *)obj, errp)) {
        return false;
    }
    switch (obj->__org_qemu_x_member1) {
    case ORG_QEMU_X_ENUM___ORG_QEMU_X_VALUE:
        return visit_type___org_qemu_x_Struct2_members(v, &obj->u.__org_qemu_x_value, errp);
    default:
        abort();
    }
    return true;
}

bool visit_type___org_qemu_x_Union(Visitor *v, const char *name,
                 __org_qemu_x_Union **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(__org_qemu_x_Union), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type___org_qemu_x_Union_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free___org_qemu_x_Union(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type___org_qemu_x_Alt(Visitor *v, const char *name,
                 __org_qemu_x_Alt **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QDICT:
        if (!visit_start_struct(v, name, NULL, 0, errp)) {
            break;
        }
        if (visit_type___org_qemu_x_Base_members(v, &(*obj)->u.__org_qemu_x_branch, errp)) {
            ok = visit_check_struct(v, errp);
        }
        visit_end_struct(v, NULL);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "__org.qemu_x-Alt");
        /* Avoid passing invalid *obj to qapi_free___org_qemu_x_Alt() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free___org_qemu_x_Alt(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type___org_qemu_x_EnumList(Visitor *v, const char *name,
                 __org_qemu_x_EnumList **obj, Error **errp)
{
    bool ok = false;
    __org_qemu_x_EnumList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (__org_qemu_x_EnumList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type___org_qemu_x_Enum(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free___org_qemu_x_EnumList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type___org_qemu_x_StructList(Visitor *v, const char *name,
                 __org_qemu_x_StructList **obj, Error **errp)
{
    bool ok = false;
    __org_qemu_x_StructList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (__org_qemu_x_StructList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type___org_qemu_x_Struct(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free___org_qemu_x_StructList(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj___org_qemu_x_command_arg_members(Visitor *v, q_obj___org_qemu_x_command_arg *obj, Error **errp)
{
    if (!visit_type___org_qemu_x_EnumList(v, "a", &obj->a, errp)) {
        return false;
    }
    if (!visit_type___org_qemu_x_StructList(v, "b", &obj->b, errp)) {
        return false;
    }
    if (!visit_type___org_qemu_x_Union(v, "c", &obj->c, errp)) {
        return false;
    }
    if (!visit_type___org_qemu_x_Alt(v, "d", &obj->d, errp)) {
        return false;
    }
    return true;
}

#if defined(TEST_IF_STRUCT)
bool visit_type_TestIfStruct_members(Visitor *v, TestIfStruct *obj, Error **errp)
{
    if (!visit_type_int(v, "foo", &obj->foo, errp)) {
        return false;
    }
#if defined(TEST_IF_STRUCT_BAR)
    if (!visit_type_int(v, "bar", &obj->bar, errp)) {
        return false;
    }
#endif /* defined(TEST_IF_STRUCT_BAR) */
    return true;
}

bool visit_type_TestIfStruct(Visitor *v, const char *name,
                 TestIfStruct **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TestIfStruct), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TestIfStruct_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TestIfStruct(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ENUM)
bool visit_type_TestIfEnum(Visitor *v, const char *name,
                 TestIfEnum *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &TestIfEnum_lookup, errp);
    *obj = value;
    return ok;
}
#endif /* defined(TEST_IF_ENUM) */

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_TestIfUnion_base_members(Visitor *v, q_obj_TestIfUnion_base *obj, Error **errp)
{
    if (!visit_type_TestIfEnum(v, "type", &obj->type, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
bool visit_type_TestIfUnion_members(Visitor *v, TestIfUnion *obj, Error **errp)
{
    if (!visit_type_q_obj_TestIfUnion_base_members(v, (q_obj_TestIfUnion_base *)obj, errp)) {
        return false;
    }
    switch (obj->type) {
    case TEST_IF_ENUM_FOO:
        return visit_type_TestStruct_members(v, &obj->u.foo, errp);
#if defined(TEST_IF_ENUM_BAR)
    case TEST_IF_ENUM_BAR:
        return visit_type_UserDefZero_members(v, &obj->u.bar, errp);
#endif /* defined(TEST_IF_ENUM_BAR) */
    default:
        abort();
    }
    return true;
}

bool visit_type_TestIfUnion(Visitor *v, const char *name,
                 TestIfUnion **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(TestIfUnion), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_TestIfUnion_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TestIfUnion(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_test_if_union_cmd_arg_members(Visitor *v, q_obj_test_if_union_cmd_arg *obj, Error **errp)
{
    if (!visit_type_TestIfUnion(v, "union-cmd-arg", &obj->union_cmd_arg, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(TEST_IF_UNION) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
bool visit_type_TestIfAlternate(Visitor *v, const char *name,
                 TestIfAlternate **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QNUM:
        ok = visit_type_int(v, name, &(*obj)->u.foo, errp);
        break;
#if defined(TEST_IF_ALT_BAR)
    case QTYPE_QDICT:
        if (!visit_start_struct(v, name, NULL, 0, errp)) {
            break;
        }
        if (visit_type_TestStruct_members(v, &(*obj)->u.bar, errp)) {
            ok = visit_check_struct(v, errp);
        }
        visit_end_struct(v, NULL);
        break;
#endif /* defined(TEST_IF_ALT_BAR) */
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "TestIfAlternate");
        /* Avoid passing invalid *obj to qapi_free_TestIfAlternate() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TestIfAlternate(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_test_if_alternate_cmd_arg_members(Visitor *v, q_obj_test_if_alternate_cmd_arg *obj, Error **errp)
{
    if (!visit_type_TestIfAlternate(v, "alt-cmd-arg", &obj->alt_cmd_arg, errp)) {
        return false;
    }
    return true;
}
#endif /* defined(TEST_IF_ALT) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_test_if_cmd_arg_members(Visitor *v, q_obj_test_if_cmd_arg *obj, Error **errp)
{
    if (!visit_type_TestIfStruct(v, "foo", &obj->foo, errp)) {
        return false;
    }
#if defined(TEST_IF_CMD_BAR)
    if (!visit_type_TestIfEnum(v, "bar", &obj->bar, errp)) {
        return false;
    }
#endif /* defined(TEST_IF_CMD_BAR) */
    return true;
}
#endif /* defined(TEST_IF_CMD) && defined(TEST_IF_STRUCT) */

#if defined(TEST_IF_ENUM)
bool visit_type_TestIfEnumList(Visitor *v, const char *name,
                 TestIfEnumList **obj, Error **errp)
{
    bool ok = false;
    TestIfEnumList *tail;
    size_t size = sizeof(**obj);

    if (!visit_start_list(v, name, (GenericList **)obj, size, errp)) {
        return false;
    }

    for (tail = *obj; tail;
         tail = (TestIfEnumList *)visit_next_list(v, (GenericList *)tail, size)) {
        if (!visit_type_TestIfEnum(v, NULL, &tail->value, errp)) {
            goto out_obj;
        }
    }

    ok = visit_check_list(v, errp);
out_obj:
    visit_end_list(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_TestIfEnumList(*obj);
        *obj = NULL;
    }
    return ok;
}
#endif /* defined(TEST_IF_ENUM) */

#if defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT)
bool visit_type_q_obj_TEST_IF_EVENT_arg_members(Visitor *v, q_obj_TEST_IF_EVENT_arg *obj, Error **errp)
{
    if (!visit_type_TestIfStruct(v, "foo", &obj->foo, errp)) {
        return false;
    }
#if defined(TEST_IF_EVT_BAR)
    if (!visit_type_TestIfEnumList(v, "bar", &obj->bar, errp)) {
        return false;
    }
#endif /* defined(TEST_IF_EVT_BAR) */
    return true;
}
#endif /* defined(TEST_IF_EVT) && defined(TEST_IF_STRUCT) */

bool visit_type_FeatureStruct0_members(Visitor *v, FeatureStruct0 *obj, Error **errp)
{
    if (!visit_type_int(v, "foo", &obj->foo, errp)) {
        return false;
    }
    return true;
}

bool visit_type_FeatureStruct0(Visitor *v, const char *name,
                 FeatureStruct0 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FeatureStruct0), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FeatureStruct0_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FeatureStruct0(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FeatureStruct1_members(Visitor *v, FeatureStruct1 *obj, Error **errp)
{
    if (visit_policy_reject(v, "foo", 1u << QAPI_DEPRECATED, errp)) {
        return false;
    }
    if (!visit_policy_skip(v, "foo", 1u << QAPI_DEPRECATED)) {
        if (!visit_type_int(v, "foo", &obj->foo, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_FeatureStruct1(Visitor *v, const char *name,
                 FeatureStruct1 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FeatureStruct1), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FeatureStruct1_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FeatureStruct1(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FeatureStruct2_members(Visitor *v, FeatureStruct2 *obj, Error **errp)
{
    if (visit_policy_reject(v, "foo", 1u << QAPI_UNSTABLE, errp)) {
        return false;
    }
    if (!visit_policy_skip(v, "foo", 1u << QAPI_UNSTABLE)) {
        if (!visit_type_int(v, "foo", &obj->foo, errp)) {
            return false;
        }
    }
    return true;
}

bool visit_type_FeatureStruct2(Visitor *v, const char *name,
                 FeatureStruct2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FeatureStruct2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FeatureStruct2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FeatureStruct2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FeatureStruct3_members(Visitor *v, FeatureStruct3 *obj, Error **errp)
{
    if (!visit_type_int(v, "foo", &obj->foo, errp)) {
        return false;
    }
    return true;
}

bool visit_type_FeatureStruct3(Visitor *v, const char *name,
                 FeatureStruct3 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FeatureStruct3), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FeatureStruct3_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FeatureStruct3(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FeatureStruct4_members(Visitor *v, FeatureStruct4 *obj, Error **errp)
{
    if (!visit_type_int(v, "namespace-test", &obj->namespace_test, errp)) {
        return false;
    }
    return true;
}

bool visit_type_FeatureStruct4(Visitor *v, const char *name,
                 FeatureStruct4 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FeatureStruct4), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FeatureStruct4_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FeatureStruct4(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CondFeatureStruct1_members(Visitor *v, CondFeatureStruct1 *obj, Error **errp)
{
    if (!visit_type_int(v, "foo", &obj->foo, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CondFeatureStruct1(Visitor *v, const char *name,
                 CondFeatureStruct1 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CondFeatureStruct1), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CondFeatureStruct1_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CondFeatureStruct1(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CondFeatureStruct2_members(Visitor *v, CondFeatureStruct2 *obj, Error **errp)
{
    if (!visit_type_int(v, "foo", &obj->foo, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CondFeatureStruct2(Visitor *v, const char *name,
                 CondFeatureStruct2 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CondFeatureStruct2), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CondFeatureStruct2_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CondFeatureStruct2(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CondFeatureStruct3_members(Visitor *v, CondFeatureStruct3 *obj, Error **errp)
{
    if (!visit_type_int(v, "foo", &obj->foo, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CondFeatureStruct3(Visitor *v, const char *name,
                 CondFeatureStruct3 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CondFeatureStruct3), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CondFeatureStruct3_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CondFeatureStruct3(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_CondFeatureStruct4_members(Visitor *v, CondFeatureStruct4 *obj, Error **errp)
{
    if (!visit_type_int(v, "foo", &obj->foo, errp)) {
        return false;
    }
    return true;
}

bool visit_type_CondFeatureStruct4(Visitor *v, const char *name,
                 CondFeatureStruct4 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(CondFeatureStruct4), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_CondFeatureStruct4_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_CondFeatureStruct4(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FeatureEnum1(Visitor *v, const char *name,
                 FeatureEnum1 *obj, Error **errp)
{
    int value = *obj;
    bool ok = visit_type_enum(v, name, &value, &FeatureEnum1_lookup, errp);
    *obj = value;
    return ok;
}

bool visit_type_q_obj_FeatureUnion1_base_members(Visitor *v, q_obj_FeatureUnion1_base *obj, Error **errp)
{
    if (!visit_type_FeatureEnum1(v, "tag", &obj->tag, errp)) {
        return false;
    }
    return true;
}

bool visit_type_FeatureUnion1_members(Visitor *v, FeatureUnion1 *obj, Error **errp)
{
    if (!visit_type_q_obj_FeatureUnion1_base_members(v, (q_obj_FeatureUnion1_base *)obj, errp)) {
        return false;
    }
    switch (obj->tag) {
    case FEATURE_ENUM1_EINS:
        return visit_type_FeatureStruct1_members(v, &obj->u.eins, errp);
    case FEATURE_ENUM1_ZWEI:
        break;
    case FEATURE_ENUM1_DREI:
        break;
    default:
        abort();
    }
    return true;
}

bool visit_type_FeatureUnion1(Visitor *v, const char *name,
                 FeatureUnion1 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_struct(v, name, (void **)obj, sizeof(FeatureUnion1), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    if (!visit_type_FeatureUnion1_members(v, *obj, errp)) {
        goto out_obj;
    }
    ok = visit_check_struct(v, errp);
out_obj:
    visit_end_struct(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FeatureUnion1(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_FeatureAlternate1(Visitor *v, const char *name,
                 FeatureAlternate1 **obj, Error **errp)
{
    bool ok = false;

    if (!visit_start_alternate(v, name, (GenericAlternate **)obj,
                               sizeof(**obj), errp)) {
        return false;
    }
    if (!*obj) {
        /* incomplete */
        assert(visit_is_dealloc(v));
        ok = true;
        goto out_obj;
    }
    switch ((*obj)->type) {
    case QTYPE_QDICT:
        if (!visit_start_struct(v, name, NULL, 0, errp)) {
            break;
        }
        if (visit_type_FeatureStruct1_members(v, &(*obj)->u.eins, errp)) {
            ok = visit_check_struct(v, errp);
        }
        visit_end_struct(v, NULL);
        break;
    case QTYPE_NONE:
        abort();
    default:
        assert(visit_is_input(v));
        error_setg(errp, QERR_INVALID_PARAMETER_TYPE, name ? name : "null",
                   "FeatureAlternate1");
        /* Avoid passing invalid *obj to qapi_free_FeatureAlternate1() */
        g_free(*obj);
        *obj = NULL;
    }
out_obj:
    visit_end_alternate(v, (void **)obj);
    if (!ok && visit_is_input(v)) {
        qapi_free_FeatureAlternate1(*obj);
        *obj = NULL;
    }
    return ok;
}

bool visit_type_q_obj_test_features0_arg_members(Visitor *v, q_obj_test_features0_arg *obj, Error **errp)
{
    if (visit_optional(v, "fs0", &obj->has_fs0)) {
        if (!visit_type_FeatureStruct0(v, "fs0", &obj->fs0, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "fs1", &obj->has_fs1)) {
        if (!visit_type_FeatureStruct1(v, "fs1", &obj->fs1, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "fs2", &obj->has_fs2)) {
        if (!visit_type_FeatureStruct2(v, "fs2", &obj->fs2, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "fs3", &obj->has_fs3)) {
        if (!visit_type_FeatureStruct3(v, "fs3", &obj->fs3, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "fs4", &obj->has_fs4)) {
        if (!visit_type_FeatureStruct4(v, "fs4", &obj->fs4, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cfs1", &obj->has_cfs1)) {
        if (!visit_type_CondFeatureStruct1(v, "cfs1", &obj->cfs1, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cfs2", &obj->has_cfs2)) {
        if (!visit_type_CondFeatureStruct2(v, "cfs2", &obj->cfs2, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cfs3", &obj->has_cfs3)) {
        if (!visit_type_CondFeatureStruct3(v, "cfs3", &obj->cfs3, errp)) {
            return false;
        }
    }
    if (visit_optional(v, "cfs4", &obj->has_cfs4)) {
        if (!visit_type_CondFeatureStruct4(v, "cfs4", &obj->cfs4, errp)) {
            return false;
        }
    }
    return true;
}

/* Dummy declaration to prevent empty .o file */
char qapi_dummy_test_qapi_visit_c;
