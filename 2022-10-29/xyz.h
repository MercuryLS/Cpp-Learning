#include<iostream>
using namespace std;
 
class X
{
    public:
        X():i(0)
        {}
        friend class Y;
        friend class Z;
        friend void h(X *p);
        void show()
        {
            cout<<i<<endl;
        }
    private:
        int i;
};
 
class Y
{
    public:
        void g(X *p);
 
};
 
class Z
{   
    public:
        void f(X *p);
 
};
 
void Y::g(X *p)
{
    p->i++;
}
 
void Z::f(X *p)
{
    p->i+=5;
}
 
void h(X *p)
{
    p->i+=10;
}