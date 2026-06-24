//String Rotation
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Input String 1: ";
    getline(cin,s1);
    cout<<"Input String 2: ";
    getline(cin,s2);
    if(s1.length()!=s2.length())
    {
        cout<<"Strings are Not Rotations";
        return 0;
    }
    string t=s1+s1;// joins both strings to find Rotation
    if(t.find(s2)!=string::npos) //finds position of string s2 and checks if it is not equal to npos or no position
    cout<<"Strings are Rotations";
    else
    cout<<"Strings are Not Rotations";
    return 0;
}