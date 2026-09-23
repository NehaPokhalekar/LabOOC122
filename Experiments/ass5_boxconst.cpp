#include <iostream>
using namespace std;

class Box
{
    float length, width, height, v;

public:

    
    Box()
    {
        length = 3;
        width = 4;
        height = 5;
    }

    
    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }

    
    Box(Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    
    void volume()
    {
        v = length * width * height;
    }

   
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << v << endl;
    }

    
    ~Box()
    {
        cout << "Box object destroyed." << endl;
    }
};

int main()
{
    
    Box b1;
    b1.volume();
    cout << "Box 1 (Default Constructor):" << endl;
    b1.display();

    
    Box b2(10, 5, 4);
    b2.volume();
    cout << "\nBox 2 (Parameterized Constructor):" << endl;
    b2.display();

    
    Box b3(b2);
    b3.volume();
    cout << "\nBox 3 (Copy Constructor):" << endl;
    b3.display();

    return 0;
}