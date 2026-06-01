//Strong Number
#include<iostream>
using namespace std;
int fact(int a) //To find Factorial
{
    int i,f=1;
    for(i=a;i>0;i--)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n,d,s=0,m;
    cout<<"Enter A Number: ";
    cin>>n;
    m=n;
    while(n>0)
    {
        d=n%10;
        s+=fact(d);
        n=n/10;
    }
    if(m==s)
    cout<<m<<" Is A Strong Number.";
    else
    cout<<m<<" Is Not A Strong Number.";
    return 0;
}