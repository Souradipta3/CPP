#include <iostream>
using namespace std;

class base
{
    public:
    void display()
    {
        cout<<"Display of base!"<<endl;
    }
};

class derived:public base
{
    /*public:
    void display()
    void display(int x)
    {
        cout<<"Display of Derived!"<<endl;
    }*/
    //Whenever there will be a function in the derived class then the function overriding will not happen and the function of the derieved class will be printed. 
};

int main()
{
    derived d;
    d.display(); 
    //d.base::display();
    // Though the derived class has no function within itself, it is inheriting the function from the base class which called function overriding.
    return 0;
}
