//To check vote eligibility (Age,citizenship,vote registered)
#include<iostream>
using namespace std;
int main()
{
    int age;
    char citizen,registered;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Are you a citizen? (Y/N): ";
    cin>>citizen;
    cout<<"Are you registered to vote? (Y/N): ";
    cin>>registered;
    if(age<0)
    {
        cout<<"Invalid Age";
    }
    else if(age<18)
    {
        cout<<"Not Eligible to Vote."<<endl;
        cout<<"You can vote after "<<18-age<<" year(s).";
    }
    else if(citizen!='Y' && citizen!='y')
    {
        cout<<"Not Eligible: You are not a citizen.";
    }
    else if(registered!='Y' && registered!='y')
    {
        cout<<"Not Eligible: You are not registered to vote.";
    }
    else
    {
        cout<<"Congratulations! You are Eligible to Vote.";
    }
    return 0;
}