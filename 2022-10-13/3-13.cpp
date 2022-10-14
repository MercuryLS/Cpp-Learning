#include<iostream>
#include<cmath>
using namespace std;

int Fibonacci(int n)
{
	int m; 
	if(n==1||n==2)
	return 1;
	else
    m=Fibonacci(n-1)+Fibonacci(n-2);
	return m;
	
}

int main()
{
	cout<<"Please input the number of items in a sequence:"; 
	int n;
	cin>>n; 
	cout<<"It's value is:"<<Fibonacci(n)<<endl;
	return 0;
 }