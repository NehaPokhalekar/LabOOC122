#include<iostream>
using namespace std;
class Employee
{
    private:
        int empid;
        string empname;
        string department;
        float salary;
    public:
        void empdetails()
        {
            cout<<"Enter Employee ID: ";
            cin>>empid;
            cout<<"Enter Employee Name: ";
            getline(cin>>ws, empname);
            cout<<"Enter Department: ";
            cin>>department;
            cout<<"Enter Salary: ";
            cin>>salary;
        }
        void annualsalary()
        {
            float annual = salary * 12;
            cout<<"Annual Salary: "<<annual<<endl;
        }
        void displaydetails()
        {
            cout<<"-----Employee Details-----"<<endl;
            cout<<"Employee ID: "<<empid<<endl;
            cout<<"Employee Name: "<<empname<<endl;
            cout<<"Department: "<<department<<endl;
            cout<<"Salary: "<<salary<<endl;
        }


};
int main()
{
    Employee emp;
    emp.empdetails();
    emp.displaydetails();
    emp.annualsalary();
    return 0;
    
}