//Character Pyramid
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
        for(k=65;k<=(64+i);k++)//Increasing Pattern
        {
            cout<<(char)k;
        }
        for(k=(63+i);k>=65;k--)//Decreasing Pattern
        {
            cout<<(char)k;
        }
        cout<<endl;
    }
    return 0;
}