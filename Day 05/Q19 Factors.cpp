//Factors of A Number
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter A Number: "<<endl;
    cin>>n;
    cout<<"Factors of "<<n<<" : ";
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    return 0;
}