//Longest word
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,w="",lw="";
    size_t i;
    cout<<"Input String: ";
    getline(cin,s);
    s=s+' ';
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            w=w+s[i]; //extracting words
        }
        else
        {
            if(w.length()>lw.length()) //comparing length
            lw=w;

            w="";
        }
    }
    cout<<"Longest Word = "<<lw;
    cout<<endl<<"Length = "<<lw.length();
    return 0;
}