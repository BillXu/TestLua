/*
** Lua binding: mytestClass
** Generated automatically by tolua++-1.0.92 on 11/21/14 11:02:14.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_mytestClass_open (lua_State* tolua_S);

#include<iostream>
#include "mytestClass.h"
#include "mytestClass.h"
#include "testClass2.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CBaseClass (lua_State* tolua_S)
{
 CBaseClass* self = (CBaseClass*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_COthreBase (lua_State* tolua_S)
{
 COthreBase* self = (COthreBase*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_CSubClass (lua_State* tolua_S)
{
 CSubClass* self = (CSubClass*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_stChild (lua_State* tolua_S)
{
 stChild* self = (stChild*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_stTestBase (lua_State* tolua_S)
{
 stTestBase* self = (stTestBase*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CBaseClass");
 tolua_usertype(tolua_S,"COthreBase");
 tolua_usertype(tolua_S,"CSubClass");
 tolua_usertype(tolua_S,"stChild");
 tolua_usertype(tolua_S,"stTestBase");
}

/* method: new of class  stTestBase */
#ifndef TOLUA_DISABLE_tolua_mytestClass_stTestBase_new00
static int tolua_mytestClass_stTestBase_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"stTestBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   stTestBase* tolua_ret = (stTestBase*)  Mtolua_new((stTestBase)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"stTestBase");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  stTestBase */
#ifndef TOLUA_DISABLE_tolua_mytestClass_stTestBase_new00_local
static int tolua_mytestClass_stTestBase_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"stTestBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   stTestBase* tolua_ret = (stTestBase*)  Mtolua_new((stTestBase)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"stTestBase");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nType of class  stTestBase */
#ifndef TOLUA_DISABLE_tolua_get_stTestBase_nType
static int tolua_get_stTestBase_nType(lua_State* tolua_S)
{
  stTestBase* self = (stTestBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nType'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->nType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nType of class  stTestBase */
#ifndef TOLUA_DISABLE_tolua_set_stTestBase_nType
static int tolua_set_stTestBase_nType(lua_State* tolua_S)
{
  stTestBase* self = (stTestBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nType'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nType = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  stTestBase */
#ifndef TOLUA_DISABLE_tolua_get_stTestBase_x
static int tolua_get_stTestBase_x(lua_State* tolua_S)
{
  stTestBase* self = (stTestBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  stTestBase */
#ifndef TOLUA_DISABLE_tolua_set_stTestBase_x
static int tolua_set_stTestBase_x(lua_State* tolua_S)
{
  stTestBase* self = (stTestBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  stTestBase */
#ifndef TOLUA_DISABLE_tolua_get_stTestBase_y
static int tolua_get_stTestBase_y(lua_State* tolua_S)
{
  stTestBase* self = (stTestBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  stTestBase */
#ifndef TOLUA_DISABLE_tolua_set_stTestBase_y
static int tolua_set_stTestBase_y(lua_State* tolua_S)
{
  stTestBase* self = (stTestBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  stChild */
#ifndef TOLUA_DISABLE_tolua_mytestClass_stChild_new00
static int tolua_mytestClass_stChild_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"stChild",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   stChild* tolua_ret = (stChild*)  Mtolua_new((stChild)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"stChild");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  stChild */
#ifndef TOLUA_DISABLE_tolua_mytestClass_stChild_new00_local
static int tolua_mytestClass_stChild_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"stChild",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   stChild* tolua_ret = (stChild*)  Mtolua_new((stChild)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"stChild");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  stChild */
#ifndef TOLUA_DISABLE_tolua_get_stChild_z
static int tolua_get_stChild_z(lua_State* tolua_S)
{
  stChild* self = (stChild*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  stChild */
#ifndef TOLUA_DISABLE_tolua_set_stChild_z
static int tolua_set_stChild_z(lua_State* tolua_S)
{
  stChild* self = (stChild*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  COthreBase */
#ifndef TOLUA_DISABLE_tolua_mytestClass_COthreBase_new00
static int tolua_mytestClass_COthreBase_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"COthreBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   COthreBase* tolua_ret = (COthreBase*)  Mtolua_new((COthreBase)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"COthreBase");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  COthreBase */
#ifndef TOLUA_DISABLE_tolua_mytestClass_COthreBase_new00_local
static int tolua_mytestClass_COthreBase_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"COthreBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   COthreBase* tolua_ret = (COthreBase*)  Mtolua_new((COthreBase)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"COthreBase");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Print of class  COthreBase */
#ifndef TOLUA_DISABLE_tolua_mytestClass_COthreBase_Print00
static int tolua_mytestClass_COthreBase_Print00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"COthreBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  COthreBase* self = (COthreBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Print'", NULL);
#endif
  {
   self->Print();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Print'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_new00
static int tolua_mytestClass_CSubClass_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CSubClass* tolua_ret = (CSubClass*)  Mtolua_new((CSubClass)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CSubClass");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_new00_local
static int tolua_mytestClass_CSubClass_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CSubClass* tolua_ret = (CSubClass*)  Mtolua_new((CSubClass)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CSubClass");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_new01
static int tolua_mytestClass_CSubClass_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CBaseClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int a = ((int)  tolua_tonumber(tolua_S,2,0));
  CBaseClass* pParent = ((CBaseClass*)  tolua_tousertype(tolua_S,3,0));
  {
   CSubClass* tolua_ret = (CSubClass*)  Mtolua_new((CSubClass)(a,pParent));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CSubClass");
  }
 }
 return 1;
tolua_lerror:
 return tolua_mytestClass_CSubClass_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_new01_local
static int tolua_mytestClass_CSubClass_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CBaseClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int a = ((int)  tolua_tonumber(tolua_S,2,0));
  CBaseClass* pParent = ((CBaseClass*)  tolua_tousertype(tolua_S,3,0));
  {
   CSubClass* tolua_ret = (CSubClass*)  Mtolua_new((CSubClass)(a,pParent));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CSubClass");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_mytestClass_CSubClass_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_delete00
static int tolua_mytestClass_CSubClass_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PrintVirtual of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_PrintVirtual00
static int tolua_mytestClass_CSubClass_PrintVirtual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PrintVirtual'", NULL);
#endif
  {
   self->PrintVirtual();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PrintVirtual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FuncSub of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_FuncSub00
static int tolua_mytestClass_CSubClass_FuncSub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FuncSub'", NULL);
#endif
  {
   self->FuncSub();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FuncSub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: StaticFunc of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_StaticFunc00
static int tolua_mytestClass_CSubClass_StaticFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CSubClass::StaticFunc();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'StaticFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: FuncInline of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_FuncInline00
static int tolua_mytestClass_CSubClass_FuncInline00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'FuncInline'", NULL);
#endif
  {
   self->FuncInline();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FuncInline'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PrintStruct of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_PrintStruct00
static int tolua_mytestClass_CSubClass_PrintStruct00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"stTestBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
  stTestBase* pS = ((stTestBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PrintStruct'", NULL);
#endif
  {
   self->PrintStruct(pS);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PrintStruct'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TestOverload of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_TestOverload00
static int tolua_mytestClass_CSubClass_TestOverload00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
  int a = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TestOverload'", NULL);
#endif
  {
   self->TestOverload(a);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TestOverload'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TestOverload of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_TestOverload01
static int tolua_mytestClass_CSubClass_TestOverload01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
  int a = ((int)  tolua_tonumber(tolua_S,2,0));
  int b = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TestOverload'", NULL);
#endif
  {
   self->TestOverload(a,b);
  }
 }
 return 0;
tolua_lerror:
 return tolua_mytestClass_CSubClass_TestOverload00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_m_pParent of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_get_m_pParent00
static int tolua_mytestClass_CSubClass_get_m_pParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_m_pParent'", NULL);
#endif
  {
   CBaseClass* tolua_ret = (CBaseClass*)  self->get_m_pParent();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CBaseClass");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_m_pParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: set_m_nNum of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_set_m_nNum00
static int tolua_mytestClass_CSubClass_set_m_nNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
  int n = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'set_m_nNum'", NULL);
#endif
  {
   self->set_m_nNum(n);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'set_m_nNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: get_m_nNum of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_get_m_nNum00
static int tolua_mytestClass_CSubClass_get_m_nNum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get_m_nNum'", NULL);
#endif
  {
   int tolua_ret = (int)  self->get_m_nNum();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get_m_nNum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Swap of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CSubClass_Swap00
static int tolua_mytestClass_CSubClass_Swap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CSubClass",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
  int a = ((int)  tolua_tonumber(tolua_S,2,0));
  int b = ((int)  tolua_tonumber(tolua_S,3,0));
  int add = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Swap'", NULL);
#endif
  {
   self->Swap(&a,&b,add);
   tolua_pushnumber(tolua_S,(lua_Number)a);
   tolua_pushnumber(tolua_S,(lua_Number)b);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Swap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_nPN of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_get_CSubClass_m_nPN
static int tolua_get_CSubClass_m_nPN(lua_State* tolua_S)
{
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_nPN'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->m_nPN);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_nPN of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_set_CSubClass_m_nPN
static int tolua_set_CSubClass_m_nPN(lua_State* tolua_S)
{
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_nPN'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->m_nPN = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_nNum of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_get_CSubClass_m_nNum
static int tolua_get_CSubClass_m_nNum(lua_State* tolua_S)
{
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_nNum'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->get_m_nNum());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: m_nNum of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_set_CSubClass_m_nNum
static int tolua_set_CSubClass_m_nNum(lua_State* tolua_S)
{
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_nNum'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->set_m_nNum(((int)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: m_pParent of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_get_CSubClass_m_pParent_ptr
static int tolua_get_CSubClass_m_pParent_ptr(lua_State* tolua_S)
{
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'm_pParent'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->get_m_pParent(),"CBaseClass");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __COthreBase__ of class  CSubClass */
#ifndef TOLUA_DISABLE_tolua_get_CSubClass___COthreBase__
static int tolua_get_CSubClass___COthreBase__(lua_State* tolua_S)
{
  CSubClass* self = (CSubClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__COthreBase__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<COthreBase*>(self), "COthreBase");
#else
   tolua_pushusertype(tolua_S,(void*)((COthreBase*)self), "COthreBase");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* function: FreeFunction */
#ifndef TOLUA_DISABLE_tolua_mytestClass_FreeFunction00
static int tolua_mytestClass_FreeFunction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int a = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   FreeFunction(a);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'FreeFunction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CBaseClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CBaseClass_new00
static int tolua_mytestClass_CBaseClass_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CBaseClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CBaseClass* tolua_ret = (CBaseClass*)  Mtolua_new((CBaseClass)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CBaseClass");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CBaseClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CBaseClass_new00_local
static int tolua_mytestClass_CBaseClass_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CBaseClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CBaseClass* tolua_ret = (CBaseClass*)  Mtolua_new((CBaseClass)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CBaseClass");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CBaseClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CBaseClass_delete00
static int tolua_mytestClass_CBaseClass_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CBaseClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CBaseClass* self = (CBaseClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: TestInvokePrintf of class  CBaseClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CBaseClass_TestInvokePrintf00
static int tolua_mytestClass_CBaseClass_TestInvokePrintf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CBaseClass",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CBaseClass* self = (CBaseClass*)  tolua_tousertype(tolua_S,1,0);
  const char* pStr = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'TestInvokePrintf'", NULL);
#endif
  {
   self->TestInvokePrintf(pStr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'TestInvokePrintf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: PrintVirtual of class  CBaseClass */
#ifndef TOLUA_DISABLE_tolua_mytestClass_CBaseClass_PrintVirtual00
static int tolua_mytestClass_CBaseClass_PrintVirtual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CBaseClass",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CBaseClass* self = (CBaseClass*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'PrintVirtual'", NULL);
#endif
  {
   self->PrintVirtual();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'PrintVirtual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_mytestClass_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"PKG_NUM",PKG_NUM);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"stTestBase","stTestBase","",tolua_collect_stTestBase);
  #else
  tolua_cclass(tolua_S,"stTestBase","stTestBase","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"stTestBase");
   tolua_function(tolua_S,"new",tolua_mytestClass_stTestBase_new00);
   tolua_function(tolua_S,"new_local",tolua_mytestClass_stTestBase_new00_local);
   tolua_function(tolua_S,".call",tolua_mytestClass_stTestBase_new00_local);
   tolua_variable(tolua_S,"nType",tolua_get_stTestBase_nType,tolua_set_stTestBase_nType);
   tolua_variable(tolua_S,"x",tolua_get_stTestBase_x,tolua_set_stTestBase_x);
   tolua_variable(tolua_S,"y",tolua_get_stTestBase_y,tolua_set_stTestBase_y);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"stChild","stChild","stTestBase",tolua_collect_stChild);
  #else
  tolua_cclass(tolua_S,"stChild","stChild","stTestBase",NULL);
  #endif
  tolua_beginmodule(tolua_S,"stChild");
   tolua_function(tolua_S,"new",tolua_mytestClass_stChild_new00);
   tolua_function(tolua_S,"new_local",tolua_mytestClass_stChild_new00_local);
   tolua_function(tolua_S,".call",tolua_mytestClass_stChild_new00_local);
   tolua_variable(tolua_S,"z",tolua_get_stChild_z,tolua_set_stChild_z);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"COthreBase","COthreBase","",tolua_collect_COthreBase);
  #else
  tolua_cclass(tolua_S,"COthreBase","COthreBase","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"COthreBase");
   tolua_function(tolua_S,"new",tolua_mytestClass_COthreBase_new00);
   tolua_function(tolua_S,"new_local",tolua_mytestClass_COthreBase_new00_local);
   tolua_function(tolua_S,".call",tolua_mytestClass_COthreBase_new00_local);
   tolua_function(tolua_S,"Print",tolua_mytestClass_COthreBase_Print00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"eGolal",eGolal);
  tolua_constant(tolua_S,"eGolal2",eGolal2);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CSubClass","CSubClass","CBaseClass",tolua_collect_CSubClass);
  #else
  tolua_cclass(tolua_S,"CSubClass","CSubClass","CBaseClass",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CSubClass");
   tolua_constant(tolua_S,"eGolal",CSubClass::eGolal);
   tolua_constant(tolua_S,"eGolal2",CSubClass::eGolal2);
   tolua_function(tolua_S,"new",tolua_mytestClass_CSubClass_new00);
   tolua_function(tolua_S,"new_local",tolua_mytestClass_CSubClass_new00_local);
   tolua_function(tolua_S,".call",tolua_mytestClass_CSubClass_new00_local);
   tolua_function(tolua_S,"new",tolua_mytestClass_CSubClass_new01);
   tolua_function(tolua_S,"new_local",tolua_mytestClass_CSubClass_new01_local);
   tolua_function(tolua_S,".call",tolua_mytestClass_CSubClass_new01_local);
   tolua_function(tolua_S,"delete",tolua_mytestClass_CSubClass_delete00);
   tolua_function(tolua_S,"PrintVirtual",tolua_mytestClass_CSubClass_PrintVirtual00);
   tolua_function(tolua_S,"FuncSub",tolua_mytestClass_CSubClass_FuncSub00);
   tolua_function(tolua_S,"StaticFunc",tolua_mytestClass_CSubClass_StaticFunc00);
   tolua_function(tolua_S,"FuncInline",tolua_mytestClass_CSubClass_FuncInline00);
   tolua_function(tolua_S,"PrintStruct",tolua_mytestClass_CSubClass_PrintStruct00);
   tolua_function(tolua_S,"TestOverload",tolua_mytestClass_CSubClass_TestOverload00);
   tolua_function(tolua_S,"TestOverload",tolua_mytestClass_CSubClass_TestOverload01);
   tolua_function(tolua_S,"get_m_pParent",tolua_mytestClass_CSubClass_get_m_pParent00);
   tolua_function(tolua_S,"set_m_nNum",tolua_mytestClass_CSubClass_set_m_nNum00);
   tolua_function(tolua_S,"get_m_nNum",tolua_mytestClass_CSubClass_get_m_nNum00);
   tolua_function(tolua_S,"Swap",tolua_mytestClass_CSubClass_Swap00);
   tolua_variable(tolua_S,"m_nPN",tolua_get_CSubClass_m_nPN,tolua_set_CSubClass_m_nPN);
   tolua_variable(tolua_S,"m_nNum",tolua_get_CSubClass_m_nNum,tolua_set_CSubClass_m_nNum);
   tolua_variable(tolua_S,"m_pParent",tolua_get_CSubClass_m_pParent_ptr,NULL);
   tolua_variable(tolua_S,"__COthreBase__",tolua_get_CSubClass___COthreBase__,NULL);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"FreeFunction",tolua_mytestClass_FreeFunction00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CBaseClass","CBaseClass","",tolua_collect_CBaseClass);
  #else
  tolua_cclass(tolua_S,"CBaseClass","CBaseClass","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CBaseClass");
   tolua_function(tolua_S,"new",tolua_mytestClass_CBaseClass_new00);
   tolua_function(tolua_S,"new_local",tolua_mytestClass_CBaseClass_new00_local);
   tolua_function(tolua_S,".call",tolua_mytestClass_CBaseClass_new00_local);
   tolua_function(tolua_S,"delete",tolua_mytestClass_CBaseClass_delete00);
   tolua_function(tolua_S,"TestInvokePrintf",tolua_mytestClass_CBaseClass_TestInvokePrintf00);
   tolua_function(tolua_S,"PrintVirtual",tolua_mytestClass_CBaseClass_PrintVirtual00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_mytestClass (lua_State* tolua_S) {
 return tolua_mytestClass_open(tolua_S);
};
#endif

