//Find Common Characters
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
    size_t i;
    cout<<"Input String 1: ";
    getline(cin,s1);
    cout<<"Input String 2: ";
    getline(cin,s2);
    cout<<"Common Characters: ";
    for(i=0;i<s1.length();i++)
    {
        if(count(s2.begin(),s2.end(),s1[i])>0 && count(s1.begin(),s1.begin()+i,s1[i])==0)
        {
            cout<<s1[i]<<" ";
        }
    }
    return 0;
}