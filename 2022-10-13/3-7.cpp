#include<iostream>
using namespace std;
unsigned short int a,b;
short int division(unsigned short int a,unsigned short int b);
int main()
{
    cout<<"Please input two numbers:";
    cin>>a>>b;
    cout<<division(a,b)<<endl;
    return 0;
}

short int division(unsigned short int a,unsigned short int b)
{
    if(b) return a/b;
    else return -1;
}