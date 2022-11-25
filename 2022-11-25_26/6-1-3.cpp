#include <iostream>
using namespace std;
void tryToModifyArray(const int[]);
int main()
{
    int a[] = {10, 20, 30};
    tryToModifyArray(a);
    cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';
}
void tryToModifyArray(const int b[])
{
    b[0] /= 2;
    b[1] /= 2;
    b[2] /= 2;
    //错误：b[]为const类型数组，不能改变数组元素值
}
