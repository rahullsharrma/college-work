#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter Your Number=";
    cin>>i;
    if(i%2==0 && i!=0)
    { cout<<"Entered Number is Even."; }
    else if (i%2!=0 && i!=0)
    { cout<<"Entered Number is Odd."; }
    else 
    { cout<<"Neither Even Nor Odd."; }
    return 0;
}