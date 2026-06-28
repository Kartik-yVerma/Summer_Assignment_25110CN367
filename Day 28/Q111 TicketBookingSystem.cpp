/*A Ticket Booking System that records
Passenger Name
Age
Gender
Source
Destination
Journey Date
Seat Number
Ticket Price
Ticket Status*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //for setw() and setprecision()
#include<cctype>  //for toupper()
#include<cstdlib> //for rand() and srand()
#include<ctime>   //for time()
using namespace std;
struct Ticket //structure for easier management
{
    int id,age,seat;
    string name,gender;
    string source,dest,date;
    double price;
    string status;
};
string u(string s) //function u to return uppercase
{
    for(char &c:s) //for every character in string s
    c=(char)toupper((unsigned char)c);
    return s;
}
int main()
{
    srand((unsigned)time(0)); //seed for random numbers
    vector<Ticket> t; //stores all booked tickets
    Ticket x;         //temporary ticket object
    size_t i;
    int ch,id,c;
    bool found;
    do
    {
        cout<<"\n====================================\n";
        cout<<"        TICKET BOOKING SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Book Ticket\n";
        cout<<"2. View Ticket\n";
        cout<<"3. Cancel Ticket\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
                cout<<"\nTicket ID: ";
                cin>>x.id;
                cin.ignore();
                cout<<"Passenger Name: ";
                getline(cin,x.name);
                cout<<"Age: ";
                cin>>x.age;
                cin.ignore();
                cout<<"Gender: ";
                getline(cin,x.gender);
                cout<<"Source: ";
                getline(cin,x.source);
                cout<<"Destination: ";
                getline(cin,x.dest);
                cout<<"Journey Date: ";
                getline(cin,x.date);
                cout<<"Ticket Price: ";
                cin>>x.price;
                cin.ignore();
                //generate a random available seat
                do
                {
                    found=false;
                    x.seat=rand()%50+1; //seat numbers from 1 to 50
                    for(i=0;i<t.size();i++)
                    {
                        if(t[i].seat==x.seat && t[i].status=="BOOKED")
                        {
                            found=true;
                            break;
                        }
                    }
                }
                while(found);
                cout<<"Seat Number Allotted : "<<x.seat<<endl;
                x.status="BOOKED";
                t.push_back(x); //store ticket
                cout<<"\nTicket Booked Successfully!\n";
                break;
            case 2:
                cout<<"Enter Ticket ID: ";
                cin>>id;
                c=0;
                for(i=0;i<t.size();i++)
                {
                    if(t[i].id==id)
                    {
                        c++;
                        cout<<"\n====================================\n";
                        cout<<"              E-TICKET\n";
                        cout<<"====================================\n";
                        cout<<left<<setw(18)<<"Ticket ID"<<": "<<t[i].id<<endl;
                        cout<<left<<setw(18)<<"Passenger Name"<<": "<<u(t[i].name)<<endl;
                        cout<<left<<setw(18)<<"Age"<<": "<<t[i].age<<endl;
                        cout<<left<<setw(18)<<"Gender"<<": "<<u(t[i].gender)<<endl;
                        cout<<left<<setw(18)<<"Journey"<<": "<<u(t[i].source)<<" -> "<<u(t[i].dest)<<endl;
                        cout<<left<<setw(18)<<"Journey Date"<<": "<<t[i].date<<endl;
                        cout<<left<<setw(18)<<"Seat Number"<<": "<<t[i].seat<<endl;
                        cout<<left<<setw(18)<<"Ticket Price"<<": "<<fixed<<setprecision(2)<<t[i].price<<endl;
                        cout<<left<<setw(18)<<"Status"<<": "<<t[i].status<<endl;
                        cout<<"====================================\n";
                    }
                }
                if(c==0)
                cout<<"Ticket Not Found!\n";
                break;
            case 3:
                cout<<"Enter Ticket ID: ";
                cin>>id;
                c=0;
                for(i=0;i<t.size();i++)
                {
                    if(t[i].id==id)
                    {
                        c++;
                        if(t[i].status=="CANCELLED")
                        cout<<"Ticket Already Cancelled!\n";
                        else
                        {
                            t[i].status="CANCELLED";
                            cout<<"Ticket Cancelled Successfully!\n";
                            cout<<"Seat "<<t[i].seat<<" is now available again.\n";
                        }
                    }
                }
                if(c==0)
                cout<<"Ticket Not Found!\n";
                break;
            case 4:
                cout<<"\nThank You!\n";
                break;
            default:
                cout<<"\nInvalid Choice!\n";
        }
    }while(ch!=4);
    return 0;
}