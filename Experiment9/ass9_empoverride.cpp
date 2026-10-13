#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateBonus()
    {
        cout << "Employee bonus" << endl;
    }
};

class Manager : public Employee
{
public:
    void calculateBonus() override
    {
        cout << "Manager bonus: 50000" << endl;
    }
};

class Developer : public Employee
{
public:
    void calculateBonus() override
    {
        cout << "Developer bonus: 20000" << endl;
    }
};

int main()
{
    Manager m;
    Developer d;

    Employee *e;

    e = &m;
    e->calculateBonus();

    e = &d;
    e->calculateBonus();

    return 0;
}