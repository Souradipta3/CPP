//FUNCTION OVERRIDING
#include <iostream>
using namespace std;
class A
{
    public:
    void func()
    {
        cout<<"A class func"<<endl;
    }
    void func1()
    {
        cout<<"A class func1"<<endl;
    }
};
class B: public A
{
    public:
    void func()
    {
        cout<<"B class func"<<endl;
    }
};
int main()
{
    A a;
    B b;
    b.func();
    b.func1();
    return 0;
}
