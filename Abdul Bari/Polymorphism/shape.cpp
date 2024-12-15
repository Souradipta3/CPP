#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class rectangle : public shape
{
private:
    float length;
    float breadth;

public:
    rectangle(float length, float breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};

class circle : public shape
{
private:
    float radius;

public:
    circle(float radius)
    {
        this->radius = radius;
    }
    float area()
    {
        return M_PI * radius * radius;
    }
    float perimeter()
    {
        return 2 * M_PI * radius;
    }
};

int main()
{
    shape *s;
    s = new rectangle(10, 5);
    cout << "The area of the rectangle is:" << s->area() << endl;
    cout << "The perimeter of the rectangle is:" << s->perimeter() << endl;

    s = new circle(5);
    cout << "The area of the circle is:" << s->area() << endl;
    cout << "The area of the circle is:" << s->perimeter() << endl;
    return 0;
}
