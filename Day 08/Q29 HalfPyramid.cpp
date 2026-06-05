//Half Pyramid pattern
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    string s;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter the symbol for pattern: ";
    cin >> s;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}