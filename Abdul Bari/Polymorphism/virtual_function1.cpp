#include <iostream>
using namespace std;

class base
{
public:
    virtual void display()
    {
        cout << "Display of base!" << endl;
    }
};

class derived : public base
{
public:
    void display()
    {
        cout << "Display of derived!" << endl;
    }
};

int main()
{
    derived d;
    // d.display();

    base *ptr = &d;
    ptr->display();
    return 0;
}
