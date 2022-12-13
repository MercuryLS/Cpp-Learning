#include<iostream>
using namespace std;
struct Base1{int x;};
struct Base2{float y;};
struct Derived:Base1,Base2{};
int main(){
    Derived* pd=new Derived;
    pd->x=1;pd->y=2.0f;
    void* pv=pd;
    Base2* pb=static_cast<Base2*>(pv);
    //只有当void指针转回原类型指针时才不会出错，这里把Derived*转为Base*是不安全的
    cout<<pd->y<<" "<<pb->y<<endl;
    delete pb;
    return 0;
}