//Single Missing Number
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i;//vector initialization
    int x1,x2;//xor method
    x1=x2=0;
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=1;i<=n;i++)
        x1^=i; //XOR for 1to N
    for(i=0;i<n-1;i++)
        x2^=ar[i]; //XOR for numbers in array
    cout<<"Missing Number: "<<(x1^x2)<<endl;
    return 0;
}