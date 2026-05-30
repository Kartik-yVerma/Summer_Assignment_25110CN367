#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    while (b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main() 
{
    int a,b,lcm;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    lcm=(a*b)/gcd(a,b);
    cout<<"LCM= "<<lcm;
    return 0;
}