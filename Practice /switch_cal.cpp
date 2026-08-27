#include<iostream>
using namespace std;
int main()
{
    int no1,no2,choice;
    cout<<"Enter Number 1:";
    cin>>no1;
    cout<<"Enter Number 2:";
    cin>>no2;
    cout<<"\nNumber 1:"<<no1;
    cout<<"\nNumber 2:"<<no2;
    do
    {
        cout<<"\nEnter Your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Addition:"<<no1+no2;
            break;
            case 2:
            cout<<"Substraction:"<<no1-no2;
            break;
            case 3:
            cout<<"Multiplication:"<<no1*no2;
            break;
            case 4:
            cout<<"Division:"<<no1/no2;
            break;
            case 5:
            cout<<"Reminder:"<<no1%no2;
            break;
            default:
            cout<<"Exit!";
        }
    

    }while(choice!=6);
    
}