#include <iostream>
using namespace std;

int Add(int x,int y)
{ return x+y; }

int Add(int x,int y, int z){ return x+y+z; }

int main()
{
    int a=3,b=4,c=5;
    cout<<a<<"+"<<b<<"="<<Add(a,b)<<endl;
    cout<<a<<"+"<<b<<"+"<<c<<"="<<Add(a,b,c)<<endl;
    return 0;
}