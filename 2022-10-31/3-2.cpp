#include<iostream>
using namespace std;

void swap(int &v1, int &v2)
{
    if(v1 == v2)
        return;
    int temp = v2;
    v2 = v1;
    v1 = temp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,a);
    swap(a,b);
    return 0;
}