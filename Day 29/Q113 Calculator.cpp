/*A Menu-Driven Calculator that performs
Addition
Subtraction
Multiplication
Division
Modulus
Power*/
#include<iostream>
#include<cmath> //for pow()
using namespace std;
int main()
{
    int ch;
    double a,b;
    do
    {
        cout<<"\n====================================\n";
        cout<<"        MENU DRIVEN CALCULATOR\n";
        cout<<"====================================\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Modulus\n";
        cout<<"6. Power\n";
        cout<<"7. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        if(ch>=1 && ch<=6)
        {
            cout<<"Enter First Number : ";
            cin>>a;
            cout<<"Enter Second Number: ";
            cin>>b;
        }
        switch(ch)
        {
            case 1:
                cout<<"Result = "<<a+b<<endl;
                break;
            case 2:
                cout<<"Result = "<<a-b<<endl;
                break;
            case 3:
                cout<<"Result = "<<a*b<<endl;
                break;
            case 4:
                if(b==0)
                cout<<"Division by zero is not possible!\n";
                else
                cout<<"Result = "<<a/b<<endl;
                break;
            case 5:
                if((int)b==0)
                cout<<"Modulus by zero is not possible!\n";
                else
                cout<<"Result = "<<(int)a%(int)b<<endl;
                break;
            case 6:
                cout<<"Result = "<<pow(a,b)<<endl;
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