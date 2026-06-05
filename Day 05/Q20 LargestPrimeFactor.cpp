//Largest Prime Factor of A Number.
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m=0,f;
    cout<<"Enter A Number: "<<endl;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)//checking factors
        {
            f=1; //conditional variable
            for(j=2;j<=(i/2);j++)
            {
                if(i%j==0) //checking prime
                {
                    f=0;   
                    break;
                }
            } 
            if(f==1)
            {
                if(i>m)
                {
                    m=i;//largest factor
                }
            }
        }
    }
    cout<<"Largest Prime Factor of "<<n<<" : "<<m;
    return 0;
}