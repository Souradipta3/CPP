#include <iostream>
using namespace std;

class rectangle
{
public:
    int length, breadth;

    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    rectangle r1, r2, r3;

    r1.length = 10;
    r1.breadth = 5;
    cout << "Area is " << r1.area() << endl;
    cout << "Perimeter is " << r1.perimeter() << endl;

    r2.length = 15;
    r2.breadth = 10;
    cout << "Area is " << r2.area() << endl;
    cout << "Perimeter is " << r2.perimeter() << endl;

    r3.length = 20;
    r3.breadth = 15;
    cout << "Area is " << r3.area() << endl;
    cout << "Perimeter is " << r3.perimeter() << endl;

    return 0;
}
