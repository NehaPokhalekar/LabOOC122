#include<iostream>
using namespace std;
class Student
{
    private:
        string name; 
        int rollno;
        float marks;
    public:
    void inputdetails()
    {
        cout<<"Enter Student Name: ";
        getline(cin>>ws,name);
        cout<<"Enter Student Roll Number: ";
        cin>>rollno;
        cout<<"Enter Student Marks: ";
        cin>>marks;
    }
    void displaydetails()
    {
        cout<<"-----Student Details-----"<<endl;
        cout<<"Student Name: "<<name<<endl;
        cout<<"Student Roll Number: "<<rollno<<endl;
        cout<<"Student Marks: "<<marks<<endl;
    }
};
int main()
{
    Student s1;
    s1.inputdetails();
    s1.displaydetails();
    return 0;
}