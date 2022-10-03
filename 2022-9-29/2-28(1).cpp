#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x, y, z, k;
	x = 2;
	while (x <= 100)
	{
		k = 1;
		y = sqrt(x);
		z = 2;
		while (z <= y)
		{
			if (x % z == 0)
			{
				break;
			}
			z++;
		}
		if (x % z||x==2)
		{
			cout << x << endl;
		}
		x++;
	}
	return 0;
}