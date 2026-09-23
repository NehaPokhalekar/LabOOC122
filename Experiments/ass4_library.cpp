#include<iostream>
using namespace std;
class LibraryBook
{
    private: 

       string b_name;
       bool issued;

    public:
       
       void getdata()
       {
            cout<<"Enter Book Name: ";
            cin>>b_name;
            issued=false;
       }
       void issue()
       {
            issued=true;
            cout<<"Book Issued"<<endl;
       }
       void return_book()
       {
            issued=false;
            cout<<"Book Returned"<<endl;
       }
       void display()
       {
            cout<<"Book Name: "<<b_name<<endl;
            if(issued)
            {
                cout<<"Status: Issued"<<endl;
            }
            else
            {
                cout<<"Status: Available"<<endl;
            }
       }
        

};
int main()
{
    LibraryBook b1;
    b1.getdata();
    b1.display();
    b1.issue();
    b1.display();
    b1.return_book();
    b1.display();
    return 0;
}