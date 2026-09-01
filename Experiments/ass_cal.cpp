#include<iostream>
using namespace std;
int main()
{
    int no1,no2,choice;
    
   do
   {
    cout<<"Enter Your Choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Enter Two Numbers:";
            cin>>no1>>no2;
            cout<<"Addition of Two Numbers is:"<<no1+no2<<endl;
            break;
        case 2:
            cout<<"Enter Two Numbers:";
            cin>>no1>>no2;
            cout<<"Subtraction of Two Numbers is:"<<no1-no2<<endl;
            break;
        case 3:
            cout<<"Enter Two Numbers:";         
            cin>>no1>>no2;
            cout<<"Multiplication of Two Numbers is:"<<no1*no2<<endl;
            break;
        case 4:
            cout<<"Enter Two Numbers:";
            cin>>no1>>no2;
            cout<<"Division of Two Numbers is:"<<no1/no2<<endl;
            break;
        default:
            cout<<"Invalid Choice"<<endl;
    }
   }while(choice!=5);
    

}