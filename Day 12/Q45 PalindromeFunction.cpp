//Palindrome Function
#include <iostream>
using namespace std;
int Palin(int n)
{
    int d,r=0;
    while(n>0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    return r;
}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    if(n==Palin(n))
    cout<<n<<" is a Palindrome Number.";
    else
    cout<<n<<" is not a Palindrome Number.";
    return 0;
}