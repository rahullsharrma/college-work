#include<iostream>
using namespace std;
int main()
{
    float sal;
    cout<<"Enter Your Salary Here=";
    cin>>sal;
    if (sal>15000)
   { cout<<"Group A Employee"; }
    else if (sal>=10000 && sal<=15000)
   { cout<<"Group B Employee"; }
     else if (sal>=5000 && sal<=10000)
   { cout<<"Group C Employee"; }
    else 
   { cout<<"Group D Employee"; }
   return 0;
}