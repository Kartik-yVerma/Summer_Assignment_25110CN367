//Power without pow
#include<iostream>
using namespace std;
int main()
{
    int x,n;
    long r=1;
    cout<<"Enter Base: "<<endl;
    cin>>x;
    cout<<"Enter Power: "<<endl;
    cin>>n;
    while(n>0)
    {
        if(n%2==1)//binary exponentiation
        {
            r*=x;//Multiplying bases n times //Reduced Time Complexity for larger powers O(log n)
        }
        x*=x;
        n/=2;
    }
    cout<<"Result: "<<r;
    return 0;
}