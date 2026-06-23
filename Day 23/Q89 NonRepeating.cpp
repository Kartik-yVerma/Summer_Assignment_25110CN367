// First Non-Repeating Character
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    size_t i,j;
    int f;
    cout<<"Input String: ";
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        f=0;
        for(j=0;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                f++;
            }
        }
        if(f==1)
        {
            cout<<"First Non-Repeating Character = "<<s[i];
            return 0;
        }
    }
    cout<<"No Non-Repeating Character Found";
    return 0;
}