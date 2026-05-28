#include <iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cout<<"Enter the Nth Natural Number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       s=s+i;
    }
    cout <<"Sum Of N Natural Number is:" << s << endl;
    return 0;
}