#include <iostream>
using namespace std;

int main()
{
    int i, fact = 1, no;
    cout << "ENter any number!!";
    cin >> no;

    for (i = 1; i <= no; i++)
    {
        fact = fact * i;
    }

    cout << "This is your Factorial : ";
    
    cout << fact;
    return 0;
}