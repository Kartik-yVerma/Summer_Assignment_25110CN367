#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,m1,d,c=0,r=0;
    cout<<"Enter the Number: ";
    cin>>n;
    m=m1=n;
    while(m>0)
    {
        c++;
        m=m/10;
    }
    while(m1>0)
    {
        d=m1%10;
        r=r+(int)pow(d,c);
        m1=m1/10;
    }
    if(n==r)
        cout<<n<<" is an Armstrong Number.";
    else
        cout<<n<<" is not an Armstrong Number.";
    return 0;
}