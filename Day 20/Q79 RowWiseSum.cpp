// Row Wise Sum of Matrix
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t r,c,i,j;
    int s=0;
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
    cout<<"Row Wise Sum:"<<endl;
    for(i=0;i<r;i++)
    {
        s=0;
        for(j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
        cout<<"Sum of Row "<<i+1<<" = "<<s<<endl;
    }
    return 0;
}