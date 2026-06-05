//Recursive Reverse
#include<iostream>
using namespace std;
int rev(int n,int r=0)
{
    if(n==0)
    return r;
    else
    return rev(n / 10, r * 10 + n % 10);
}
int main()
{
    int n;
    cout<<"Enter A Number :";
    cin>>n;
    cout<<"Reverse: "<<rev(n);
    return 0;
}