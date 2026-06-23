#include<iostream>
#include<string>
#include<algorithm> //max() function use
using namespace std;
int main()
{
    string s;
    int f[256]={0},mf=0; //freq array 
    size_t i;
    cout<<"Input String: ";
    getline(cin,s);
    for(char c:s) //each character c in the string s do:
    {
        f[(unsigned char)c]++; //count this character
        mf=max(mf,f[(unsigned char)c]); //update maximum
    }
    cout<<"Maximum Occurring Character(s): ";
    for(i=0;i<256;i++)
    {
        if(f[i]==mf) //max freq + frequency array elements
        {
            cout<<(char)i<<" "; //prints all character(s) with same frequency 
        }
    }
    cout<<endl<<"Frequency = "<<mf; //prints their frequency
    return 0;
}