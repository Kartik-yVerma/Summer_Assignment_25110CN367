//Fibonacci Function
#include<iostream>
using namespace std;
void fibo(int n)
{
    int i,a=0,b=1,c;
    for(i=0;i<n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cout<<"Enter Number Of Terms: "<<endl;
    cin>>n;
    cout<<"Fibonacci Series :"<<endl;
    fibo(n);
    return 0;
}