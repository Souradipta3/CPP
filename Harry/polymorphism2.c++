//RUNTIME POLYMORPHISM
#include <iostream>
using namespace std;
class A
{
    public:
    virtual void func()
    {
        cout<<"A class func"<<endl;
    }
    void func1()
    {
        cout<<"A class func1"<<endl;
    }
};
class B : public A
{
    public:
    void func()
    {
        cout<<"B class func"<<endl;
    }
};
int main()
{
    A *ptr;
    B b;
    ptr=&b;
    ptr->func();
    return 0;
}
