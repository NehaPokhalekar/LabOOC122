#include<iostream>
using namespace std;
int main()
{
    int no1,no2,temp;
    cout<<"Enter Number 1:";
    cin>>no1;
    cout<<"Enter Number 2:";
    cin>>no2;

    cout<<"***Before Swapping ***";
    cout<<"\nNumber 1:"<<no1;
    cout<<"\nNumber 2:"<<no2;

   
    no1=no1 + no2;//30=10+20
    no2=no1 - no2;//10=30-20
    no1=no1 - no2;//20=30-10

    cout<<"\n***After Swapping ***";
    cout<<"\nNumber 1:"<<no1;
    cout<<"\nNumber 2:"<<no2;


}