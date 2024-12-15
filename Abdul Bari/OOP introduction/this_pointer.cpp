#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle(int length, int breadth)
    {
        this->length=length;
        this->breadth=breadth;
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

int main()
{
    rectangle r(100,50);
    cout<<"Area is "<<r.area()<<endl;
    cout<<"Perimeter is "<<r.perimeter()<<endl;
    return 0;
}
