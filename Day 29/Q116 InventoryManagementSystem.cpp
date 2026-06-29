/*A Inventory Management System that records
Product ID
Product Name
Category
Quantity
Price per Unit*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip> //for setw()
#include<cctype>  //for toupper()
using namespace std;
struct Product //structure for easier management
{
    int id,qty;
    string name,cat;
    double price;
};
string u(string s) //function u to return uppercase
{
    for(char &c:s)
    c=(char)toupper((unsigned char)c);
    return s;
}
int main()
{
    vector<Product> p;
    Product t;
    int ch,id,q,c;
    size_t i;
    do
    {
        cout<<"\n====================================\n";
        cout<<"      INVENTORY MANAGEMENT SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Add Product\n";
        cout<<"2. Display All Products\n";
        cout<<"3. Search Product by ID\n";
        cout<<"4. Update Quantity\n";
        cout<<"5. Delete Product\n";
        cout<<"6. Total Number of Products\n";
        cout<<"7. Display Low Stock Products\n";
        cout<<"8. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        cin.ignore();
        switch(ch)
        {
            case 1:
                cout<<"\nProduct ID   : ";
                cin>>t.id;
                cin.ignore();
                cout<<"Product Name : ";
                getline(cin,t.name);
                cout<<"Category     : ";
                getline(cin,t.cat);
                cout<<"Quantity     : ";
                cin>>t.qty;
                cout<<"Price        : ";
                cin>>t.price;
                p.push_back(t);
                cout<<"\nProduct Added Successfully!\n";
                break;
            case 2:
                if(p.empty())
                {
                    cout<<"\nNo Products Found!\n";
                    break;
                }

                cout<<"\n";
                cout<<left
                    <<setw(10)<<"ID"
                    <<setw(25)<<"NAME"
                    <<setw(20)<<"CATEGORY"
                    <<setw(10)<<"QTY"
                    <<setw(12)<<"PRICE"
                    <<setw(15)<<"VALUE"
                    <<endl;
                cout<<"--------------------------------------------------------------------------\n";
                for(i=0;i<p.size();i++)
                {
                    cout<<left
                        <<setw(10)<<p[i].id
                        <<setw(25)<<u(p[i].name)
                        <<setw(20)<<u(p[i].cat)
                        <<setw(10)<<p[i].qty
                        <<setw(12)<<p[i].price
                        <<setw(15)<<p[i].qty*p[i].price
                        <<endl;
                }
                break;
            case 3:
                cout<<"Enter Product ID: ";
                cin>>id;
                c=0;
                for(i=0;i<p.size();i++)
                {
                    if(p[i].id==id)
                    {
                        c++;
                        cout<<"\nID       : "<<p[i].id<<endl;
                        cout<<"Name     : "<<u(p[i].name)<<endl;
                        cout<<"Category : "<<u(p[i].cat)<<endl;
                        cout<<"Quantity : "<<p[i].qty<<endl;
                        cout<<"Price    : "<<p[i].price<<endl;
                        cout<<"Value    : "<<p[i].qty*p[i].price<<endl;
                    }
                }
                if(c==0)
                cout<<"Product Not Found!\n";
                break;
            case 4:
                cout<<"Enter Product ID: ";
                cin>>id;
                c=0;
                for(i=0;i<p.size();i++)
                {
                    if(p[i].id==id)
                    {
                        c++;
                        cout<<"Current Quantity : "<<p[i].qty<<endl;
                        cout<<"Enter New Quantity: ";
                        cin>>q;
                        p[i].qty=q;
                        cout<<"Quantity Updated Successfully!\n";
                    }
                }
                if(c==0)
                cout<<"Product Not Found!\n";
                break;
            case 5:
                cout<<"Enter Product ID: ";
                cin>>id;
                c=0;
                for(i=0;i<p.size();i++)
                {
                    if(p[i].id==id)
                    {
                        c++;
                        p.erase(p.begin()+(int)i);
                        cout<<"Product Deleted Successfully!\n";
                        break;
                    }
                }
                if(c==0)
                cout<<"Product Not Found!\n";
                break;
            case 6:
                cout<<"\nTotal Products = "<<p.size()<<endl;
                break;
            case 7:
                c=0;
                cout<<"\nLow Stock Products (Quantity < 5)\n\n";
                for(i=0;i<p.size();i++)
                {
                    if(p[i].qty<5)
                    {
                        c++;
                        cout<<left
                            <<setw(10)<<p[i].id
                            <<setw(25)<<u(p[i].name)
                            <<setw(10)<<p[i].qty
                            <<endl;
                    }
                }
                if(c==0)
                cout<<"No Low Stock Products.\n";
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