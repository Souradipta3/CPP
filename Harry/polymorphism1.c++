//FUNCTION OVERLOADING
#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A()
    {
        cout<<"A"<<endl;
    }
    void show()
    {
        cout<<"A:"<<a<<endl;
    }
    void dummy(float val) 
    //if it is integer datatype then the val will be 10 for the void dummy functions
    //if it is float datatype then the val will be in float for the 2nd void dummy function but for the first one it will be same as integer
    {
        cout<<val<<endl;
    }
    void dummy()
    {
        cout<<"Hello"<<endl;
    }
    void dummy(float val1,int val2)
    {
        cout<<val1<<" "<<val2<<endl;
    }
};
class B
{
    public:
    B()
    {
        cout<<"B"<<endl;
    }
};
int main()
{
    A a;
    a.dummy(10);
    a.dummy(10.10);
    a.dummy(10.01,10);
    return 0;
}
