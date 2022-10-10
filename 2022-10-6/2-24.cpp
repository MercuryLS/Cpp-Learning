#include<iostream>
using namespace std;
int main()
{
    char c;
    do{
        cout<<"现在正在下雨吗？(y或n)"<<endl;
        cin>>c;
        if(c=='y')cout<<"现在正在下雨。"<<endl;
        else if(c=='n')cout<<"现在没有下雨。"<<endl;
    }while(c!='y'&&c!='n');//如果不是y或n则重新输入
    return 0;   
}