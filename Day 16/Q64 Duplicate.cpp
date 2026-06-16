//To remove Duplicate 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i,j,k=0;//vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    int f;
    vector<int> ar(n),arr(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<n;j++)
        {
            if(ar[i]==ar[j] && i!=j)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        continue;
        else
        {
            arr[k]=ar[i];
            k++;
        }
    }
    cout<<"New Array:"<<endl;
    for(i=0;i<k;i++)//Display 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}