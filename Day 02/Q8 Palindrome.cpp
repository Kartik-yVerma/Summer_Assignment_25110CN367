#include <iostream>
using namespace std;
int main()
{
    int n,m,r=0,d;
    cout<<"Enter a Number:";
    cin>>n;
    m=n;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(r==m)
    {
        cout<<"The Number "<<m<<" is Palindrome";
    }
    else
    {
        cout<<"The Number "<<m<<" is not Palindrome";
    }
    return 0;
}