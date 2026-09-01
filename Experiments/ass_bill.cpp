#include<iostream>
using namespace std;
int main()
{
    string name;
    int unit;
    int bill;

    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Unit:";
    cin>>unit;

    if(unit<=100)
    {
        bill=unit*5;
    }
    else if(unit<=200)
    {
        bill=(100*5)+(unit-100)*7;
    }
    else if(unit<=300)
    {
        bill=(100*5)+(100*7)+(unit-200)*10;
    
    }
    else
    {
        bill=(100*5)+(100*7)+(100*10)+(unit-300)*12;
    }

    cout<<"Name:"<<name<<endl;
    cout<<"Unit:"<<unit<<endl;
    cout<<"Total Bill:"<<bill<<endl;



}