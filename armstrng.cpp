#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int sum,arm;
    cout<<"--Armstrong Numbers are--";
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<10;k++)
            {
                sum=i*100+j*10+k*1;
                arm=pow(i,3)+pow(j,3)+pow(k,3);
                if(sum==arm)
                {
                    cout<<"\n"<<sum;
                }
            }
        }
    }
}
