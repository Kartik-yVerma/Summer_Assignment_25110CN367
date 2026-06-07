//Armstrong Function
#include<iostream>
#include<cmath>
using namespace std;
int Arm(int n)
{
    int m,d,c=0,r=0;
    m=n;
    while(n>0) //Digit Count
    {
        c++;
        n=n/10;
    }
    while(m>0) //Armstrong Check
    {
        d=m%10;
        r=r+(int)pow(d,c);
        m=m/10;
    }
    return r;
}
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n==Arm(n))
    cout<<n<<" is a Armstrong Number.";
    else
    cout<<n<<" is not a Armstrong Number.";
    return 0;
}