#include<iostream>
using namespace std;
int main()
{
    int rad;
    float pi=3.14;
    cout<<"Enter Radius Of Circle:";
    cin>>rad;
    
    float area=pi*rad*rad;
    float circum=2*pi*rad;
    cout<<"\nRadius Of Circle:"<<rad;
    cout<<"\nArea Of Circle:"<<area;
    cout<<"\nCircumference Of Circle:"<<circum;
    

}