//Count no. of words
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    size_t i;
    int w=0;
    cout<<"Input String: ";
    getline(cin,s);
    for(i=0;i<s.length();i++)
    {
        if((i==0&&s[i]!=' ')||(s[i]!=' '&&s[i-1]==' '))
        {
            w++;
        }
    }
    cout<<"Number of Words = "<<w;
    return 0;
}