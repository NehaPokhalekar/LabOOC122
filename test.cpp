#include<iostream>
using namespace std;
class Student
{
    private:
       int roll_no;
       string name;
       int marks;
    public:
       Student()
       {
         cout<<"Enter Roll no:";
         cin>>roll_no;
         cout<<"Enter Name:";
         cin>>name;
         cout<<"Enter marks:";
         cin>>marks;
       }
       Student(int r,string n,int m)
       {
        roll_no=r;
        name=n;
        marks=m;
       }
       void display()
       {
        cout<<"\n---Student Details---";
        cout<<"\nRoll No.:"<<roll_no;
        cout<<"\nName:"<<name;
        cout<<"\nMarks:"<<marks;
       }
       void display(int r,string n,int m=100)
       {
        cout<<"\n---Student Details---";
        cout<<"\nRoll No.:"<<r;
        cout<<"\nName:"<<n;
        cout<<"\nMarks:"<<m;
       }

};
int main()
{
    
    Student s1;
    s1.display();
    Student s2(1,"Neha",95);
    s2.display(127,"shreya",98);
    return 0;
}