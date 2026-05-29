#include <iostream>
using namespace std;
int main()
{
    int n,p=1,d;
    cout<<"Enter a Number:";
    cin>>n;
    while(n>0)
    {
        d=n%10;
        p=p*d;
        n=n/10;
    }
    cout<<"Product Of Digits : "<<p;
    return 0;
}