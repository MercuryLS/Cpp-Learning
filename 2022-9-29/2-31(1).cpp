#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	int n = 90;
	int m = 0;
	while (m!=n)
	{
		cout << "猜这个数的值:";
		cin >> m;
		if (n > m)
			cout << "猜的值较真实值小" << endl;
		else if (n < m)
			cout << "猜的值较真实值大" << endl;
		else
			cout << "正确" << endl;
	}
	return 0;
}