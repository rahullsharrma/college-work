#include<iostream>
using namespace std;
int main()
{
    int i=1,f=0,f1=1,f2=1;
    cout<<"--Fibonnaci Series Upto first 10 terms--";
    do
    {
        i++;
        cout<<"\n"<<f;
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    while(i<=10);
}
