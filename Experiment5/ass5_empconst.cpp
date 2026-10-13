#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string empName;
    float HRA, DA, basicSalary, grossSalary;

public:
    
    Employee(int id, string name, float basic, float hra, float da)
    {
        empID = id;
        empName = name;
        basicSalary = basic;
        HRA = hra;
        DA = da;
    }

    
    void calculateGrossSalary()
    {
        grossSalary = basicSalary + HRA + DA;
    }

    
    void display()
    {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << empName;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nHRA: " << HRA;
        cout << "\nDA: " << DA;
        cout << "\nGross Salary: " << grossSalary;
    }

   
    ~Employee()
    {
        cout << "\n\nEmployee object is destroyed.";
    }
};

int main()
{
    Employee e1(101, "Neha", 30000, 5000, 3000);

    e1.calculateGrossSalary();
    e1.display();

    Employee e2(102, "Shreya", 40000, 6000, 4000);

    e2.calculateGrossSalary();
    e2.display();

    return 0;
}