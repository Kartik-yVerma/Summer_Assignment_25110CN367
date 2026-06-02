//Binary To Decimal
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,d,deci=0,b=0;
    cout<<"Enter a Binary number: ";
    cin>>n;
    while (n > 0)
    {
        d=n%10;
        deci+=d*(int)pow(2,b); 
        n=n/10;
        b++;
    }
    cout<<"Decimal: "<<deci;
    return 0;
}