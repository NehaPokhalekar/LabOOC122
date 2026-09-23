// C++ program to implement Hierarchical Inheritance

#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};

// First derived class
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "This Vehicle is Car\n";
    }
};

// Second derived class
class Bus : public Vehicle
{
public:
    Bus()
    {
        cout << "This Vehicle is Bus\n";
    }
};

// Main function
int main()
{
    // Creating object of Car
    Car obj1;

    // Creating object of Bus
    Bus obj2;

    return 0;
}