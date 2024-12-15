#include <iostream>
using namespace std;

class complex
{
private:
    int real, img;
public:
    complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<real<<" +i"<<img;
    }
    friend complex operator+(complex c1,complex c2); // introducing the friend operator overloading
};

complex operator+(complex c1,complex c2)   //Since it is a friend operator overloading so no scope resolution is needed though this function is not a member of the class.
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

int main()
{
    complex c1(50,25), c2(100,50), c3;
    c3 = c1 + c2; // operator overloading
    c3.display();
    return 0;
}
