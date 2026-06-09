//To find the Second largest number in an array
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int secondLargest(vector<int>& a)
{
    int l = INT_MIN;
    int sl = INT_MIN;
    size_t i;
    for (i=0;i<a.size();i++)
    {
        if (a[i]>l)
        {
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl && a[i]!=l)
        {
            sl=a[i];
        }
    }
    return sl;
}
int main()
{
    size_t n,i; //vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Second Largest No: "<<secondLargest(ar);
    return 0;
}