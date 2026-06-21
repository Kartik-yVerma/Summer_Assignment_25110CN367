//String Length with strlen function.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    size_t i=0;
    cout<<"Input String: ";
    getline(cin,s);
    while(s[i]!='\0')
    {
        i++;
    }
    cout<<"Length of String = "<<i;
    return 0;
}