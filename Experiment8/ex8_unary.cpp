// C++ program to show unary operator overloading
#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Constructor to initialize the object's value
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (-) operator to perform decrement operation
    // of Distance object
    void operator-()
    {
        feet--;
        inch--;

        cout << "\nFeet & Inches (Decrement): "
             << feet << "'" << inch;
    }

    void operator+()
    {
        feet=feet+3;
        inch--;

        cout << "\nFeet & Inches (Decrement): "
             << feet << "'" << inch;
    }
};

// Driver Code
int main()
{
    Distance d1(8, 9);

    // Use (-) unary operator by single operand
    -d1;
    +d1;
    
    int a=10,b=20,c;
    c=a+b;
    cout<<"\nAddition:"<<c;

    cout<<"feet & inch :"<<d1.feet<<d1.inch;

    return 0;
}