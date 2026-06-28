/*A Contact Management System that records
Name
Phone Number
Email
Address*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //for setw()
#include<cctype>  //for toupper()
using namespace std;
struct Contact //structure for easier management
{
    string name,email,address;
    long long phone;
};
string u(string s) //function u to return uppercase
{
    for(char &c:s) //for every character in string s
    c=(char)toupper((unsigned char)c);
    return s;
}
int main()
{
    vector<Contact> c;
    Contact t;
    size_t i;
    int ch,p;
    long long ph;
    string n;
    do
    {
        cout<<"\n====================================\n";
        cout<<"      CONTACT MANAGEMENT SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Add Contact\n";
        cout<<"2. Display All Contacts\n";
        cout<<"3. Search by Name\n";
        cout<<"4. Search by Phone Number\n";
        cout<<"5. Delete Contact\n";
        cout<<"6. Total Contacts\n";
        cout<<"7. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
                cout<<"\nName     : ";
                getline(cin,t.name);
                cout<<"Phone No : ";
                cin>>t.phone;
                cin.ignore();
                cout<<"Email    : ";
                getline(cin,t.email);
                cout<<"Address  : ";
                getline(cin,t.address);
                c.push_back(t); //add contact
                cout<<"\nContact Added Successfully!\n";
                break;
            case 2:
                if(c.empty()) //check if records exist
                {
                    cout<<"\nNo Contacts Found!\n";
                    break;
                }
                cout<<"\n";
                cout<<left
                    <<setw(25)<<"Name"
                    <<setw(15)<<"Phone"
                    <<endl;
                cout<<"---------------------------------------------------------------\n";
                for(i=0;i<c.size();i++)
                {
                    cout<<left
                        <<setw(25)<<u(c[i].name)
                        <<setw(15)<<c[i].phone
                        <<endl;
                }
                break;
            case 3:
                cout<<"Enter Name: ";
                getline(cin,n);
                p=0;
                for(i=0;i<c.size();i++)
                {
                    if(u(c[i].name)==u(n))
                    {
                        p++;
                        cout<<"\nName     : "<<u(c[i].name)<<endl;
                        cout<<"Phone No : "<<c[i].phone<<endl;
                        cout<<"Email    : "<<c[i].email<<endl;
                        cout<<"Address  : "<<c[i].address<<endl;
                    }
                }
                if(p==0)
                cout<<"Contact Not Found!\n";
                break;
            case 4:
                cout<<"Enter Phone Number: ";
                cin>>ph;
                p=0;
                for(i=0;i<c.size();i++)
                {
                    if(c[i].phone==ph)
                    {
                        p++;
                        cout<<"\nName: "<<u(c[i].name)<<endl;
                        cout<<"Email: "<<c[i].email<<endl;
                        cout<<"Address: "<<c[i].address<<endl;
                    }
                }
                if(p==0)
                cout<<"Contact Not Found!\n";
                break;
            case 5:
                cout<<"Enter Phone Number: ";
                cin>>ph;
                p=0;
                for(i=0;i<c.size();i++)
                {
                    if(((long long)c[i].phone==ph))
                    {
                        p++;
                        c.erase(c.begin()+(int)i); //delete contact
                        cout<<"Contact Deleted Successfully!\n";
                        break;
                    }
                }
                if(p==0)
                cout<<"Contact Not Found!\n";
                break;
            case 6:
                cout<<"\nTotal Contacts = "<<c.size()<<endl;
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