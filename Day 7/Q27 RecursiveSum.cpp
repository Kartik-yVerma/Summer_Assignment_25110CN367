//Recursive Sum Of Digit
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10)+sum(n/10);
}
int main()
{
    int n;
    cout<<"Enter A Number :";
    cin>>n;
    cout<<"Sum Of Digits: "<<sum(n);
    return 0;
}