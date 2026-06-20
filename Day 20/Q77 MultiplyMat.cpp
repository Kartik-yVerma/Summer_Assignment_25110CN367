//Array Multiplication
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t r1,c1,r2,c2,i,j,k;
    cout<<"Input Rows and Columns of Matrix 1: ";
    cin>>r1>>c1;
    cout<<"Input Rows and Columns of Matrix 2: ";
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"Matrix Multiplication Not Possible";
        return 0;
    }
    vector<vector<int>> a(r1,vector<int>(c1));
    vector<vector<int>> b(r2,vector<int>(c2));
    vector<vector<int>> p(r1,vector<int>(c2,0)); //intitalizing with zero
    cout<<"Input Elements of Matrix 1:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Input Elements of Matrix 2:"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                p[i][j]+=a[i][k]*b[k][j]; //Array Multiplication logic
            }
        }
    }
    cout<<"Product Matrix:"<<endl;
    for(i=0;i<r1;i++)//Display
    {
        for(j=0;j<c2;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}