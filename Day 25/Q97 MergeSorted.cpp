//To Merge Two Sorted arrays
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n1,n2,i=0,j=0,k=0;
    cout<<"Input Size of Array 1: ";
    cin>>n1;
    cout<<"Input Size of Array 2: ";
    cin>>n2;
    vector<int> a(n1),b(n2),c(n1+n2);
    cout<<"Input Elements of Array 1: ";
    for(i=0;i<n1;i++)
    cin>>a[i];
    cout<<"Input Elements of Array 2: ";
    for(i=0;i<n2;i++)
    cin>>b[i];
    i=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        else
        c[k++]=b[j++];
    }
    while(i<n1)
        c[k++]=a[i++];
    while(j<n2)
        c[k++]=b[j++];
    cout<<"Merged Array:"<<endl;
    for(i=0;i<n1+n2;i++)
    cout<<c[i]<<" ";
    return 0;
}