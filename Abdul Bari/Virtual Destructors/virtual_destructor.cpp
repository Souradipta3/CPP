#include <iostream>
using namespace std;

class base
{
    public:
    /*base()
    {
        cout<<"Constructor of Base!"<<endl;
    }*/
    virtual ~base()  //virtual is used when we use base class pointer and derived class object and to run both the destructor of derived and base class. 
    {
        cout<<"Destructor of Base!"<<endl;
    }
};

class derived:public base
{
    public:
    /*derived()
    {
        cout<<"Constructor of Derived!"<<endl;
    }*/
    ~derived()
    {
        cout<<"Destructor of Derived!"<<endl;
    }
};

void func()
{
    //derived d;
    base *p= new derived();
    delete p;
}

int main()
{
    func();
    return 0;
}
