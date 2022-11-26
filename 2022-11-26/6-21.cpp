#include<iostream>
using namespace std;
#define N 1000

int count(char *str)
{
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char sentence[N];
    cout<<"Please input a sentence."<<endl;
    gets(sentence);
    cout<<"The are "<<count(sentence)<<" alphabes in the sentence.";
    return 0;
}