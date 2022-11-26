#include<iostream>
using namespace std;
const double pi =3.1415926535;

class SimpleCircle
{
public:
    SimpleCircle(int *p):itsRadius(p)
    {
        cout<<"Constructor called"<<endl;
    }
    SimpleCircle(const SimpleCircle& Circle0)
    {
        itsRadius=new int;
        *(itsRadius)=*(Circle0.itsRadius);
    }
    ~SimpleCircle()
    {
    }
    double S()
    {
        return pi*(*itsRadius)*(*itsRadius);
    }
    double C()
    {
        return 2*pi*(*itsRadius);
    }
private:
    int *itsRadius;
};


int main()
{
    int a;
    cout<<"请输入一个整数:";
    cin>>a;
    SimpleCircle S1(&a);
    cout<<"周长："<<S1.C()<<endl;
    cout<<"面积:"<<S1.S();
}