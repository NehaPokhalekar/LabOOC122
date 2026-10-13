#include <iostream>
using namespace std;

class Shape
{
    public:
    // Area of square
    int area(int s)
    {
        return (s * s);
    }

    // Area of rectangle
    int area(int l, int b)
    {
        return (l * b);
    }

    // Area of circle
    float area(float r)
    {
       return (3.14 * r * r);
    }

    // Area of triangle
    float area(float bs, float ht)
    {
       return ((bs * ht) / 2);
   }
};


int main()
{
    int s, l, b;
    float r, bs, ht;

    cout << "Enter side of a square: ";
    cin >> s;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter base and height of triangle: ";
    cin >> bs >> ht;

    Shape s1;
    
    cout << "\nArea of square is " << s1.area(s);
    cout << "\nArea of rectangle is " << s1.area(l, b);
    cout << "\nArea of circle is " << s1.area(r);
    cout << "\nArea of triangle is " << s1.area(bs, ht);

    return 0;
}

