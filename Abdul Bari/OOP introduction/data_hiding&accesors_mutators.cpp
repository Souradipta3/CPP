#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }
    int getLength()
    {
        return length;
    }

    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }
    int getBreadth()
    {
        return breadth;
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
    rectangle r;
    r.setLength(100);
    r.setBreadth(50);
    cout<<"Length is "<<r.getLength()<<endl;
    cout<<"Breadth is "<<r.getBreadth()<<endl;
    cout<<"Area is "<<r.area()<<endl;
    cout<<"Perimeter is "<<r.perimeter()<<endl;
    return 0;
}
