//Number Pyramid
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++) //Print Spaces
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)//Increasing Pattern
        {
            cout<<k;
        }
        for(k=i-1;k>=1;k--)//Decreasing Pattern
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}