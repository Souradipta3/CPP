#include <iostream>
using namespace std;

class base
{
    public:
    void func1()
    {
        cout<<"func1 of base"<<endl;
    }
};
class derieved:public base
{
    public:
    void func2()
    {
        cout<<"func2 of derieved"<<endl;
    }
};
int main()
{
    derieved d;
    base *ptr=&d;
    ptr->func1();
    //ptr->func2();
    return 0;
}