//To check if a String is A Palindrome String 
#include<iostream>
#include<string>
using namespace std;
string reverse(string m)
{
    size_t l,r;
    char t;
    l=0;
    r=m.length()-1;
    while(l<r)
    {
        t=m[l];
        m[l]=m[r];
        m[r]=t;
        l++;
        r--;
    }
    return m;
}
int main()
{
    string s,rev;
    cout<<"Input String: ";
    getline(cin,s);
    rev=reverse(s);
    if(rev==s)
    cout<<"It is a Palindrome String.";
    else
    cout<<"It is not a Palindrome String.";
    return 0;
}