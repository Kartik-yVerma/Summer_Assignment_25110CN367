//To Merge Two Arrays
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i;//vector initialization
    cout<<"Input Array Sizes: ";
    cin>>n;
    vector<int> a(n),ar(n),arr(n); //vector dynamic array
    cout<<"Input Elements of Array 1: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Input Elements of Array 2: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        arr[2*i]=a[i];
        arr[2*i+1]=ar[i];
    }
    cout<<"New Array:"<<endl;
    for(i=0;i<n*2;i++)//Display 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}