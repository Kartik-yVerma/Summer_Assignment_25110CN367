//Repeated Character pattern
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout << "Enter number of rows: ";
    cin >> n;
    for(i=65;i<(65+n);i++)
    {
        for(j=1;j<=(i-64);j++)
        {
            cout<<(char)i<<" ";
        }
        cout<<endl;
    }
    return 0;
}