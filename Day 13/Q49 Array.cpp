//To Input and Display
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i;//vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Displayed Array:"<<endl;
    for(i=0;i<n;i++)//Display 
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}