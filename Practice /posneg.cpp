#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    cout<<"Number :"<<n;
    if(n>0)
    {
        cout<<"\nNumber is Positive";
    }
    else if(n<0)
    {
        cout<<"\nNumber is Negative";
    }
    else
    {
        cout<<"\nNumber is Zero";
    }
}