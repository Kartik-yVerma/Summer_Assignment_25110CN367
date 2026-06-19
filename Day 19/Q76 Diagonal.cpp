// Sum of Diagonals
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    size_t n,i,j;
    int s=0;
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
            if(i==j||(i+j)==(n-1))
            s=s+a[i][j];
        }
    }
    if(n%2!=0)//checking if its an odd matrix
    s=s-a[n/2][n/2]; //remove the addition of the middle term once.
    cout<<"Sum of Diagonals = "<<s;
    return 0;
}