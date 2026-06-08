//To Find Number of Even & Odd Elements of an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i;//Vector initialization
    int even=0,odd=0;
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int> ar(n); //Vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        even++;
        else
        odd++;
    }
    cout<<"No. of Even Elements of Array: "<<even<<endl; //Even of Array
    cout<<"No. of Odd Elements of Array: "<<odd; //Odd of Array
    return 0;
}