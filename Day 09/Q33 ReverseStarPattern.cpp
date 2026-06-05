//Reverse Star pattern
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}