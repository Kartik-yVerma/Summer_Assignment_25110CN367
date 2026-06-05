//Character Triangle pattern
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=65;j<(65+i);j++)
        {
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
    return 0;
}