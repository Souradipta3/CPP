#include <iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int l, int b);
    rectangle(rectangle &r);
    int getLenght()
        {
            return length;
        }
    int getBreadth()
    {
        return breadth;
    }
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~rectangle();
};

class cuboid : public rectangle
{
    private:
    int height;
    public:
    cuboid(int h=1)
    {
        height=h;
    }
    int volume()
    {
        return getLenght()*getBreadth()*height;
    }
};

int main()
{
    cuboid c(4);
    c.setLength(10);
    c.setBreadth(7);
    cout<<"Volume of the cuboid is: "<<c.volume()<<endl;
    return 0;
}
    rectangle::rectangle()
    {
        length = 1;
        breadth = 1;
    }
    rectangle::rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    rectangle::rectangle(rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    void rectangle::setLength(int l)
    {
        length=l;
    }
    void rectangle::setBreadth(int b)
    {
        breadth=b;
    }
    int rectangle::area()
    {
        return length*breadth;
    }
    int rectangle::perimeter()
    {
        return 2*(length+breadth);
    }
    bool rectangle::isSquare()
    {
        return length==breadth;
    }
    rectangle::~rectangle()
    {
        cout<<"Rectangle Destroyed"<<endl;
    }
