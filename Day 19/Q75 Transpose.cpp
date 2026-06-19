// Transpose of a Matrix
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t r,c,i,j;
    cout<<"Input Rows and Columns: ";
    cin>>r>>c;
    vector<vector<int>> a(r,vector<int>(c));
    cout<<"Input Elements of Matrix:"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Transpose Matrix:"<<endl;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}