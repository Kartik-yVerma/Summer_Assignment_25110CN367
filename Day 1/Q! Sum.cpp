#include <iostream>
using namespace std;
int main()
{
    int n,s=0,i;
    cout<<"Enter Nth Natural Number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    cout<<"Sum of "<<n<<" Natural Numbers = "<<s;
    return 0;
}