#include <iostream>
using namespace std;

class Patient
{
    string name;
    int age;
    float charge;

public:
    void registerPatient()
    {
        cout << "Enter patient name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter consultation charge: ";
        cin >> charge;
    }

    void calculateCharge()
    {
        cout << "Consultation Charge = Rs. " << charge << endl;
    }

    void display()
    {
        cout << "\nPatient Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Charge: Rs. " << charge << endl;
    }
};

int main()
{
    Patient p;

    p.registerPatient();
    p.calculateCharge();
    p.display();

    return 0;
}