#pragma once
#include<iostream>
class CBaseClass
{
public:
	CBaseClass(){}
	virtual ~CBaseClass(){}
	void TestInvokePrintf( const char* pStr );
	virtual void PrintVirtual(){ printf("this is super \n");};
};