//To Reverse Array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i,p;//vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int> ar(n),arr(n);//vector dynamic array 
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    p=n;
    for(i=0;i<n;i++)
    {
        arr[i] = ar[--p];
    }
    cout<<"Displayed Reverse Array:"<<endl;
    for(i=0;i<n;i++)//Display 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}