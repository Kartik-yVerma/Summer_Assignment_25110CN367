//Perfect Number with Function
#include<iostream>
using namespace std;
int Perfect(int n)
{
    int i,s=0;
    for(i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        s+=i; //Adding Divisor.
    }
    return s;
}
int main()
{
    int n;
    cout<<"Enter A Number: "<<endl;
    cin>>n;
    if(Perfect(n)==n)
    cout<<n<<" Is A Perfect Number.";
    else
    cout<<n<<" Is Not A Perfect Number.";
    return 0;
}