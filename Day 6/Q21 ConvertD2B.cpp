//Decimal to Binary 
#include <iostream>
using namespace std;
int main()
{
    int n;
    string b=""; //Binary Default Initialisation
    cout<<"Enter a decimal number: ";
    cin>>n;
    if (n == 0)
    {
        cout<<"Binary: 0";
        return 0;
    }
    while (n > 0)
    {
        b=char((n%2)+'0')+b;
        n=n/2;
    }
    cout<<"Binary: "<<b;
    return 0;
}