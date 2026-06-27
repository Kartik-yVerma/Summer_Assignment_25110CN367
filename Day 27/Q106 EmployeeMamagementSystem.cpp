/*An Employee Management System that records
Name
Age
Post
Years of Service
Salary*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //to give structured output with setw() function.
#include<cctype>  //for lowercase and uppercase
using namespace std;
struct Employee //structure for easier management
{
    string name,post,salary;
    int age,year;
};
string l(string s) //function l to return lowercase for case-insensitive search
{
    for(char &c:s) //for every character in string s
    c=(char)tolower((unsigned char)c);
    return s;
}
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
    int ch,a,y,c;
    string p;
    do
    {
        cout<<"\n====================================\n";
        cout<<"    EMPLOYEE MANAGEMENT SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Add Employee\n";
        cout<<"2. Display All Employees\n";
        cout<<"3. Total Number of Employees\n";
        cout<<"4. Display Employees in a Post\n";
        cout<<"5. Display Employees of an Age\n";
        cout<<"6. Display Employees with Given Years of Service\n";
        cout<<"7. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore(); //ignores \n
        switch(ch)
        {
            case 1:
                cout<<"\nName: ";
                getline(cin,t.name);
                cout<<"Age: ";
                cin>>t.age;
                cin.ignore();
                cout<<"Post: ";
                getline(cin,t.post);
                cout<<"Years of Service: ";
                cin>>t.year;
                cout<<"Salary: ";
                cin>>t.salary;
                e.push_back(t);
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
                    <<setw(25)<<"Name"
                    <<setw(8)<<"Age"
                    <<setw(20)<<"Post"
                    <<setw(18)<<"Service(Yrs)"
                    <<setw(15)<<"Salary"<<endl;
                cout<<"-----------------------------------------------------------------------\n";
                for(size_t i=0;i<e.size();i++)
                {
                    cout<<left
                        <<setw(25)<<u(e[i].name)
                        <<setw(8)<<e[i].age
                        <<setw(20)<<u(e[i].post)
                        <<setw(18)<<e[i].year
                        <<setw(15)<<e[i].salary
                        <<endl;
                }
                break;
            case 3:
                cout<<"\nTotal Employees = "<<e.size()<<endl;
                break;
            case 4:
                cout<<"Enter Post: ";
                getline(cin,p);
                c=0;
                cout<<"\n";
                cout<<left
                    <<setw(25)<<"Name"
                    <<setw(8)<<"Age"
                    <<setw(18)<<"Service(Yrs)"
                    <<setw(15)<<"Salary"<<endl;
                cout<<"-------------------------------------------------------------\n";
                for(size_t i=0;i<e.size();i++)
                {
                    if(l(e[i].post)==l(p))
                    {
                        c++;
                        cout<<left
                            <<setw(25)<<u(e[i].name)
                            <<setw(8)<<e[i].age
                            <<setw(18)<<e[i].year
                            <<setw(15)<<u(e[i].salary)
                            <<endl;
                    }
                }
                cout<<"Employees in "<<p<<" = "<<c<<endl;
                break;
            case 5:
                cout<<"Enter Age: ";
                cin>>a;
                c=0;
                cout<<"\n";
                cout<<left
                    <<setw(25)<<"Name"
                    <<setw(20)<<"Post"
                    <<setw(18)<<"Service(Yrs)"
                    <<setw(15)<<"Salary"<<endl;
                cout<<"-------------------------------------------------------------\n";
                for(size_t i=0;i<e.size();i++)
                {
                    if(e[i].age==a)
                    {
                        c++;
                        cout<<left
                            <<setw(25)<<u(e[i].name)
                            <<setw(20)<<u(e[i].post)
                            <<setw(18)<<e[i].year
                            <<setw(15)<<u(e[i].salary)
                            <<endl;
                    }
                }
                cout<<"Employees of Age "<<a<<" = "<<c<<endl;
                break;
            case 6:
                cout<<"Enter Years of Service: ";
                cin>>y;
                c=0;
                cout<<"\n";
                cout<<left
                    <<setw(25)<<"Name"
                    <<setw(8)<<"Age"
                    <<setw(20)<<"Post"
                    <<setw(15)<<"Salary"
                    <<endl;
                cout<<"-------------------------------------------------------------\n";
                for(size_t i=0;i<e.size();i++)
                {
                    if(e[i].year==y)
                    {
                        c++;
                        cout<<left
                            <<setw(25)<<u(e[i].name)
                            <<setw(8)<<e[i].age
                            <<setw(20)<<u(e[i].post)
                            <<setw(15)<<u(e[i].salary)
                            <<endl;
                    }
                }
                cout<<"Employees with "<<y<<" years of service = "<<c<<endl;
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