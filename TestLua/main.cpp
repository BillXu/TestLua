#include <iostream>
#include "mytestClass.h"
extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

#include "tolua++.h"
#include "lua.h"
#include <string>
#include "testClass2.h"

TOLUA_API int tolua_mytestClass_open (lua_State* tolua_S);


int main ()
{
	lua_State* L = lua_open();
	//luaopen_base(L);
	luaL_openlibs(L);
 
	//tolua_tClass_open( L );
	tolua_mytestClass_open(L);

	// ���ýű�����
	// �ڽű��оͿ��������ʹ���������
   //	std::string str = "local cb = CBaseClass::new(); \
cb:TestInvokePrintf(\"hello lua and C++\");";

	//luaL_dostring(L,str.c_str());
	luaL_dofile(L,"../test.lua");
	printf("%s",lua_tostring(L, -1));
	lua_close(L);
	getchar();
	return 0;
}