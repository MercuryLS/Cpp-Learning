#include<iostream>
using namespace std;

int main()
{
    short int *p1,*p2;
    long int *p3,*p4;
    short score[10]={84,65,77,60,88,86,92,93,70,66};
    p1=&score[0];
    p2=score+4;
    cout<<p2-p1;
    p3=(long int *)&score[0];
    p4=(long int *)(score+4);
    cout<<p4-p3;
    return 0;
}