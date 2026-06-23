//Checks Two Strings are Anagram or not.
#include<iostream>
#include<string>
#include<algorithm> //sorting
#include<cctype> //case and alphabet
using namespace std;
int main()
{
    string s1,s2,t1="",t2="";
    size_t i;
    cout<<"Input String 1: ";
    getline(cin,s1);
    cout<<"Input String 2: ";
    getline(cin,s2);
    for(i=0;i<s1.length();i++)
    {
        if(isalpha(s1[i])) //checks if the character is an alphabet or not .
        t1=t1+(char)tolower(s1[i]); //add alphabets in lowercase and ignores punctuations.
    }
    for(i=0;i<s2.length();i++)
    {
        if(isalpha(s2[i])) //checks if the character is an alphabet or not .
        t2=t2+(char)tolower(s2[i]); //add alphabets in lowercase and ignores punctuations.
    }
    sort(t1.begin(),t1.end()); //sorting string t1
    sort(t2.begin(),t2.end()); //sorting string t2
    if(t1==t2)
        cout<<"Strings are Anagrams";
    else
        cout<<"Strings are Not Anagrams";
    return 0;
}