// Rotate Array Left by One Position
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    size_t n,i;
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int>ar(n);
    cout<<"Input Elements of Array: ";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int temp=ar[0];
    for(i=0;i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }
    ar[n-1]=temp;
    cout<<"Array After Left Rotation:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}