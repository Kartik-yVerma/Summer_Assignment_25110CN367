//Pair with given Sum
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i,j;//vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    int s,f=0;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Sum of the Pair:"<<endl;
    cin>>s;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((ar[i]+ar[j])==s)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        break;
    }
    if(f==1)
    cout<<"The Pair is "<<ar[i]<<" & "<<ar[j];
    else
    cout<<"No Pair Found.";
    return 0;
}