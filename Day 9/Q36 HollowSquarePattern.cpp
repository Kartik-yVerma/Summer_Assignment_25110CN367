//Hollow Square pattern
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}