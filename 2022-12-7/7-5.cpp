#include <iostream>
using namespace std;
const double pi=3.1415926535;

class Shape
{
public:
    Shape()
    {
    }
    ~Shape()
    {
    }
    void getArea()
    {
        cout<<"Shape::getArea"<<endl;
    }
};

class Rectangle:public Shape
{
public:
    Rectangle(){};
    Rectangle(float len,float wid)
    {
        itslength=len;
        itswidth=wid;
    }
    ~Rectangle()
    {
    }
    void getArea()
    {
        cout<<"Rectangle's area is:"<<itslength*itswidth/2<<endl;
    }
private:
    float itslength,itswidth;
};

class Circle:public Shape
{
public:
    Circle(float r)
    {
        itsradius=r;
    }
    ~Circle()
    {
    }
    void getArea()
    {
        cout<<"Circle's area is:"<<pi*itsradius*itsradius<<endl;
    }
private:
    float itsradius;
};

class Square:public Rectangle
{
public:
    Square(float lenth):itslenth(lenth)
    {
    }
    ~Square()
    {
    }
    void getArea()
    {
        cout<<"Square's area is:"<<itslenth*itslenth<<endl;
    }
private:
    float itslenth;
};

int main()
{
    Shape SH;
    Circle c1(4);
    c1.getArea();
    Rectangle r1(3,4);
    r1.getArea();
    Square s1(4);
    s1.getArea();
}