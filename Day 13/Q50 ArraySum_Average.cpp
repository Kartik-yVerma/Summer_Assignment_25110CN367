//To Find Sum and Average of an array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    size_t n,i;//vector initialization
    int sum=0; 
    float avg=0;
    cout<<"Input Array Size: ";
    cin>>n;
    vector<int> ar(n); //vector dynamic array
    cout<<"Input Elements of Array: "; //Input Array
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)//Sum & Average
    {
        sum+=ar[i];
        avg=(float)sum/n;
    }
    cout<<"Sum of Array: "<<sum<<endl; //Summation of Array
    cout<<"Average of Array: "<<avg; //Average of Array
    return 0;
}