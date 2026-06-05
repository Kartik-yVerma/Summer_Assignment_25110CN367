//Recursive Fibonacci
#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    int n,i;
    cout<<"Enter No. Of Terms: ";
    cin>>n;
    cout<<"Fibonacci Series for "<<n<<" terms: ";
    for(i=0;i<n;i++)
    {
        cout<<fibo(i)<<" ";
    }
    return 0;
}