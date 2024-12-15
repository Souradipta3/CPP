#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &rec);
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~rectangle();
};

rectangle::rectangle()
{
    length = 1;
    breadth = 1;
}

rectangle::rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

rectangle::rectangle(rectangle &rec)
{
    length = rec.length;
    breadth = rec.breadth;
}

void rectangle::setLength(int l)
{
    if (l >= 0)
        length = l;
    else
        length = 0;
}

void rectangle::setBreadth(int b)
{
    if (b >= 0)
        breadth = b;
    else
        breadth = 0;
}

int rectangle::area()
{
    return length * breadth;
}

int rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool rectangle::isSquare()
{
    return length == breadth;
}

rectangle::~rectangle()
{
    cout << "Rectangle destroyed" << endl;
}

int main()
{
    rectangle r(50, 25);
    cout << "Length is " << r.getLength() << endl;
    cout << "Breadth is " << r.getBreadth() << endl;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    if (r.isSquare())
        cout << "It is a square" << endl;
    else
        cout << "It is a rectangle" << endl;
    return 0;
}
