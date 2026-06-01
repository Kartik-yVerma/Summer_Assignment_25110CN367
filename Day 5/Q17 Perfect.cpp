//Perfect Number
#include<iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cout<<"Enter A Number: "<<endl;
    cin>>n;
    for(i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        s+=i; //Adding Divisor.
    }
    if(s==n)
    cout<<n<<" Is A Perfect Number.";
    else
    cout<<n<<" Is Not A Perfect Number.";
    return 0;
}