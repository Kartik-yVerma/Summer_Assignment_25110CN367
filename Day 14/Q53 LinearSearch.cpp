//To Linear Search in an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i; //vector initialization
    cout<<"Input Array Size: ";
    cin>>n;
    int s,pos=0;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    cout<<"Number To Be Searched: "; //Number to be Searched
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s==ar[i])
        {
            pos=(int)i;
        }
    }
    cout<<"Number "<<s<<" Found At Index "<<pos;
    return 0;
}