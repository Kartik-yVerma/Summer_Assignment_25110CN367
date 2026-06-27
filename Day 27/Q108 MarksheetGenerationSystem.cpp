/*A Marksheet Generation System that records
Name
Roll No
Class
Marks of Subjects
Total
Percentage
Grade
Result*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //for setw() and setprecision()
using namespace std;
struct Student //structure for easier management
{
    int roll,total;
    string name,clas;
    vector<int> m; //marks in subjects
    double per;
    char grade;
    string result;
};
char g(double p) //function g to return grade
{
    if(p>=90) return 'A';
    if(p>=75) return 'B';
    if(p>=60) return 'C';
    if(p>=40) return 'D';
    return 'F';
}
int main()
{
    vector<Student> s;
    vector<string> sub;
    Student t;
    size_t i,j,n,c;
    int ch;
    //input subjects once for the entire class
    cout<<"Number of Subjects : ";
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++)
    {
        string x;
        cout<<"Enter Subject "<<i+1<<" : ";
        getline(cin,x);
        sub.push_back(x);
    }
    do
    {
        cout<<"\n====================================\n";
        cout<<"      MARKSHEET GENERATION SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Generate New Marksheet\n";
        cout<<"2. Display All Generated Marksheets\n";
        cout<<"3. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
                cout<<"\nName    : ";
                getline(cin,t.name);
                cout<<"Roll No : ";
                cin>>t.roll;
                cin.ignore();
                cout<<"Class   : ";
                getline(cin,t.clas);
                t.m.clear();
                t.total=0;
                c=0;
                //input marks
                for(i=0;i<n;i++)
                {
                    int marks;
                    cout<<"Marks in "<<sub[i]<<" : ";
                    cin>>marks;
                    t.m.push_back(marks);
                    if(marks>=40)
                    c++;
                    t.total+=marks;
                }
                //calculate percentage
                t.per=(double)t.total/n;
                //calculate grade
                t.grade=g(t.per);
                //determine result
                if(c==n)
                t.result="PASS";
                else
                t.result="FAIL";
                s.push_back(t);
                cout<<"\nMarksheet Generated Successfully!\n";
                break;
            case 2:
                if(s.empty())
                {
                    cout<<"\nNo Marksheets Found!\n";
                    break;
                }
                //display all marksheets
                for(i=0;i<s.size();i++)
                {
                    cout<<"\n";
                    cout<<"=============================================\n";
                    cout<<"                MARKSHEET\n";
                    cout<<"=============================================\n";
                    cout<<left<<setw(15)<<"Name"<<": "<<s[i].name<<endl;
                    cout<<left<<setw(15)<<"Roll No"<<": "<<s[i].roll<<endl;
                    cout<<left<<setw(15)<<"Class"<<": "<<s[i].clas<<endl;
                    cout<<"---------------------------------------------\n";
                    cout<<left <<setw(30)<<"Subject "<<"Marks\n";
                    cout<<"---------------------------------------------\n";
                    for(j=0;j<n;j++)
                    {
                        cout<<left<<setw(30)<<sub[j]<<s[i].m[j]<<endl;
                    }
                    cout<<"---------------------------------------------\n";
                    cout<<left<<setw(15)<<"Total"<<": "<<s[i].total<<endl;
                    cout<<left<<setw(15)<<"Percentage"<<": "<<fixed<<setprecision(2)<<s[i].per<<"%\n";
                    cout<<left<<setw(15)<<"Grade"<<": "<<s[i].grade<<endl;
                    cout<<left<<setw(15)<<"Result"<<": "<<s[i].result<<endl;
                    cout<<"=============================================\n";
                }
                break;
            case 3:
                cout<<"\nThank You!\n";
                break;
            default:
                cout<<"\nInvalid Choice!\n";
        }
    }while(ch!=3);
    return 0;
}