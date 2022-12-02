#include <iostream>
using namespace std;
int main(){
    //int *p;错误：p未初始化，会出现地址安全性隐患
    int a,*p=&a;
    *p=9;
    cout<<"the value at p:"<<*p;
    getchar();
    return 0;
}