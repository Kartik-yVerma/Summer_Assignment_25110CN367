// Check Symmetric Matrix
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i,j;
    int f=0;
    cout<<"Input Order of Square Matrix: ";
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));
    cout<<"Input Elements of Matrix:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        break;
    }
    if(f==0)
        cout<<"Matrix is Symmetric";
    else
        cout<<"Matrix is Not Symmetric";
    return 0;
}