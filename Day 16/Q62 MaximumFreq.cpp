//To Check Maximum Frequency of an Element in an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i,j; //vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    int c,mfreq=0,m;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(ar[j]==ar[i])
            {
                c++;
            }
        }
        if(c>mfreq)
        {
            mfreq=c;
            m=ar[i];
        }
    }
    cout<<"Number with Maximum Frequency Is: "<<m<<endl;
    cout<<" Frequency: "<<mfreq;
    return 0;
}