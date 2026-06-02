//Count Set Bits
#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout << "Enter a number: ";
    cin >> n;
    while(n>0)
    {
        if(n%2==1)
        c++;
        n=n/2;
    }
    cout<<"Number of set bits: "<<c;
    return 0;
}