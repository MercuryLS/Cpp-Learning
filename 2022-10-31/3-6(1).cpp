#include <iostream>
using namespace std;

inline int max(int x,int y)
{
return x>y?x:y; 
}       

int main()
{
    int a,b,c;
    cout<<"Input two data:";
    cin>>a>>b;
    cout<<"The max is:"<<max(a,b)<<endl;
    return 0;
}