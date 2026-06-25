//To Sort Names Alphabetically
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    size_t n,i;
    string s;
    cout<<"Input Number of Names: ";
    cin>>n;
    cin.ignore();
    vector<string> name(n);
    cout<<"Input Names:"<<endl;
    for(i=0;i<n;i++)
    getline(cin,name[i]);
    sort(name.begin(),name.end());
    cout<<"Names in Alphabetical Order:"<<endl;
    for(i=0;i<n;i++)
    cout<<name[i]<<endl;
    return 0;
}