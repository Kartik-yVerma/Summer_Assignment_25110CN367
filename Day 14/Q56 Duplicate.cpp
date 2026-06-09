//To Find Duplicates in an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i,j,k; //vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    int f=0;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Duplicte Elements:"<<endl;
for (i=0;i<n;i++)
    {
        int p=0;
        for (k=0;k<i;k++)
        {
            if (ar[i]==ar[k])
            {
                p=1;
                break;
            }
        }
        if (p==1)
        continue;
        for (j=i+1;j<n;j++)
        {
            if (ar[i]==ar[j])
            {
                cout<<ar[i]<<" ";
                f=1;
                break;
            }
        }
    }
    if (f==0)
    cout << "No Duplicates Found";
    return 0;
}