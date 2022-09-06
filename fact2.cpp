#include<iostream>
using namespace std;
class Factorial 
{
    private:
    int fact,num;
    public:
    Factorial()
    { fact=1;}
    void factorial();
    void display();
};
void Factorial::factorial()
{
    cout<<"Enter a number="<<endl;
    cin>>num;
    for( int i=1;i<=num;i++)
    fact=fact*i;
}
void Factorial::display()
{
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;
}
int main()
{ Factorial fact;
fact.factorial();
fact.display();
return 0;
}

