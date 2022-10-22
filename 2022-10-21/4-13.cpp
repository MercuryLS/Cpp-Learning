#include<iostream>
using namespace std;
const double pi=3.1415926535;

class Circle
{
public:
    Circle(double r):radius(r){}
    ~Circle(){}
    double getAera()
    {
        return pi*radius*radius;
    }
private:
    double radius;
};

int main()
{
    double r;
    cout<<"Please input the radius of the circle:"<<endl;
    cin>>r;
    Circle O(r);
    cout<<"Its area is:"<<O.getAera()<<endl;
    return 0;
}