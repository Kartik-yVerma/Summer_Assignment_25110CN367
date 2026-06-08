//To Find Largest and Smallest of an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i;//Vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int> ar(n); //Vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int max,min;
    max=min=ar[0];
    for(i=0;i<n;i++)
    {
        if(max<ar[i])
        max=ar[i];
        if(min>ar[i])
        min=ar[i];
    }
    cout<<"Maximum of Array: "<<max<<endl; //Maximum of Array
    cout<<"Minimum of Array: "<<min; //Minimum of Array
    return 0;
}