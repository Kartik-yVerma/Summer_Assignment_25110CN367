#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=1,c;
    cout<<"Enter Number Of Terms: "<<endl;
    cin>>n;
    cout<<"Fibonnaci Series :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}