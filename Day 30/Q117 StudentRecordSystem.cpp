/*A Student Record System using Arrays and Strings that records
Name
Roll Number
Age
Branch*/
#include<iostream>
#include<string>
#include<iomanip> //for setw()
using namespace std;
int main()
{
    string name[100],branch[100];
    int roll[100],age[100];
    int n=0,ch,r,i,p;
    do
    {
        cout<<"\n====================================\n";
        cout<<"       STUDENT RECORD SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Add Student\n";
        cout<<"2. Display All Students\n";
        cout<<"3. Search by Roll Number\n";
        cout<<"4. Delete Student\n";
        cout<<"5. Total Students\n";
        cout<<"6. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
                cout<<"\nName: ";
                getline(cin,name[n]);
                cout<<"Roll No: ";
                cin>>roll[n];
                cout<<"Age: ";
                cin>>age[n];
                cin.ignore();
                cout<<"Branch: ";
                getline(cin,branch[n]);
                n++;
                cout<<"\nStudent Added Successfully!\n";
                break;
            case 2:
                if(n==0)
                {
                    cout<<"\nNo Records Found!\n";
                    break;
                }
                cout<<"\n";
                cout<<left
                    <<setw(10)<<"ROLL"
                    <<setw(25)<<"NAME"
                    <<setw(8)<<"AGE"
                    <<setw(15)<<"BRANCH"
                    <<endl;
                cout<<"------------------------------------------------------------\n";
                for(i=0;i<n;i++)
                {
                    cout<<left
                        <<setw(10)<<roll[i]
                        <<setw(25)<<name[i]
                        <<setw(8)<<age[i]
                        <<setw(15)<<branch[i]
                        <<endl;
                }
                break;
            case 3:
                cout<<"Enter Roll Number: ";
                cin>>r;
                p=0;
                for(i=0;i<n;i++)
                {
                    if(roll[i]==r)
                    {
                        p=1;
                        cout<<"\nName    : "<<name[i]<<endl;
                        cout<<"Roll No : "<<roll[i]<<endl;
                        cout<<"Age     : "<<age[i]<<endl;
                        cout<<"Branch  : "<<branch[i]<<endl;
                        break;
                    }
                }
                if(p==0)
                cout<<"Student Not Found!\n";
                break;
            case 4:
                cout<<"Enter Roll Number: ";
                cin>>r;
                p=0;
                for(i=0;i<n;i++)
                {
                    if(roll[i]==r)
                    {
                        p=1;
                        for(int j=i;j<n-1;j++)
                        {
                            name[j]=name[j+1];
                            roll[j]=roll[j+1];
                            age[j]=age[j+1];
                            branch[j]=branch[j+1];
                        }
                        n--;
                        cout<<"Student Deleted Successfully!\n";
                        break;
                    }
                }
                if(p==0)
                cout<<"Student Not Found!\n";
                break;
            case 5:
                cout<<"\nTotal Students = "<<n<<endl;
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