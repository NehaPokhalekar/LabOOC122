#include<iostream>
using namespace std;
int main()
{
    int len,bre;
    cout<<"Enter Length Of Rectangle:";
    cin>>len;
    cout<<"Enter breadth Of Rectangle:";
    cin>>bre;
    int area=len*bre;
    int pere=(2*(len+bre));
    cout<<"\nLength Of Rectangle:"<<len;
    cout<<"\nBreadth Of Rectangle:"<<bre;
    cout<<"\nArea Of Rectangle:"<<area;
    cout<<"\nPeremeter Of Rectangle:"<<pere;

}