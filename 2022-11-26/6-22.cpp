#include<iostream>
#include<string>
using namespace std;
#define N 1000

void reverse(string &theStr)
{
        if(theStr.length()%2==0)
        {
                for(int i=0;i<theStr.length()/2;i++)
                {
                        char temp;
                        temp=theStr[theStr.length()-i-1];
                        theStr[theStr.length()-i-1]=theStr[i];
                        theStr[i]=temp;
                }
        }
        else
        {
                for(int i=0;i<(theStr.length()-1)/2;i++)
                {
                        char temp;
                        temp=theStr[theStr.length()-i-1];
                        theStr[theStr.length()-i-1]=theStr[i];
                        theStr[i]=temp;
                }
        }
}

int main()
{
        string s;
        cout<<"Please input a sentence:";
        cin>>s;
        reverse(s);
        cout<<"\n";
        cout<<s;
}