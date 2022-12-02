#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    
    double *p=reinterpret_cast<double*>(&arr[0]);
    //错误：用reinterpret_cast转换指针类型是不安全的

    *p=5;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    getchar();
    return 0;
}