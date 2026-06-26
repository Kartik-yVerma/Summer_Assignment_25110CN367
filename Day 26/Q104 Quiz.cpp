//Quiz App
#include<iostream>
using namespace std;
int main()
{
    char a;
    int s=0;
    cout<<"===================================="<<endl;
    cout<<"      HISTORY & CODING QUIZ"<<endl;
    cout<<"===================================="<<endl;
    cout<<"Each correct answer = 1 mark"<<endl;
    cout<<"Enter A, B, C or D"<<endl<<endl;
    cout<<"1. Who was the charioteer of Arjuna in the Kurukshetra War?"<<endl;
    cout<<"A. Bhishma\nB. Krishna\nC. Karna\nD. Drona"<<endl;
    cin>>a;
    if(a=='B'||a=='b') 
    s++;
    cout<<"\n2. Which kingdom did Lord Rama rule after returning from exile?"<<endl;
    cout<<"A. Mathura\nB. Hastinapur\nC. Ayodhya\nD. Dwarka"<<endl;
    cin>>a;
    if(a=='C'||a=='c') 
    s++;
    cout<<"\n3. Which weapon belonged to Lord Shiva?"<<endl;
    cout<<"A. Sudarshan Chakra\nB. Vajra\nC. Trishul\nD. Gandiva"<<endl;
    cin>>a;
    if(a=='C'||a=='c') 
    s++;
    cout<<"\n4. Which symbol is used to end a statement in C++?"<<endl;
    cout<<"A. :\nB. ;\nC. ,\nD. ."<<endl;
    cin>>a;
    if(a=='B'||a=='b') 
    s++;
    cout<<"\n5. Which loop is guaranteed to execute at least once?"<<endl;
    cout<<"A. for\nB. while\nC. do-while\nD. nested for"<<endl;
    cin>>a;
    if(a=='C'||a=='c') 
    s++;
    cout<<"\n6. Which data structure follows the LIFO principle?"<<endl;
    cout<<"A. Queue\nB. Array\nC. Linked List\nD. Stack"<<endl;
    cin>>a;
    if(a=='D'||a=='d') 
    s++;
    cout<<"\n===================================="<<endl;
    cout<<"Quiz Finished!"<<endl;
    cout<<"Your Score: "<<s<<"/6"<<endl;
    if(s==6)
    cout<<"🏆 Sage & Coding Master!"<<endl;
    else if(s>=4)
    cout<<"⚔️ Great Warrior Programmer!"<<endl;
    else if(s>=2)
    cout<<"📚 Keep Learning!"<<endl;
    else
    cout<<"🌱 Beginning of the Journey!"<<endl;
    return 0;
}