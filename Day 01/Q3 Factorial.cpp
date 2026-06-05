#include <iostream>
using namespace std;
int main()
{
    int n,fact=1,i;
    cout<<"Enter a Number:";
    cin>>n;
    for(i=n;i>0;i--)
    {
        fact=fact*i;
    }
    cout<<"Factorial Of "<<n<<" = "<<fact;
    return 0;
}