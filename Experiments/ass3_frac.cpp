#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void accept()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    void add(Fraction f1, Fraction f2)
    {
        if (f1.denominator == f2.denominator)
        {
            numerator = f1.numerator + f2.numerator;
            denominator = f1.denominator;
        }
        else
        {
            numerator = (f1.numerator * f2.denominator) +
                    (f2.numerator * f1.denominator);

            denominator = f1.denominator * f2.denominator;
        }
    } 

    void subtract(Fraction f1, Fraction f2)
    {
        if (f1.denominator == f2.denominator)
        {
            numerator = f1.numerator - f2.numerator;
            denominator = f1.denominator;
        }
        else
        {
            numerator = (f1.numerator * f2.denominator) -
                    (f2.numerator * f1.denominator);

            denominator = f1.denominator * f2.denominator;
        }
    }

    void display()
    {
        int a = numerator;
        int b = denominator;

       
        int small = (a < b) ? a : b;

        for (int i = small; i >= 1; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                a = a / i;
                b = b / i;
                break;
            }
        }

        cout << a << "/" << b << endl;
    }
};

int main()
{
    Fraction f1, f2, result;

    cout << "Enter First Fraction\n";
    f1.accept();

    cout << "\nEnter Second Fraction\n";
    f2.accept();

    cout << "\nAddition = ";
    result.add(f1, f2);
    result.display();

    cout << "Subtraction = ";
    result.subtract(f1, f2);
    result.display();

    return 0;
}