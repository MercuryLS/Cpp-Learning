#include<iostream>
using namespace std;

class Complex
{
public:
    Complex(double r=0,double i=0)
    {
        real=r;
        imag=i; 
    }
    void show()
    {
        cout<<"The value is:"<<real<<"+"<<imag<<"i"<<endl;
    }
    void add(Complex z)
    {
        real+=z.real;
        imag+=z.imag;
    }
private:
    double real,imag;
};

int main()
{
    Complex c1(3,5);
    Complex c2=4.5;
    c1.add(c2);
    c1.show();
    return 0;
}