#include <iostream>
using namespace std;

int abs(int x)
{ return x>0?x:-x; }

double abs(double x)
{ return x>0?x:-x; }

long abs(long x)
{ return x>0?x:-x; }

int main()
{
    int x1=4;
    double x2=5.51236;
    long x3=6L;
    cout<<"|x1|="<<abs(x1)<<endl;
    cout<<"|x2|="<<abs(x2)<<endl;
    cout<<"|x3|="<<abs(x3)<<endl;
    return 0;
}