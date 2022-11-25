#include<iostream>
using namespace std;
class Ctype
{
private:
    int a;
    static int s;
public:
    void Print(  ) ;
    Ctype( int x=0 );
};

void Ctype::Print(  )
{
    cout<<"a="<<++a<<endl;
    cout<<"s="<<++s<<endl;
}

Ctype::Ctype(int x)
{
    a=x;
}

int Ctype::s=0; //静态数据成员必须在类外初始化，前面不能加static

int main( )
{
    Ctype c1,c2,c3;
    c1.Print();
    c2.Print();
    c3.Print();
    return 0;
}