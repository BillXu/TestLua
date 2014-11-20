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
cb.__COthreBase__:Print();  -- "多继承的处理方法" 
cb:PrintVirtual();
par:PrintVirtual();