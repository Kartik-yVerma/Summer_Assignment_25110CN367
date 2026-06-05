#include <iostream>
using namespace std;
int main()
{
    int n,s=0,d;
    cout<<"Enter a Number:";
    cin>>n;
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    cout<<"Sum Of Digits : "<<s;
    return 0;
}