// Count Vowels and Consonants
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    size_t i,v=0,c=0;
    cout<<"Input String: ";
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||
               s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
    }

    cout<<"Number of Vowels = "<<v<<endl;
    cout<<"Number of Consonants = "<<c;

    return 0;
}