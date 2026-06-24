//Compressing String.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,c="";
    int cnt; //count
    size_t i;
    cout<<"Input String: ";
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        cnt=1;
        while(i+1<s.length() && s[i]==s[i+1])
        {
            cnt++;
            i++;
        }
        c=c+s[i]+to_string(cnt); //add string and its occurence consequtively 
    }
    cout<<"Compressed String = "<<c;
    return 0;
}