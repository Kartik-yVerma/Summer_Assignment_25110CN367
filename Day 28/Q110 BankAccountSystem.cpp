/*A Bank Account System that records
Account Number
Customer Name
Age
Phone Number
Account Type
Balance
Status*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //for setw() and setprecision()
#include<cctype>  //for toupper()
using namespace std;
struct Account //structure for easier management
{
    long long acc,phone;
    int age;
    string name,type,status;
    double bal;
};
string u(string s) //function u to return uppercase
{
    for(char &c:s) //for every character in string s
    c=(char)toupper((unsigned char)c);
    return s;
}
int main()
{
    vector<Account> a; //stores all account records
    Account t; //temporary account object
    int ch,c;
    size_t i;
    long long ac;
    double amt;
    do
    {
        cout<<"\n====================================\n";
        cout<<"        BANK ACCOUNT SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Check Balance\n";
        cout<<"5. Display All Accounts\n";
        cout<<"6. Search by Account Number\n";
        cout<<"7. Close Account\n";
        cout<<"8. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
                cout<<"\nAccount Number : ";
                cin>>t.acc;
                cin.ignore();
                cout<<"Customer Name  : ";
                getline(cin,t.name);
                cout<<"Age            : ";
                cin>>t.age;
                cout<<"Phone Number   : ";
                cin>>t.phone;
                cin.ignore();
                cout<<"Account Type   : ";
                getline(cin,t.type);
                cout<<"Initial Deposit: ";
                cin>>t.bal;
                cin.ignore();
                t.status="ACTIVE"; //new account is active by default
                a.push_back(t); //add account to records
                cout<<"\nAccount Created Successfully!\n";
                break;
            case 2:
                cout<<"Enter Account Number: ";
                cin>>ac;
                c=0;
                for(i=0;i<a.size();i++)
                {
                    if(a[i].acc==ac && a[i].status=="ACTIVE")
                    {
                        c++;
                        cout<<"Amount to Deposit: ";
                        cin>>amt;
                        a[i].bal+=amt; //deposit money
                        cout<<"Deposit Successful!\n";
                        cout<<"New Balance = "<<fixed<<setprecision(2)<<a[i].bal<<endl;
                    }
                }
                if(c==0)
                cout<<"Account Not Found!\n";
                break;
            case 3:
                cout<<"Enter Account Number: ";
                cin>>ac;
                c=0;
                for(i=0;i<a.size();i++)
                {
                    if(a[i].acc==ac && a[i].status=="ACTIVE")
                    {
                        c++;
                        cout<<"Amount to Withdraw: ";
                        cin>>amt;
                        if(amt>a[i].bal) //cannot withdraw more than balance
                        cout<<"Insufficient Balance!\n";
                        else
                        {
                            a[i].bal-=amt; //withdraw money
                            cout<<"Withdrawal Successful!\n";
                            cout<<"Remaining Balance = "<<fixed<<setprecision(2)<<a[i].bal<<endl;
                        }
                    }
                }
                if(c==0)
                cout<<"Account Not Found!\n";
                break;
            case 4:
                cout<<"Enter Account Number: ";
                cin>>ac;
                c=0;
                for(i=0;i<a.size();i++)
                {
                    if(a[i].acc==ac)
                    {
                        c++;
                        cout<<"\nCustomer : "<<u(a[i].name)<<endl;
                        cout<<"Balance  : "<<fixed<<setprecision(2)<<a[i].bal<<endl;
                    }
                }
                if(c==0)
                cout<<"Account Not Found!\n";
                break;
            case 5:
                if(a.empty()) //check whether records exist
                {
                    cout<<"\nNo Accounts Found!\n";
                    break;
                }
                cout<<"\n";
                cout<<left
                    <<setw(15)<<"Account No"
                    <<setw(25)<<"Name"
                    <<setw(10)<<"Age"
                    <<setw(15)<<"Type"
                    <<setw(15)<<"Balance"
                    <<setw(15)<<"Status"
                    <<endl;
                cout<<"--------------------------------------------------------------------------\n";
                for(i=0;i<a.size();i++)
                {
                    cout<<left
                        <<setw(15)<<a[i].acc
                        <<setw(25)<<u(a[i].name)
                        <<setw(10)<<a[i].age
                        <<setw(15)<<u(a[i].type)
                        <<setw(15)<<fixed
                        <<setprecision(2)
                        <<a[i].bal
                        <<setw(15)
                        <<a[i].status
                        <<endl;
                }
                break;
            case 6:
                cout<<"Enter Account Number: ";
                cin>>ac;
                c=0;
                cout<<"\n";
                cout<<left
                    <<setw(25)<<"Name"
                    <<setw(10)<<"Age"
                    <<setw(15)<<"Phone Number"
                    <<setw(15)<<"Type"
                    <<setw(15)<<"Balance"
                    <<setw(15)<<"Status"
                    <<endl;
                cout<<"--------------------------------------------------------------------------\n";
                for(i=0;i<a.size();i++)
                {
                    if(a[i].acc==ac)
                    {
                        c++;
                        cout<<"Customer Name  : "<<u(a[i].name)<<endl;
                        cout<<"Age            : "<<a[i].age<<endl;
                        cout<<"Phone Number   : "<<a[i].phone<<endl;
                        cout<<"Account Type   : "<<u(a[i].type)<<endl;
                        cout<<"Balance        : "<<fixed<<setprecision(2)<<a[i].bal<<endl;
                        cout<<"Status         : "<<a[i].status<<endl;
                    }
                }
                if(c==0)
                cout<<"Account Not Found!\n";
                break;
            case 7:
                cout<<"Enter Account Number: ";
                cin>>ac;
                c=0;
                for(i=0;i<a.size();i++)
                {
                    if(a[i].acc==ac)
                    {
                        c++;
                        a[i].status="CLOSED"; //close account
                        cout<<"Account Closed Successfully!\n";
                    }
                }
                if(c==0)
                cout<<"Account Not Found!\n";
                break;
            case 8:
                cout<<"\nThank You!\n";
                break;
            default:
                cout<<"\nInvalid Choice!\n";
        }
    }while(ch!=8);
    return 0;
}