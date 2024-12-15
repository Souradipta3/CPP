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
    rectangle *ptr = new rectangle;
    // rectangle r1,*ptr;
    // ptr=&r1;
    ptr->length = 100;
    ptr->breadth = 50;
    cout << "Area is " << ptr->area() << endl;
    cout << "Perimeter is " << ptr->perimeter() << endl;
    return 0;
}