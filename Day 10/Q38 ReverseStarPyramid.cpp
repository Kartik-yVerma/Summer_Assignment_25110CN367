//Reverse Star Pyramid
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++) //Print Spaces
        {
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++)//Print Stars
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}