//To do Descending Bubble Sort
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i,j;//vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    int temp;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]<ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    cout<<"Descending Sorted Array:"<<endl;
    for(i=0;i<n;i++)//Display 
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}