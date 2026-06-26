//Atm simulation
#include<iostream>
using namespace std;

int main()
{
    cout<<"================================"<<endl;
    cout<<"        ATM SIMULATION GUIDE"<<endl;
    cout<<"================================"<<endl;
    cout<<"Demo Details:"<<endl;
    cout<<"PIN : 4678"<<endl;
    cout<<"Initial Balance : Rs. 500000"<<endl;
    cout<<"Try Depositing and Withdrawing Money!"<<endl;
    cout<<"================================"<<endl<<endl;
    int pin=4678,p,op;
    double bal=500000,amt;
    int t=3;
    while(t>0)
    {
        cout<<"Enter PIN: ";
        cin>>p;
        if(p==pin)
        break;
        t--;
        cout<<"Incorrect PIN. Attempts Left: "<<t<<endl;
    }
    if(t==0)
    {
        cout<<"Card Blocked!"<<endl;
        return 0;
    }
    do
    {
        cout<<"\n===== ATM MENU ====="<<endl;
        cout<<"1. Check Balance"<<endl;
        cout<<"2. Deposit"<<endl;
        cout<<"3. Withdraw"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>op;
        switch(op)
        {
            case 1:
                cout<<"Current Balance: Rs. "<<bal<<endl;
                break;
            case 2:
                cout<<"Enter Amount to Deposit: ";
                cin>>amt;
                if(amt>0)
                {
                    bal+=amt;
                    cout<<"Deposit Successful!"<<endl;
                    cout<<"New Balance: Rs. "<<bal<<endl;
                }
                else
                {
                    cout<<"Invalid Amount!"<<endl;
                }
                break;
            case 3:
                cout<<"Enter Amount to Withdraw: ";
                cin>>amt;
                if(amt<=0)
                {
                    cout<<"Invalid Amount!"<<endl;
                }
                else if(amt>bal)
                {
                    cout<<"Insufficient Balance!"<<endl;
                }
                else
                {
                    bal-=amt;
                    cout<<"Please Collect Your Cash."<<endl;
                    cout<<"Remaining Balance: Rs. "<<bal<<endl;
                }
                break;
            case 4:
                cout<<"Thank You For Using Our ATM!"<<endl;
                break;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    }while(op!=4);
    return 0;
}