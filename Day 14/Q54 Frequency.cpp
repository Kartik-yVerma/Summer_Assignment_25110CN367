//To Check Frequency of an Element in an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i; //vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    int s,freq=0;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Number Whose Frequency Is To Be Searched: "; //Number to be Searched
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s==ar[i])
        {
            freq++;
        }
    }
    cout<<"Number "<<s<<" Frequency Is: "<<freq;
    return 0;
}