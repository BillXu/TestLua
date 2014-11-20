#include "testClass2.h"
void CSubClass::FuncSub()
{
	printf("this is sub function number %d \n", m_nNum);
	if ( m_pParent )
	{
		m_pParent->TestInvokePrintf("can invoke parent");
	}
}

void CSubClass::PrintStruct(stTestBase* pS )
{
	if ( pS->nType == 0 )
	{
		printf( "this base x = %d , y = %d \n",pS->x,pS->y );
	}
	else
	{
		stChild* pc = (stChild*)pS ;
		printf( "this child x = %d , y = %d , z = %d\n",pc->x,pc->y ,pc->z);
	}
}