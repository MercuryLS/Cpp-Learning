#include<iostream>
#include<cmath>
using namespace std;
const double pi =3.1415926535;

class Shape
{
public:
    Shape(){};
    ~Shape(){};
    virtual double getArea()=0;
    virtual double getPerim()=0;
};

class Circle:public Shape
{
public:
    Circle()
    {
        cout<<"Default constructor called"<<endl;
    };
    Circle(double r):itsRadius(r)
    {
        cout<<"Constructor called"<<endl;
    };
    ~Circle()
    {
        cout<<"Deconstructor called"<<endl;
    };
    double getArea()
    {
        return pi*itsRadius*itsRadius;
    }
    double getPerim()
    {
        return 2*pi*itsRadius;
    }
private:
    double itsRadius;
};

class Rectangle:public Shape
{
public:
    Rectangle()
    {
        cout<<"Default constructor called"<<endl;
    };
    ~Rectangle()
    {
        cout<<"Deconstructor called"<<endl;
    };
    Rectangle(double a,double b,double c):len1(a),len2(b),len3(c)
    {
        cout<<"Constructor called"<<endl;
    }
    double getArea()
    {
        double p=(len1+len2+len3)/2;
        if(len1+len2>len3&&len1+len3>len2&&len2+len3>len1&&len1>0&&len2>0&&len3>0)
        {
            return sqrt(p*(p-len1)*(p-len2)*(p-len3));
        }
        else
        {
            cout<<"Error!"<<endl;
            return 0;
        }
    }
    double getPerim()
    {
        if(len1+len2>len3&&len1+len3>len2&&len2+len3>len1&&len1>0&&len2>0&&len3>0)
        {
            return len1+len2+len3;
        }
        else
        {
            cout<<"Error!"<<endl;
            return 0;
        }
    }
private:
    double len1,len2,len3;
};

int main()
{
    Shape *shptr1,*shptr2;
    shptr1=new Circle(4);
    cout<<"The area of the circle is:"<<shptr1->getArea()<<endl;
    cout<<"The perimeter of the circle is :"<<shptr1->getPerim()<<endl;
    delete shptr1;
    shptr2=new Rectangle(3,4,5);
    cout<<"The area of the circle is:"<<shptr2->getArea()<<endl;
    cout<<"The perimeter of the circle is :"<<shptr2->getPerim()<<endl;
    return 0;
}