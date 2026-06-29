/*A Menu-Driven String Operations System that performs
Display
Length
Uppercase
Lowercase
Reverse
Vowel Count
Word Count
Character Search*/
#include<iostream>
#include<string>
#include<cctype> //for toupper(), tolower()
using namespace std;
int main()
{
    string s,t;
    char ch;
    int c,op;
    size_t i,j;
    cout<<"Enter a String: ";
    getline(cin,s);
    do
    {
        cout<<"\n====================================\n";
        cout<<"      STRING OPERATIONS SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Display String\n";
        cout<<"2. Find Length\n";
        cout<<"3. Convert to Uppercase\n";
        cout<<"4. Convert to Lowercase\n";
        cout<<"5. Reverse String\n";
        cout<<"6. Count Vowels\n";
        cout<<"7. Count Words\n";
        cout<<"8. Search Character\n";
        cout<<"9. Exit\n";
        cout<<"Enter Choice: ";
        cin>>op;
        cin.ignore();
        switch(op)
        {
            case 1:
                cout<<"String = "<<s<<endl;
                break;
            case 2:
                cout<<"Length = "<<s.length()<<endl;
                break;
            case 3:
                t=s;
                for(char &x:t)
                x=(char)toupper((unsigned char)x);
                cout<<"Uppercase String = "<<t<<endl;
                break;
            case 4:
                t=s;
                for(char &x:t)
                x=(char)tolower((unsigned char)x);
                cout<<"Lowercase String = "<<t<<endl;
                break;
            case 5:
                t=s;
                for(i=0,j=t.length()-1;i<j;i++,j--)
                {
                    char temp=t[i];
                    t[i]=t[j];
                    t[j]=temp;
                }
                cout<<"Reversed String = "<<t<<endl;
                break;
            case 6:
                c=0;
                for(char x:s)
                {
                    x=(char)tolower((unsigned char)x);
                    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
                    c++;
                }
                cout<<"Number of Vowels = "<<c<<endl;
                break;
            case 7:
                c=0;
                if(!s.empty())
                c=1;
                for(char x:s)
                {
                    if(x==' ')
                    c++;
                }
                cout<<"Number of Words = "<<c<<endl;
                break;
            case 8:
                cout<<"Enter Character to Search: ";
                cin>>ch;
                c=0;
                for(i=0;i<s.length();i++)
                {
                    if(s[i]==ch)
                    {
                        c++;
                        cout<<"Found at Position "<<i+1<<endl;
                    }
                }
                if(c==0)
                cout<<"Character Not Found!\n";
                break;
            case 9:
                cout<<"\nThank You!\n";
                break;
            default:
                cout<<"\nInvalid Choice!\n";
        }
    }while(op!=10);
    return 0;
}