#include<iostream>
using namespace std;

double fun(double f)
{
    double c;
    c=5.0/9.0*(f-32);
    return c;
}

int main()
{
    double f;
    cout<<"请输入华氏温度:";
    cin>>f;
    cout<<"摄氏温度为:"<<fun(f);
    return 0;
}