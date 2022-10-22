#include<iostream>
using namespace std;

enum core_number {one,two,four};
enum bit_number {bit_32,bit_64};
enum hyper_threading_support{Y,N};

class CPU
{
public:
    CPU(unsigned f,core_number core_n,bit_number bit_n,hyper_threading_support mode):frequence(f),core_num(core_n),bit_num(bit_n),support_mode(mode){}
    void display();
private:
    unsigned frequence:32;
    core_number core_num:3;
    bit_number bit_num:2;
    hyper_threading_support support_mode:2;
};

void CPU::display()
{
    cout<<"The frequence is:"<<frequence<<endl;
    cout<<"The core number is:";
    switch(static_cast<int>(core_num))
    {
        case 0:cout<<"1 core"<<endl;break;
        case 1:cout<<"2 core"<<endl;break;
        case 2:cout<<"4 core"<<endl;break;
    }

    cout<<"bits:";
    switch(static_cast<int>(bit_num))
    {
        case 0:cout<<"32"<<endl;break;
        case 1:cout<<"64"<<endl;break;
    }

    cout<<"Hyper threading support mode is:";
    switch(static_cast<int>(support_mode))
   {
        case 0:cout<<"Y"<<endl;break;
        case 1:cout<<"N"<<endl;break;
    }
}

int main()
{
    unsigned a;
    core_number core_n;
    bit_number bit_n;
    hyper_threading_support mode;
    CPU c(3000000000,four,bit_64,Y);
    c.display();
    return 0;
}