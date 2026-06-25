//Sort Words By Length
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    size_t n,i,j;
    string t;
    cout<<"Input Number of Words: ";
    cin>>n;
    vector<string> w(n);
    cout<<"Input Words:"<<endl;
    for(i=0;i<n;i++)
    cin>>w[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(w[j].length()>w[j+1].length())
            {
                t=w[j];
                w[j]=w[j+1];
                w[j+1]=t;
            }
        }
    }
    cout<<"Words Sorted by Length:"<<endl;
    for(i=0;i<n;i++)
    cout<<w[i]<<" ";
    return 0;
}