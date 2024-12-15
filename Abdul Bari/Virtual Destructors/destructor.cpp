#include <iostream>
using namespace std;

class demo
{
public:
    demo()
    {
        p= new int[10];
        cout << "Constructor!" << endl;
    }
    ~demo()
    {
        delete []p; //If this delete is not used then the object may be deleted but the memory remains intacted.
        cout << "Destructor!" << endl;
    }
};

void func()
{
    //demo d;
    demo *p= new demo(); //When a object is created dynamically in the heap then only the contructor is called.
    delete p; //To call the destructor also delete is used.
}

int main()
{
    func();
    return 0;
}
