#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	int n = 90;
	int m = 0;
	while (m!=n)
	{
		cout << "���������ֵ:";
		cin >> m;
		if (n > m)
			cout << "�µ�ֵ����ʵֵС" << endl;
		else if (n < m)
			cout << "�µ�ֵ����ʵֵ��" << endl;
		else
			cout << "��ȷ" << endl;
	}
	return 0;
}