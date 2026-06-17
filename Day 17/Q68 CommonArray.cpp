//To Find Common in Two Arrays
#include<iostream>
#include<vector>
#include<set>// a set produces unique elements only
using namespace std;
int main()
{
    size_t n,m,i,j;//vector initialization
    cout<<"Input Array Sizes: ";
    cin>>n;
    cout<<"Input Array Sizes: ";
    cin>>m;
    vector<int> a(n),ar(m); //vector dynamic array
    cout<<"Input Elements of Array 1: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Input Elements of Array 2: "; //Input Array
    for(i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    set<int> com;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==ar[j])
            {
            com.insert(a[i]);
            break;
            }
        }
    }
    for(int x : com)
    {
        cout<<x<<" ";
    } 
    return 0;
}