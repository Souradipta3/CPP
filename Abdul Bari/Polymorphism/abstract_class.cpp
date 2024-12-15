#include <iostream>
using namespace std;

class base
{
    public:
    virtual void func1()=0;
    virtual void func2()=0;
};

class derived:public base
{
    public:
    void func1()
    {
        cout<<"Function 1 of derived class!"<<endl;
    }
    void func2()
    {
        cout<<"Function 2 of derived class!"<<endl;
    }
};

int main()
{
    derived d;
    d.func1();
    d.func2();
    return 0;
}