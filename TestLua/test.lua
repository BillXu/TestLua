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
cb:TestOverload(2);   --“测试函数重载”
cb:TestOverload(3,4);
FreeFunction(4);  -- "测试全局函数"
CSubClass:StaticFunc();  -- "测试静态成员函数"
local a = 3 ;
b = 6;
c = 0 ;
x,y = cb:Swap(a,b,c);   --"通过多个返回值 来模拟 C++中 可以通过引用和参数 传出结果值"
cb:TestInvokePrintf( "number: a = "..x.."  b = "..y );
cb:TestInvokePrintf(PKG_NUM.." = PKG_NUM");  -- "测试数值宏定义"
PKG_NUM = 6;    -- "非常危险的操作，会改变宏定义的值，但是在lua里是合法的"
cb:TestInvokePrintf(PKG_NUM.." = PKG_NUM");     

cb:TestInvokePrintf("golbol enum "..eGolal);  
--cb:TestInvokePrintf("golbol enum "..CSubClass.eGlobalEnum.eGolal);     --“枚举的名字作用域将消失，eGlobalEnum 无效果”
--CSubClass.eGolal = 10; -- "非常危险的操作，会改变枚举的值，但是在lua里是合法的"
cb:TestInvokePrintf("golbol enum "..CSubClass.eGolal);     --“枚举的名字作用域将消失，eGlobalEnum 无效果， 但是class域还是有效的”
cb:TestInvokePrintf("golbol2 enum "..cb.eGolal2);
  
