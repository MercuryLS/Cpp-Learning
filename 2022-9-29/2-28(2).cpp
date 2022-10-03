#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, y, z, k;
	x = 2;
	do
	{
		k = 1;
		y = sqrt(x);
		z = 2;
		do
		{
			if (x % z == 0)
			{
				break;
			}
			z++;
		} while (z <= y);
		if (x % z || x == 2||x==3)
		{
			cout << x << endl;
		}
		x++;
	} while (x <= 100);
	return 0;
}