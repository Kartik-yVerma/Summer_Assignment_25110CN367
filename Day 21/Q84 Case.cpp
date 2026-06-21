// Convert Lowercase to Uppercase
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    size_t i;
    cout<<"Input String: ";
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    cout<<"Uppercase String = "<<s;
    return 0;
}