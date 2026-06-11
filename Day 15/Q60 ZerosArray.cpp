// Move Zeroes to End
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    size_t n,i,j=0;
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int> ar(n);
    cout<<"Input Elements of Array: ";
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    //Move non-zero elements to the front
    for(i=0;i<n;i++)
    {
        if(ar[i]!=0)
        {
            ar[j++]=ar[i];
        }
    }
    //Fill remaining positions with zeroes
    while(j<n)
    {
        ar[j++]=0;
    }
    cout<<"Array After Moving Zeroes to End:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}