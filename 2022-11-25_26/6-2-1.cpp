#include<iostream>
using namespace std;

int main()
{
    long int *p2;
    short score[10]={84,65,77,60,88,86,92,93,70,66};
    p2=(long int*)&score[0];
    p2++;
    cout<<*p2<<"   "<<p2;
    p2--;
    cout<<*p2<<"   "<<p2;
    return 0;
}