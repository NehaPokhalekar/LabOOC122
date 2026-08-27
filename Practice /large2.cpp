#include<iostream>
using namespace std;
int main()
{
    int no1,no2,no3;
    cout<<"Enter Number 1:";
    cin>>no1;
    cout<<"Enter Number 2:";
    cin>>no2;
    cout<<"Enter Number 3:";
    cin>>no3;

    
    cout<<"\nNumber 1:"<<no1;
    cout<<"\nNumber 2:"<<no2;
    cout<<"\nNumber 3:"<<no3;

    if(no1>no2)
    {
        cout<<"\nGreatest Number:"<<no1;
    }
    else if(no2>no3)
    {
        cout<<"\nGreatest Number:"<<no2;
    }
    else
    {
        cout<<"\nGreatest Number:"<<no3;
    }


}