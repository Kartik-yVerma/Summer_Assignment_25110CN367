//Donation record mini project system
#include <iostream>
#include <string>
using namespace std;
const int MAX=100;
struct Donation
{
    int id;
    string name;
    float amount;
    string purpose;
    string date;
};
Donation d[MAX];
int n=0;
void addDonation()
{
    if(n>=MAX)
    { 
        cout<<"Database Full!\n"; 
        return; 
    }
    cout<<"Donor ID: "; 
    cin>>d[n].id;
    cin.ignore();
    cout<<"Donor Name: "; 
    getline(cin,d[n].name);
    cout<<"Amount: "; 
    cin>>d[n].amount;
    cin.ignore();
    cout<<"Purpose: "; 
    getline(cin,d[n].purpose);
    cout<<"Date (DD/MM/YYYY): "; 
    getline(cin,d[n].date);
    n++;
    cout<<"Record Added!\n";
}
void display()
{
    if(n==0)
    { 
        cout<<"No records.\n";
        return; 
    }
    cout<<"\nID\tName\t\tAmount\tPurpose\t\tDate\n";
    cout<<"-----------------------------------------------------------\n";
    for(int i=0;i<n;i++)
    cout<<d[i].id<<"\t"<<d[i].name<<"\t\t"<<d[i].amount<<"\t"<<d[i].purpose<<"\t\t"<<d[i].date<<"\n";
}
int searchIndexByID(int id)
{
    for(int i=0;i<n;i++) 
    if(d[i].id==id) 
    return i;
    return -1;
}
void searchDonation()
{
    int id; 
    cout<<"Enter Donor ID: "; 
    cin>>id;
    int i=searchIndexByID(id);
    if(i==-1){ cout<<"Record not found.\n"; return; }
    cout<<"\nID: "<<d[i].id
        <<"\nName: "<<d[i].name
        <<"\nAmount: "<<d[i].amount
        <<"\nPurpose: "<<d[i].purpose
        <<"\nDate: "<<d[i].date<<"\n";
}
void updateDonation()
{
    int id; 
    cout<<"Enter Donor ID: "; 
    cin>>id;
    int i=searchIndexByID(id);
    if(i==-1)
    { 
        cout<<"Record not found.\n"; 
        return; 
    }
    cin.ignore();
    cout<<"New Name: "; getline(cin,d[i].name);
    cout<<"New Amount: "; cin>>d[i].amount;
    cin.ignore();
    cout<<"New Purpose: "; getline(cin,d[i].purpose);
    cout<<"New Date: "; getline(cin,d[i].date);
    cout<<"Updated.\n";
}
void deleteDonation()
{
    int id; 
    cout<<"Enter Donor ID: "; 
    cin>>id;
    int i=searchIndexByID(id);
    if(i==-1)
    {
         cout<<"Record not found.\n"; 
         return; 
    }
    for(int j=i;j<n-1;j++) 
    d[j]=d[j+1];
    n--;
    cout<<"Deleted.\n";
}
void totalDonation()
{
    float total=0;
    for(int i=0;i<n;i++) 
    total+=d[i].amount;
    cout<<"Total Donors: "<<n<<"\nTotal Donation: "<<total<<"\n";
}
void highestDonation()
{
    if(n==0)
    { 
        cout<<"No records.\n"; 
        return; 
    }
    int idx=0;
    for(int i=1;i<n;i++) 
    if(d[i].amount>d[idx].amount) 
    idx=i;
    cout<<"Highest Donor: "<<d[idx].name<<"\nAmount: "<<d[idx].amount<<"\n";
}
void sortAmount()
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(d[j].amount>d[j+1].amount)
            {
                Donation t=d[j]; 
                d[j]=d[j+1]; 
                d[j+1]=t;
            }
    cout<<"Sorted by amount.\n";
}
int main()
{
    int ch;
    do{
        cout<<"\n==== DONATION RECORD SYSTEM ====\n";
        cout<<"1.Add Donation\n2.Display\n3.Search\n4.Update\n5.Delete\n6.Total\n7.Highest\n8.Sort by Amount\n9.Exit\nChoice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            addDonation();
            break;
            case 2:
            display();
            break;
            case 3:
            searchDonation();
            break;
            case 4:
            updateDonation();
            break;
            case 5:
            deleteDonation();
            break;
            case 6:
            totalDonation();
            break;
            case 7:
            highestDonation();
            break;
            case 8:
            sortAmount();
            break;
            case 9:
            cout<<"Thank You!\n";
            break;
            default:
            cout<<"Invalid Choice\n";
        }
    }while(ch!=9);
    return 0;
}