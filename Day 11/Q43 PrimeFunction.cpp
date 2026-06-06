//Prime Number
#include<iostream>
using namespace std;
int prime(int a)
{   
    int i;
    if(a<=1)
    return 0;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter a Numbers: ";
    cin>>n;
    if(prime(n)==1)
    cout<<n<<" is A Prime Number.";
    else
    cout<<n<<" is not a Prime Number.";
    return 0;
}