#include<iostream>
using namespace std;
int getPower(int x,int y);
double getPower(double x,int y);
int a,m;
double b;

int main()
{
    cout<<"Please input a,b,m:";
    cin>>a>>b>>m;
    cout<<"The value is:"<<getPower(a,m)<<endl;
    cout<<"The value is:"<<getPower(b,m)<<endl;
    return 0;
}

int getPower(int x,int y)
{
    if(y<0) return 0;
    else
    {
        int i,z=1;
        for(i=1;i<=y;i++)
        {
            z*=x;
        }
        return z;
    }
}

double getPower(double x,int y)
{
    if(y<0) return 0;
    else
    {
        int i;
        double z=1;
        for(i=1;i<=y;i++)
        {
            z*=x;
        }
        return z;
    }
}