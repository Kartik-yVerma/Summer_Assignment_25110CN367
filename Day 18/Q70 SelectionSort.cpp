//To do Selection Sort
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i,j,mi;//vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n-1;i++)
    {
        mi=i;//minimum index

        for(j=i+1;j<n;j++)
        {
            if(ar[j]<ar[mi])
            {
                mi=j;
            }
        }
        int temp = ar[i];
        ar[i] = ar[mi];
        ar[mi] = temp;
    }
    cout<<"Selection Sorted Array:"<<endl;
    for(i=0;i<n;i++)//Display 
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}