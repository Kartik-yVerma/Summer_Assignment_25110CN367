// Remove Spaces from a String
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,ns="";
    size_t i;
    cout<<"Input String: ";
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            ns=ns+s[i];
        }
    }
    cout<<"String After Removing Spaces: "<<ns;
    return 0;
}