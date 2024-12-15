#include <iostream>
using namespace std;

class basiccar
{
    public:
    virtual void display()
    {
        cout<<"Basic Car!"<<endl;
    }
};

class advancecar: public basiccar
{
    public:
    void display()
    {
        cout<<"Advance Car!"<<endl;
    }
};

int main()
{
    basiccar *ptr = new advancecar();
    ptr->display();
    return 0;
}

/*A base class pointer pointing to a derived class object and overrided function is called 
then the function of derived class that is based on the object it will be called if the 
base class function is decalred as virtual. This is Runtime polymorphism.