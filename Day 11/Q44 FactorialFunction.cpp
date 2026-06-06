//Factorial with Functions
#include <iostream>
using namespace std;
int fact(int n)
{
    int i,f=1;
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    cout<<"Factorial Of "<<n<<" = "<<fact(n);
    return 0;
}