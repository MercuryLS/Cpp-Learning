#include <iostream>
using namespace std;
class BaseClass{
    public:
        void fn1(){cout<<"Base_fn1"<<endl;}
        void fn2(){cout<<"Base_fn2"<<endl;}
};
class DerivedClass:public BaseClass{
    public:
        void fn1(){cout<<"Derived_fn1"<<endl;}
        void fn2(){cout<<"Derived_fn2"<<endl;}
};
int main(){
    DerivedClass d;
    d.fn1();
    DerivedClass* pd=&d;
    pd->fn2();
    BaseClass* pd1=&d;
    pd1->fn1();
    return 0;
}