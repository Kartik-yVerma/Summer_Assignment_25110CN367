#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,n,m,m1,d,c=0,r=0;
    cout<<"Enter the Range Start: ";
    cin>>i;
    cout<<"Enter the Range End: ";
    cin>>n;
    for(j=i;j<=n;j++)
    {
        r=c=0;
        m=m1=j;
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
        if(j==r)
            cout<<j<<" ";
    }
    return 0;
}