#include<iostream>
using namespace std;
int main()
{
    char c;
    do{
        cout<<"��������������(y��n)"<<endl;
        cin>>c;
        if(c=='y')cout<<"�����������ꡣ"<<endl;
        else if(c=='n')cout<<"����û�����ꡣ"<<endl;
    }while(c!='y'&&c!='n');//�������y��n����������
    return 0;   
}