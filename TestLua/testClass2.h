#pragma once
#include "mytestClass.h"

struct  stTestBase 
{
	stTestBase(){ x = y = 0 ;nType = 0 ; }
	int nType ;
	int x ;
	int y ;
};

struct stChild
	:public stTestBase
{
	stChild(){ z = 0 ;nType = 1 ;}
	int z ;
};

class COthreBase
{
public:
	COthreBase(){};
	void Print(){ printf("multi ji cheng\n");}
};

class CSubClass
	:public CBaseClass,
	public COthreBase 
{
public:
	CSubClass(){m_nNum = 0 ;m_pParent = NULL ;}
	CSubClass( int a ,CBaseClass* pParent ){ m_nNum = a ;m_pParent = pParent ;}
	~CSubClass(){}
	void PrintVirtual(){ printf("this is Child \n");};
	void FuncSub();
	void FuncInline(){ printf("this is inline function\n");}
	void PrintStruct(stTestBase* pS );
	CBaseClass* get_m_pParent(){ return m_pParent ; }
	void set_m_nNum(int n ) { m_nNum = n ; };
	int get_m_nNum(){ return m_nNum ; }
public:
	int m_nPN ;
protected:
	int m_nNum ;
	CBaseClass* m_pParent ; 
};