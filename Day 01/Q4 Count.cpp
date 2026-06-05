#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Enter a Number:";
    cin>>n;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    cout<<"Number Of Digits in :"<<c;
    return 0;
}