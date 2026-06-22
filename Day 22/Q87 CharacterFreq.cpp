//Character Frequency
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    size_t i;
    char c;int f=0;
    cout<<"Input String: ";
    getline(cin,s);
    cout<<"Character whose Frequency is to Be Checked:";
    cin>>c;
    for(i=0;i<s.length();i++)
    {
        if(c==s[i])
        {
            f++;
        }
    }
    cout<<"Frequency of Character "<<c<<" = "<<f;
    return 0;
}