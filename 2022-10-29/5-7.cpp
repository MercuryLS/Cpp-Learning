#include<iostream>
using namespace std;
class cat
{
public:
    static void getNumOfCats()
    {
        cout<<"The num of cats is:"<<numOfCats<<endl;
    }
private:
    static int numOfCats;
};

int cat::numOfCats=0;

int main()
{
    cat cattt;
    cattt.getNumOfCats();
    return 0;
}