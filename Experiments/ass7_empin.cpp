#include <iostream>
using namespace std;


class Employee
{
protected:
    int empID;
    string empName;
    string department;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayEmployee()
    {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << empName;
        cout << "\nDepartment: " << department;
    }
};


class TeachingStaff : public Employee
{
    string subject;
    string qualification;

public:
    void getTeaching()
    {
        getEmployee();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeaching()
    {
        displayEmployee();

        cout << "\nSubject: " << subject;
        cout << "\nQualification: " << qualification;
    }
};

class NonTeachingStaff : public Employee
{
    string designation;
    int workingHours;

public:
    void getNonTeaching()
    {
        getEmployee();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeaching()
    {

        cout << "\nDesignation: " << designation;
        cout << "\nWorking Hours: " << workingHours;
    }
};

int main()
{
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "\n--- Teaching Staff ---\n";
    t.getTeaching();

    cout << "\n--- Teaching Staff Details ---";
    t.displayTeaching();

    cout << "\n\n--- Non-Teaching Staff ---\n";
    n.getNonTeaching();

    cout << "\n--- Non-Teaching Staff Details ---";
    n.displayEmployee();
    n.displayNonTeaching();

    return 0;
}