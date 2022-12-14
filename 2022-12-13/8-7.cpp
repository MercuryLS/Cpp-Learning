#include<iostream>
using namespace std;

class Point
{
public:
    Point(double x,double y):itsX(x),itsY(y)
    {
        cout<<"Construter called"<<endl;
    }
    ~Point()
    {
        cout<<"Deconstructer called"<<endl;
    }
    Point& operator ++ ();
    Point& operator -- ();
    Point operator ++ (int);
    Point operator -- (int);
    double itsX,itsY;
};

Point& Point::operator ++ ()
{
    itsX++;
    itsY++;
    return *this;
}

Point& Point::operator -- ()
{
    itsX--;
    itsY--;
    return *this;
}

Point Point::operator ++ (int)
{
    Point temp=*this;
    itsX++;
    itsY++;
    return temp;
}
Point Point::operator -- (int)
{
    Point temp=*this;
    itsX--;
    itsY--;
    return temp;
}

int main()
{
    Point p(1,2);
    cout<<'('<<p.itsX<<","<<p.itsY<<')'<<endl;
    p++;
    cout<<'('<<p.itsX<<","<<p.itsY<<')'<<endl;
    p--;
    cout<<'('<<p.itsX<<","<<p.itsY<<')'<<endl;
    ++p;
    cout<<'('<<p.itsX<<","<<p.itsY<<')'<<endl;
    --p;
    cout<<'('<<p.itsX<<","<<p.itsY<<')'<<endl;
}