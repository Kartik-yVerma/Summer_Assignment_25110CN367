//To Find Intersection of Two Arrays
#include<iostream>
#include<vector>
#include<set>// a set produces unique elements only
using namespace std;
int main()
{
    size_t n,m,i;//vector initialization
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
    set<int> s,inter; //set for intersection
    for(i=0;i<n;i++)
    s.insert(a[i]); 
    for(i=0;i<m;i++)
    {
        if(s.find(ar[i]) != s.end())
        inter.insert(ar[i]);
    }
    cout<<"Intersection Array: "<<endl;
    for(int x : inter)
    {
        cout<<x<<" ";
    }
    return 0;
}