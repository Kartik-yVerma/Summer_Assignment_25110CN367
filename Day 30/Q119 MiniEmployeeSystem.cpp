/*A Mini Employee Management System that records
Employee ID
Employee Name
Age
Post
Salary*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //for setw()
#include<cctype>  //for toupper()
using namespace std;
struct Employee //structure for easier management
{
    int id,age;
    string name,post;
    double salary;
};
string u(string s) //function u to return uppercase
{
    for(char &c:s)
    c=(char)toupper((unsigned char)c);
    return s;
}
int main()
{
    vector<Employee> e;
    Employee t;
    int ch,id,c;
    size_t i;
    double sal;
    do
    {
        cout<<"\n====================================\n";
        cout<<"    MINI EMPLOYEE MANAGEMENT\n";
        cout<<"====================================\n";
        cout<<"1. Add Employee\n";
        cout<<"2. Display All Employees\n";
        cout<<"3. Search Employee by ID\n";
        cout<<"4. Update Salary\n";
        cout<<"5. Total Employees\n";
        cout<<"6. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
                cout<<"\nEmployee ID : ";
                cin>>t.id;
                cin.ignore();
                cout<<"Name: ";
                getline(cin,t.name);
                cout<<"Age: ";
                cin>>t.age;
                cin.ignore();
                cout<<"Post: ";
                getline(cin,t.post);
                cout<<"Salary: ";
                cin>>t.salary;
                e.push_back(t);
                cout<<"\nEmployee Added Successfully!\n";
                break;
            case 2:
                if(e.empty())
                {
                    cout<<"\nNo Employees Found!\n";
                    break;
                }
                cout<<"\n";
                cout<<left
                    <<setw(10)<<"ID"
                    <<setw(25)<<"NAME"
                    <<setw(8)<<"AGE"
                    <<setw(20)<<"POST"
                    <<setw(12)<<"SALARY"
                    <<endl;
                cout<<"-----------------------------------------------------------------\n";
                for(i=0;i<e.size();i++)
                {
                    cout<<left
                        <<setw(10)<<e[i].id
                        <<setw(25)<<u(e[i].name)
                        <<setw(8)<<e[i].age
                        <<setw(20)<<u(e[i].post)
                        <<setw(12)<<e[i].salary
                        <<endl;
                }
                break;
            case 3:
                cout<<"Enter Employee ID: ";
                cin>>id;
                c=0;
                for(i=0;i<e.size();i++)
                {
                    if(e[i].id==id)
                    {
                        c++;
                        cout<<"\nEmployee ID : "<<e[i].id<<endl;
                        cout<<"Name        : "<<u(e[i].name)<<endl;
                        cout<<"Age         : "<<e[i].age<<endl;
                        cout<<"Post        : "<<u(e[i].post)<<endl;
                        cout<<"Salary      : "<<e[i].salary<<endl;
                    }
                }
                if(c==0)
                cout<<"Employee Not Found!\n";
                break;
            case 4:
                cout<<"Enter Employee ID: ";
                cin>>id;
                c=0;
                for(i=0;i<e.size();i++)
                {
                    if(e[i].id==id)
                    {
                        c++;
                        cout<<"Current Salary : "<<e[i].salary<<endl;
                        cout<<"Enter New Salary: ";
                        cin>>sal;
                        e[i].salary=sal;
                        cout<<"Salary Updated Successfully!\n";
                    }
                }
                if(c==0)
                cout<<"Employee Not Found!\n";
                break;
            case 5:
                cout<<"\nTotal Employees = "<<e.size()<<endl;
                break;
            case 6:
                cout<<"\nThank You!\n";
                break;
            default:
                cout<<"\nInvalid Choice!\n";
        }
    }while(ch!=6);
    return 0;
}