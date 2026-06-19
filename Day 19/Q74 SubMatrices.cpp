// Subtract Two Matrices
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t r,c,i,j;
    cout<<"Input Rows and Columns: ";
    cin>>r>>c;
    vector<vector<int>> a(r,vector<int>(c)),b(r,vector<int>(c)),d(r,vector<int>(c));
    cout<<"Input Elements of Matrix 1:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Input Elements of Matrix 2:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<"Difference Matrix:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}