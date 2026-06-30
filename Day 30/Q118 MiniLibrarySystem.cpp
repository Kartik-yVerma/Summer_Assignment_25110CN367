/*A Mini Library System that records
Book ID
Book Name
Author
Availability*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //for setw()
#include<cctype>  //for toupper()
using namespace std;
struct Book //structure for easier management
{
    int id;
    string name,author,status;
};
string u(string s) //function u to return uppercase
{
    for(char &c:s)
    c=(char)toupper((unsigned char)c);
    return s;
}
int main()
{
    vector<Book> b;
    Book t;
    int ch,id,c;
    size_t i;
    do
    {
        cout<<"\n====================================\n";
        cout<<"         MINI LIBRARY SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Add Book\n";
        cout<<"2. Display All Books\n";
        cout<<"3. Issue Book\n";
        cout<<"4. Return Book\n";
        cout<<"5. Search Book by ID\n";
        cout<<"6. Total Books\n";
        cout<<"7. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
                cout<<"\nBook ID: ";
                cin>>t.id;
                cin.ignore();
                cout<<"Book Name: ";
                getline(cin,t.name);
                cout<<"Author: ";
                getline(cin,t.author);
                t.status="AVAILABLE";
                b.push_back(t);
                cout<<"\nBook Added Successfully!\n";
                break;
            case 2:
                if(b.empty())
                {
                    cout<<"\nNo Books Found!\n";
                    break;
                }
                cout<<"\n";
                cout<<left
                    <<setw(10)<<"ID"
                    <<setw(30)<<"BOOK NAME"
                    <<setw(25)<<"AUTHOR"
                    <<setw(15)<<"STATUS"
                    <<endl;
                cout<<"--------------------------------------------------------------------------\n";
                for(i=0;i<b.size();i++)
                {
                    cout<<left
                        <<setw(10)<<b[i].id
                        <<setw(30)<<u(b[i].name)
                        <<setw(25)<<u(b[i].author)
                        <<setw(15)<<b[i].status
                        <<endl;
                }
                break;
            case 3:
                cout<<"Enter Book ID: ";
                cin>>id;
                c=0;
                for(i=0;i<b.size();i++)
                {
                    if(b[i].id==id)
                    {
                        c++;
                        if(b[i].status=="ISSUED")
                        cout<<"Book Already Issued!\n";
                        else
                        {
                            b[i].status="ISSUED";
                            cout<<"Book Issued Successfully!\n";
                        }
                    }
                }
                if(c==0)
                cout<<"Book Not Found!\n";
                break;
            case 4:
                cout<<"Enter Book ID: ";
                cin>>id;
                c=0;
                for(i=0;i<b.size();i++)
                {
                    if(b[i].id==id)
                    {
                        c++;
                        if(b[i].status=="AVAILABLE")
                        cout<<"Book Already Available!\n";
                        else
                        {
                            b[i].status="AVAILABLE";
                            cout<<"Book Returned Successfully!\n";
                        }
                    }
                }
                if(c==0)
                cout<<"Book Not Found!\n";
                break;
            case 5:
                cout<<"Enter Book ID: ";
                cin>>id;
                c=0;
                for(i=0;i<b.size();i++)
                {
                    if(b[i].id==id)
                    {
                        c++;
                        cout<<"\nBook ID : "<<b[i].id<<endl;
                        cout<<"Name    : "<<u(b[i].name)<<endl;
                        cout<<"Author  : "<<u(b[i].author)<<endl;
                        cout<<"Status  : "<<b[i].status<<endl;
                    }
                }
                if(c==0)
                cout<<"Book Not Found!\n";
                break;
            case 6:
                cout<<"\nTotal Books = "<<b.size()<<endl;
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
