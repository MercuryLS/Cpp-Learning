#include <iostream>
using namespace std;
int main(){
    //int *p;����pδ��ʼ��������ֵ�ַ��ȫ������
    int a,*p=&a;
    *p=9;
    cout<<"the value at p:"<<*p;
    getchar();
    return 0;
}