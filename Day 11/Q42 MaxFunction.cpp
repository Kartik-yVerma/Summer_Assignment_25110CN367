//Maximum Number
#include<iostream>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int a,b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    cout<<"Maximum Number= "<<max(a,b);
    return 0;
}