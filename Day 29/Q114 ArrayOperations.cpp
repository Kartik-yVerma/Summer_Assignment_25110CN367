/*A Menu-Driven Array Operations System that performs
Display
Insertion
Deletion
Searching
Maximum
Minimum
Sum
Average
Sorting*/
#include<iostream>
using namespace std;
int main()
{
    int a[100],n,ch;
    int i,pos,x;
    cout<<"Enter Number of Elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements:\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    do
    {
        cout<<"\n====================================\n";
        cout<<"      ARRAY OPERATIONS SYSTEM\n";
        cout<<"====================================\n";
        cout<<"1. Display Array\n";
        cout<<"2. Insert Element\n";
        cout<<"3. Delete Element\n";
        cout<<"4. Search Element\n";
        cout<<"5. Find Maximum\n";
        cout<<"6. Find Minimum\n";
        cout<<"7. Find Sum\n";
        cout<<"8. Find Average\n";
        cout<<"9. Sort Array\n";
        cout<<"10. Exit\n";
        cout<<"Enter Choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Array: ";
                for(i=0;i<n;i++)
                cout<<a[i]<<" ";
                cout<<endl;
                break;
            case 2:
                cout<<"Enter Position (1-"<<n+1<<"): ";
                cin>>pos;
                if(pos<1 || pos>n+1)
                {
                    cout<<"Invalid Position!\n";
                    break;
                }

                cout<<"Enter Element: ";
                cin>>x;
                for(i=n;i>=pos;i--)
                a[i]=a[i-1];
                a[pos-1]=x;
                n++;
                cout<<"Element Inserted Successfully!\n";
                break;
            case 3:
                cout<<"Enter Position (1-"<<n<<"): ";
                cin>>pos;
                if(pos<1 || pos>n)
                {
                    cout<<"Invalid Position!\n";
                    break;
                }
                for(i=pos-1;i<n-1;i++)
                a[i]=a[i+1];
                n--;
                cout<<"Element Deleted Successfully!\n";
                break;
            case 4:
            {
                int f=0;
                cout<<"Enter Element to Search: ";
                cin>>x;
                for(i=0;i<n;i++)
                {
                    if(a[i]==x)
                    {
                        f=1;
                        cout<<"Element Found at Position "<<i+1<<endl;
                        break;
                    }
                }
                if(f==0)
                cout<<"Element Not Found!\n";
                break;
            }
            case 5:
            {
                int mx=a[0];
                for(i=1;i<n;i++)
                if(a[i]>mx)
                mx=a[i];
                cout<<"Maximum = "<<mx<<endl;
                break;
            }
            case 6:
            {
                int mn=a[0];
                for(i=1;i<n;i++)
                if(a[i]<mn)
                mn=a[i];
                cout<<"Minimum = "<<mn<<endl;
                break;
            }
            case 7:
            {
                int sum=0;
                for(i=0;i<n;i++)
                sum+=a[i];
                cout<<"Sum = "<<sum<<endl;
                break;
            }
            case 8:
            {
                int sum=0;
                for(i=0;i<n;i++)
                sum+=a[i];
                cout<<"Average = "<<(double)sum/n<<endl;
                break;
            }
            case 9:
                for(i=0;i<n-1;i++)
                {
                    for(int j=i+1;j<n;j++)
                    {
                        if(a[i]>a[j])
                        {
                            int t=a[i];
                            a[i]=a[j];
                            a[j]=t;
                        }
                    }
                }
                cout<<"Array Sorted Successfully!\n";
                break;
            case 10:
                cout<<"\nThank You!\n";
                break;
            default:
                cout<<"\nInvalid Choice!\n";
        }
    }while(ch!=10);
    return 0;
}