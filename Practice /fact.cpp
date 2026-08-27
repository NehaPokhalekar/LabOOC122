#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Factorial"<<endl;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        cout<<fact<<endl;
    }

    
}