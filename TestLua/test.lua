par = CBaseClass:new();
cb = CSubClass:new(45,par);
cb:FuncSub();
cb:TestInvokePrintf("hello lua and C++");
cb.m_pParent:TestInvokePrintf("property ok");
cb.m_nPN = 3 ;
cb:TestInvokePrintf("C++"..cb.m_nPN );
for i = 0 , 3,2 do
    cb.m_nPN = cb.m_nPN + i ;
    cb:TestInvokePrintf( i.."C++"..cb.m_nPN );
end

base = stTestBase:new();
child = stChild:new();
base.x = 10 ;
base.y = 20 ;
child.x = 3;
child.y = 34;
child.z = 4;
cb:PrintStruct(child);
cb:PrintStruct(base);
cb.__COthreBase__:Print();  -- "��̳еĴ�����" 
cb:PrintVirtual();
par:PrintVirtual();
cb:TestOverload(2);   --�����Ժ������ء�
cb:TestOverload(3,4);
FreeFunction(4);  -- "����ȫ�ֺ���"
CSubClass:StaticFunc();  -- "���Ծ�̬��Ա����"
local a = 3 ;
b = 6;
c = 0 ;
x,y = cb:Swap(a,b,c);   --"ͨ���������ֵ ��ģ�� C++�� ����ͨ�����úͲ��� �������ֵ"
cb:TestInvokePrintf( "number: a = "..x.."  b = "..y );
cb:TestInvokePrintf(PKG_NUM.." = PKG_NUM");  -- "������ֵ�궨��"
PKG_NUM = 6;    -- "�ǳ�Σ�յĲ�������ı�궨���ֵ��������lua���ǺϷ���"
cb:TestInvokePrintf(PKG_NUM.." = PKG_NUM");     

cb:TestInvokePrintf("golbol enum "..eGolal);  
--cb:TestInvokePrintf("golbol enum "..CSubClass.eGlobalEnum.eGolal);     --��ö�ٵ�������������ʧ��eGlobalEnum ��Ч����
--CSubClass.eGolal = 10; -- "�ǳ�Σ�յĲ�������ı�ö�ٵ�ֵ��������lua���ǺϷ���"
cb:TestInvokePrintf("golbol enum "..CSubClass.eGolal);     --��ö�ٵ�������������ʧ��eGlobalEnum ��Ч���� ����class������Ч�ġ�
cb:TestInvokePrintf("golbol2 enum "..cb.eGolal2);
  
