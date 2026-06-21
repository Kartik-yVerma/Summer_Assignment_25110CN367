//Reverse String
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    size_t l,r;
    char t;
    cout<<"Input String: ";
    getline(cin,s);
    cout<<"Length of String = "<<s.length()<<endl;
    l=0;
    r=s.length()-1;
    while(l<r)
    {
        t=s[l];
        s[l]=s[r];
        s[r]=t;
        l++;
        r--;
    }
    cout<<"Reversed String = "<<s;
    return 0;
}