﻿#include <iostream>
using namespace std;
int main()
{
    const double pi(3.14159);//变量的命名
    int radius;
    cout<<"Please enter the radius!\n";
    cin>>radius;
    cout<<"The radius is:"<<radius<<'\n';
    cout<<"PI is:"<<pi<<'\n';
    cout<<"Please enter a different radius!\n"; 
    cin>>radius;
    cout<<"Now the radius is changed to:"<<radius<<'\n';
    cout<<"PI is still:"<<pi<<'\n';
    //cin>>pi;
    return 0;
}