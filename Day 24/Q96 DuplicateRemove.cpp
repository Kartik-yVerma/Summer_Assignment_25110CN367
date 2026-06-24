//To remove characters from the string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s,ns="";
    size_t i;
    cout<<"Input String: ";
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(count(ns.begin(),ns.end(),s[i])==0)//checking if the character exist multiple time or not using algorithm
        ns=ns+s[i];
    }
    cout<<"String After Removing Duplicates: "<<ns;
    return 0;
}