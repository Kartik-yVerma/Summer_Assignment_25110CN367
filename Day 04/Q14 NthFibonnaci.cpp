#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=1,c;
    cout<<"Enter Nth Term: "<<endl;
    cin>>n;
    cout<<"Nth Terms is:"<<endl;
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
        cout<<a;
        break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}