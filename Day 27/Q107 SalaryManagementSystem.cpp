/*A Salary Management System that records
Employee ID
Name
Basic Salary
Bonus
Deduction
Net Salary*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //for structured output using setw()
#include<cctype>  //for uppercase conversion
using namespace std;
struct Employee //structure for easier management
{
    int id;
    string name;
    double basic,bonus,deduction,net;
};
string u(string s) //function u to return uppercase
{
    for(char &c:s) //for every character in string s
        c=(char)toupper((unsigned char)c);
    return s;
}
int main()
{
    vector<Employee> e;
    Employee t;
    int ch,id,c;
    double s,total,mx;
    do
    {
        cout<<"\n====================================\n";
        cout<<"      SALARY MANAGEMENT SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Add Employee Record\n";
        cout<<"2. Display All Records\n";
        cout<<"3. Search by Employee ID\n";
        cout<<"4. Display Employees Above a Salary\n";
        cout<<"5. Display Highest Paid Employee\n";
        cout<<"6. Total Salary Expenditure\n";
        cout<<"7. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore(); //ignores \n
        switch(ch)
        {
            case 1:
                cout<<"\nEmployee ID  : ";
                cin>>t.id;
                cin.ignore();
                cout<<"Name         : ";
                getline(cin,t.name);
                cout<<"Basic Salary : ";
                cin>>t.basic;
                cout<<"Bonus        : ";
                cin>>t.bonus;
                cout<<"Deduction    : ";
                cin>>t.deduction;
                //calculate net salary
                t.net=t.basic+t.bonus-t.deduction;
                e.push_back(t); //add employee record
                cout<<"\nRecord Added Successfully!\n";
                break;
            case 2:
                if(e.empty())
                {
                    cout<<"\nNo Records Found!\n";
                    break;
                }
                cout<<"\n";
                cout<<left
                    <<setw(10)<<"ID"
                    <<setw(25)<<"Name"
                    <<setw(15)<<"Basic"
                    <<setw(15)<<"Bonus"
                    <<setw(15)<<"Deduction"
                    <<setw(15)<<"Net Salary"
                    <<endl;
                cout<<"--------------------------------------------------------------------------\n";
                for(size_t i=0;i<e.size();i++)
                {
                    cout<<left
                        <<setw(10)<<e[i].id
                        <<setw(25)<<u(e[i].name)
                        <<setw(15)<<e[i].basic
                        <<setw(15)<<e[i].bonus
                        <<setw(15)<<e[i].deduction
                        <<setw(15)<<e[i].net
                        <<endl;
                }
                break;
            case 3:
                cout<<"Enter Employee ID: ";
                cin>>id;
                c=0;
                for(size_t i=0;i<e.size();i++)
                {
                    if(e[i].id==id)
                    {
                        c++;
                        cout<<"\nEmployee Found\n";
                        cout<<"ID         : "<<e[i].id<<endl;
                        cout<<"Name       : "<<u(e[i].name)<<endl;
                        cout<<"Basic      : "<<e[i].basic<<endl;
                        cout<<"Bonus      : "<<e[i].bonus<<endl;
                        cout<<"Deduction  : "<<e[i].deduction<<endl;
                        cout<<"Net Salary : "<<e[i].net<<endl;
                    }
                }
                if(c==0)
                cout<<"Employee Not Found!\n";
                break;
            case 4:
            {
                int ch2;
                cout<<"\n1. Employees Above a Salary\n";
                cout<<"2. Employees Below a Salary\n";
                cout<<"3. Employees on Salary\n";
                cout<<"Enter Choice: ";
                cin>>ch2;
                cout<<"Enter Salary: ";
                cin>>s;
                c=0;
                switch(ch2)
                {
                    case 1:
                    cout<<"\n";
                    cout<<left
                        <<setw(10)<<"ID"
                        <<setw(25)<<"Name"
                        <<setw(15)<<"Net Salary"
                        <<endl;
                    cout<<"-----------------------------------------------\n";
                    for(size_t i=0;i<e.size();i++)
                    {
                        if(e[i].net>s)
                        {
                            c++;
                            cout<<left
                                <<setw(10)<<e[i].id
                                <<setw(25)<<u(e[i].name)
                                <<setw(15)<<e[i].net
                                <<endl;
                        }
                    }
                    cout<<"Employees Found = "<<c<<endl;
                    break;
                    case 2:
                    cout<<"\n";
                    cout<<left
                        <<setw(10)<<"ID"
                        <<setw(25)<<"Name"
                        <<setw(15)<<"Net Salary"
                        <<endl;
                    cout<<"-----------------------------------------------\n";
                    for(size_t i=0;i<e.size();i++)
                    {
                        if(e[i].net<s)
                        {
                            c++;
                            cout<<left
                                <<setw(10)<<e[i].id
                                <<setw(25)<<u(e[i].name)
                                <<setw(15)<<e[i].net
                                <<endl;
                        }
                    }
                    cout<<"Employees Found = "<<c<<endl;
                    break;
                    case 3:
                    cout<<"\n";
                    cout<<left
                        <<setw(10)<<"ID"
                        <<setw(25)<<"Name"
                        <<setw(15)<<"Net Salary"
                        <<endl;
                    cout<<"-----------------------------------------------\n";
                    for(size_t i=0;i<e.size();i++)
                    {
                        if(e[i].net==s)
                        {
                            c++;
                            cout<<left
                                <<setw(10)<<e[i].id
                                <<setw(25)<<u(e[i].name)
                                <<setw(15)<<e[i].net
                                <<endl;
                        }
                    }
                    cout<<"Employees Found = "<<c<<endl;
                    break;
                    default:
                    cout<<"Invalid Choice!\n";
                    }
                break;
                }
            case 5:
            {
                if(e.empty())
                {
                    cout<<"No Records Found!\n";
                    break;
                }
                //assume first employee has highest salary
                mx=e[0].net;
                size_t p=0;
                //find highest paid employee
                for(size_t i=1;i<e.size();i++)
                {
                    if(e[i].net>mx)
                    {
                        mx=e[i].net;
                        p=i;
                    }
                }
                cout<<"\nHighest Paid Employee\n";
                cout<<"ID         : "<<e[p].id<<endl;
                cout<<"Name       : "<<u(e[p].name)<<endl;
                cout<<"Net Salary : "<<e[p].net<<endl;
                break;
            }
            case 6:
                total=0;
                //calculate total salary expenditure
                for(size_t i=0;i<e.size();i++)
                    total+=e[i].net;
                cout<<"Total Salary Expenditure = "
                    <<total<<endl;
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