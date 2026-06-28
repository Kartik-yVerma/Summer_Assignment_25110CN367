/*A Library Management System that records
Student Name
Roll Number
Book Name
Author Name
Book ID
Issue Date
Due Date
Return Status
Fine*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //setw function
#include<cctype> // upper and lowercase
using namespace std;
struct Library //structure for easier management
{
    int roll,bookid;
    string student;
    string book;
    string author;
    string issue;
    string due;
    string status;
    double fine;
};
string u(string s) //function u to return uppercase
{
    for(char &c:s)
        c=(char)toupper((unsigned char)c);
    return s;
}
int main()
{
    vector<Library> l;
    Library t;
    int ch,r,id,c;
    string b;
    size_t i;
    do
    {
        cout<<"\n====================================\n";
        cout<<"      LIBRARY MANAGEMENT SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Issue Book\n";
        cout<<"2. Return Book\n";
        cout<<"3. Display All Records\n";
        cout<<"4. Search by Roll Number\n";
        cout<<"5. Search by Book Name\n";
        cout<<"6. Display Overdue Books\n";
        cout<<"7. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
                cout<<"\nStudent Name : ";
                getline(cin,t.student);
                cout<<"Roll Number  : ";
                cin>>t.roll;
                cin.ignore();
                cout<<"Book ID      : ";
                cin>>t.bookid;
                cin.ignore();
                cout<<"Book Name    : ";
                getline(cin,t.book);
                cout<<"Author Name  : ";
                getline(cin,t.author);
                cout<<"Issue Date   : ";
                getline(cin,t.issue);
                cout<<"Due Date     : ";
                getline(cin,t.due);
                t.status="ISSUED";
                t.fine=0;
                l.push_back(t);
                cout<<"\nBook Issued Successfully!\n";
                break;
            case 2:
                cout<<"Enter Book ID: ";
                cin>>id;
                c=0;
                for(i=0;i<l.size();i++)
                {
                    if(l[i].bookid==id)
                    {
                        c++;
                        l[i].status="RETURNED";
                        cout<<"Fine : ";
                        cin>>l[i].fine;
                        cout<<"Book Returned Successfully!\n";
                    }
                }
                if(c==0)
                cout<<"Book Record Not Found!\n";
                break;
            case 3:
                if(l.empty())
                {
                    cout<<"\nNo Records Found!\n";
                    break;
                }
                cout<<"\n";
                cout<<left
                    <<setw(10)<<"Book ID"
                    <<setw(20)<<"Student"
                    <<setw(10)<<"Roll"
                    <<setw(25)<<"Book"
                    <<setw(20)<<"Author"
                    <<setw(15)<<"Status"
                    <<endl;
                cout<<"--------------------------------------------------------------------------\n";
                for(i=0;i<l.size();i++)
                {
                    cout<<left
                        <<setw(10)<<l[i].bookid
                        <<setw(20)<<u(l[i].student)
                        <<setw(10)<<l[i].roll
                        <<setw(25)<<u(l[i].book)
                        <<setw(20)<<u(l[i].author)
                        <<setw(15)<<l[i].status
                        <<endl;
                }
                break;
            case 4:
                cout<<"Enter Roll Number: ";
                cin>>r;
                c=0;
                for(i=0;i<l.size();i++)
                {
                    if(l[i].roll==r)
                    {
                        c++;
                        cout<<"\n";
                        cout<<"Student : "<<u(l[i].student)<<endl;
                        cout<<"Book    : "<<u(l[i].book)<<endl;
                        cout<<"Issue   : "<<l[i].issue<<endl;
                        cout<<"Due     : "<<l[i].due<<endl;
                        cout<<"Status  : "<<l[i].status<<endl;
                        cout<<"Fine    : "<<l[i].fine<<endl;
                    }
                }
                if(c==0)
                cout<<"No Record Found!\n";
                break;
            case 5:
                cout<<"Enter Book Name: ";
                getline(cin,b);
                c=0;
                for(i=0;i<l.size();i++)
                {
                    if(u(l[i].book)==u(b))
                    {
                        c++;
                        cout<<"\nBook ID : "<<l[i].bookid<<endl;
                        cout<<"Student : "<<u(l[i].student)<<endl;
                        cout<<"Status  : "<<l[i].status<<endl;
                    }
                }
                if(c==0)
                cout<<"Book Not Found!\n";
                break;
            case 6:
                cout<<"\nBooks with Status ISSUED\n";
                c=0;
                cout<<"\n";
                    cout<<left
                        <<setw(10)<<"Book ID"
                        <<setw(20)<<"Student Name"
                        <<setw(25)<<"Book Name"
                        <<setw(15)<<"Due Date"
                        <<endl;
                    cout<<"-----------------------------------------------\n";
                for(i=0;i<l.size();i++)
                {
                    if(l[i].status=="ISSUED")
                    {
                        c++;
                        cout<<left
                            <<setw(10)<<l[i].bookid
                            <<setw(20)<<u(l[i].student)
                            <<setw(25)<<u(l[i].book)
                            <<setw(15)<<l[i].due
                            <<endl;
                    }
                }
                cout<<"Books Issued = "<<c<<endl;
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