//To Union Two Arrays
#include<iostream>
#include<vector>
#include<set>// a set only produces unique elements
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
    set<int> uni;
    for(i=0;i<n;i++)
    uni.insert(a[i]); //set A
    for(i=0;i<m;i++)
    uni.insert(ar[i]);//set B
    cout<<"Union Array:"<<endl;
    for(int x : uni)//printing the Union Uni
    {
        cout<<x<<" ";
    }
    return 0;
}