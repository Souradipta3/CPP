#include <iostream>
using namespace std;

class car
{
public:
    virtual void start() = 0; // Pure Virtual functions
    /*void start()
    {
        cout<<"Car Started!"<<endl;
    }*/
};
class innova : public car
{
public:
    void start() // function overriding
    {
        cout << "Innova Started!" << endl;
    }
};
class swift : public car
{
public:
    void start() // function overriding
    {
        cout << "Swift Started!" << endl;
    }
};
int main()
{
    car *ptr;
    ptr = new innova;
    ptr->start(); //same statement
    ptr = new swift;
    ptr->start(); //same statement
    /* though same statement are present, both of them have different functions 
    and different output also. This is called polymorphism. Same statement but different functions.
    Polymorphism can be achieved but function overiding. */
    return 0;
}
