/*A Management system that records
name 
age
roll no
branch
course*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //to give structured output with setw() function.
#include<cctype>// for lowercase
using namespace std;
struct Student //structure for easier management
{
    int roll,age;
    string name,branch,course;
};
string l(string s) //function l to return lowercase to give case insensitive result
{
    for(char &c:s)// for every character in string s
    c=(char)tolower((unsigned char)c);
    return s;
}
string u(string s) //function u to return uppercase 
{
    for(char &c:s)// for every character in string s
    c=(char)toupper((unsigned char)c);
    return s;
}
int main()
{
    vector<Student> s;
    Student t;
    int ch,a,c;
    string b,co;
    do
    {
        cout<<"\n====================================\n";
        cout<<"    STUDENT RECORD MANAGEMENT\n";
        cout<<"====================================\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display All Students\n";
        cout<<"3. Total Number of Students\n";
        cout<<"4. Display Students in a Branch\n";
        cout<<"5. Display Students in a Course\n";
        cout<<"6. Display Students of an Age\n";
        cout<<"7. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore(); //ignores /n
        switch(ch)
        {
            case 1:
                cout<<"\nName   : ";
                getline(cin,t.name);
                cout<<"Roll No: ";
                cin>>t.roll;
                cout<<"Age    : ";
                cin>>t.age;
                cin.ignore();
                cout<<"Branch : ";
                getline(cin,t.branch);
                cout<<"Course : ";
                getline(cin,t.course);
                s.push_back(t);
                cout<<"\nRecord Added Successfully!\n";
                break;
            case 2:
                if(s.empty())
                {
                    cout<<"\nNo Records Found!\n";
                    break;
                }
                cout<<"\n";
                cout<<left
                    <<setw(10)<<"Roll No"
                    <<setw(25)<<"Name"
                    <<setw(8)<<"Age"
                    <<setw(15)<<"Branch"
                    <<setw(20)<<"Course"<<endl;
                cout<<"-------------------------------------------------------------------\n";
                for(size_t i=0;i<s.size();i++)
                {
                    cout<<left
                        <<setw(10)<<s[i].roll
                        <<setw(25)<<u(s[i].name)
                        <<setw(8)<<s[i].age
                        <<setw(15)<<u(s[i].branch)
                        <<setw(20)<<u(s[i].course)
                        <<endl;
                }
                break;
            case 3:
                cout<<"\nTotal Students = "<<s.size()<<endl;
                break;
            case 4:
                cout<<"Enter Branch: ";
                getline(cin,b);
                c=0;
                cout<<"\n";
                cout<<left
                <<setw(10)<<"Roll No"
                <<setw(25)<<"Name"
                <<setw(8)<<"Age"
                <<setw(20)<<"Course"<<endl;
                cout<<"-------------------------------------------------------------------\n";
                for(size_t i=0;i<s.size();i++)
                {
                if(l(s[i].branch)==l(b))
                {
                    c++;
                    cout<<left
                        <<setw(10)<<s[i].roll
                        <<setw(25)<<u(s[i].name)
                        <<setw(8)<<s[i].age
                        <<setw(20)<<u(s[i].course)
                        <<endl;
                }
                }
                cout<<"Students in "<<b<<" = "<<c<<endl;
                break;
            case 5:
                cout<<"Enter Course: ";
                getline(cin,co);
                c=0;
                cout<<"\n";
                    cout<<left
                    <<setw(10)<<"Roll No"
                    <<setw(25)<<"Name"
                    <<setw(8)<<"Age"
                    <<setw(15)<<"Branch"<<endl;
                    cout<<"-------------------------------------------------------------------\n";
                for(size_t i=0;i<s.size();i++)
                {
                    if(l(s[i].course)==l(co))
                    {
                        c++;
                        cout<<left
                        <<setw(10)<<s[i].roll
                        <<setw(25)<<u(s[i].name)
                        <<setw(8)<<s[i].age
                        <<setw(15)<<u(s[i].branch)
                        <<endl;
                    }
                }
                cout<<"Students in "<<co<<" = "<<c<<endl;
                break;
            case 6:
                cout<<"Enter Age: ";
                cin>>a;
                c=0;
                cout<<"\n";
                    cout<<left
                    <<setw(10)<<"Roll No"
                    <<setw(25)<<"Name"
                    <<setw(15)<<"Branch"
                    <<setw(20)<<"Course"<<endl;
                    cout<<"-------------------------------------------------------------------\n";
                for(size_t i=0;i<s.size();i++)
                {
                    if(s[i].age==a)
                    {
                        c++;
                        
                        cout<<left
                        <<setw(10)<<s[i].roll
                        <<setw(25)<<u(s[i].name)
                        <<setw(15)<<u(s[i].branch)
                        <<setw(20)<<u(s[i].course)
                        <<endl;
                    }
                }
                cout<<"Students of Age "<<a<<" = "<<c<<endl;
                break;
            case 7:
                cout<<"\nThank You!\n";
                break;
            default:
                cout<<"\nInvalid Choice!\n";
        }
    }while(ch!=7);
    return 0;
}