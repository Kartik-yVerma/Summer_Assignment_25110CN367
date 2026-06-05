#include <iostream>
using namespace std;
int main()
{
    int n,m=0,i;
    cout<<"Enter a Number:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        m=n*i;
        cout<<n<<" * "<<i<<"= "<<m<<endl;
    }
    return 0;
}