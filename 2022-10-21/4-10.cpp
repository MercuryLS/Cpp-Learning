#include<iostream> 
using namespace std; 

class date//日期类
{
public: 
	date(int x=0,int y=0,int z=0) 
	{ 
	year=x;
    month=y;
    day=z; 
	} 
	date(const date &d); 
	void setdate(); 
	void showdate(); 
private: 
	int year,month,day;
}; 

date::date(const date &d)
{ 
	year=d.year; 
	month=d.month; 
	day=d.day; 
} 

void date::setdate()
{ 
	int a,b,c;
    cout<<"输入日期"; 
	cin>>a>>b>>c; 
	year=a; 
	month=b; 
	day=c; 
} 

void date::showdate()
{
	cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
} 

class people//“人”类
{ 
public: 
	people(date Bir,long int num,long int idn,char sex); 
	people(const people &p); 
	void setpeople(); 
	void showpeople(); 
private: 
	int number,idnumber; 
	char sex; 
	date birthday; 
}; 

people::people(date Bir,long int num=0,long int idn=0,char sex='m')
{
	birthday=Bir; 
	number=num; 
	idnumber=idn; 
	sex=sex; 
} 

people::people(const people &p)
{ 
	number=p.number; 
	birthday=p.birthday; 
	sex=p.sex; 
	idnumber=p.idnumber; 
} 

void people::setpeople()
{
	long int b,c; 
	char d; 
    cout<<"号码:"; 
	cin>>b; 
	cout<<"id:"; 
	cin>>c; 
	cout<<"性别:"; 
	cin>>d; 
	cout<<endl;  
	number=b; 
	idnumber=c; 
	sex=d; 
} 
void people::showpeople()
{ 
	cout<<"number:"<<number<<endl; 
	cout<<"idnumber:"<<number<<endl; 
	cout<<"sex:"<<sex<<endl; 
	cout<<"birthday:";
	birthday.showdate(); 
} 

int main() 
{
	date a; 
	a.setdate(); 
	people p1(a); 
	p1.setpeople(); 
	people p2(p1); 
	p1.showpeople(); 
	return 0; 
}