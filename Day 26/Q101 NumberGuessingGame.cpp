//To guess a number in 5 lives
#include<iostream>
#include<cstdlib> //random number
#include<ctime> //for time 
using namespace std;
int main()
{
    int n,g,l=5;
    srand((unsigned) time(0));//generates random no for current time cycle
    n=rand()%100+1; //no. from 1-100.
    cout<<"===== NUMBER GUESSING GAME ====="<<endl;
    cout<<"Guess the Number Between 1 and 100"<<endl;
    cout<<"You Have 5 Lives"<<endl<<endl;
    while(l>0)
    {
        cout<<"Lives Left: "<<l<<endl;
        cout<<"Enter Guess: ";
        cin>>g;
        if(g==n)
        {
            cout<<"🎉 Congratulations! You Guessed the Number."<<endl;
            break;
        }
        else if(g<n)
        {
            cout<<"Too Low!"<<endl;
        }
        else
        {
            cout<<"Too High!"<<endl;
        }
        l--;//lives count
        cout<<endl;
    }
    if(l==0)
    {
        cout<<"💀 Game Over!"<<endl;
        cout<<"The Number Was: "<<n<<endl;
    }
    return 0;
}