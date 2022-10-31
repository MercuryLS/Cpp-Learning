#include <iostream>
using namespace std;

void sum(int num=10)
{
    int i,s=0;
    for(i=1;i<=num;i++)
    s=s+i;
    cout<<"sum is:"<<s<<endl;
}

int main()
{
    sum(100);
    sum();
    return 0;
}