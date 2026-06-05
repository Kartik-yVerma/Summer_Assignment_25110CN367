#include <iostream>
using namespace std;
int main() 
{
    int r,i,n;
    bool p = true;
    cout<<"Enter Range Number: ";
    cin>>r;
    for(n=2;n<=r;n++)  
    {
        for(i=2;i<=n/2;i++) 
        {
            if(n%i==0)
            {
                p=false;
                break;
            }
        }
        if(p)
            cout<<n<<endl;
        p=true;
    }
    return 0;
} 