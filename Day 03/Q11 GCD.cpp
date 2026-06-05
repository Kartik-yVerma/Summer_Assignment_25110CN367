#include <iostream>
using namespace std;

int main() 
{
    int temp,a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
     while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"GCD = "<<a;
    return 0;
}