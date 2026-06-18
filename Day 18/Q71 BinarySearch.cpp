//To do Binary Search
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i,l,u,m=0;//vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    int x;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Element to Search: ";
    cin>>x;
    l=0;
    u=n-1;
    while(l<=u)
    {
        m=(l+u)/2;
        if(ar[m]==x)
        {
            cout<<"Element Found at Index Position "<<m;
            return 0;
        }
        else if(ar[m]<x)
        {
            l=m+1;
        }
        else
        {
            u=m-1;
        }
    }
    cout<<"Element Not Found";
    return 0;
}