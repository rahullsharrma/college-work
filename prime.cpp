#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,count=0;
    cout<<"--Prime Numbers Upto 1000 are--";
    for(i=2;i<1000;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && i!=1)
        cout<<i<<"\t";
        count=0;
    }
    return 0;
}