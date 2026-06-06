//Sum of Number
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    cout<<"Sum of Two Number= "<<sum(a,b);
    return 0;
}