#include <iostream>
using namespace std;

class base
{
public:
    int a;
    void display()
    {
        cout << "Display of base: " << a << endl;
    }
};

class derieved : public base
{
public:
    void show()
    {
        cout << "Show of derieved: " << a << endl;
    }
};

int main()
{
    derieved d;
    d.a = 35;
    d.display();
    d.show();
    return 0;
}
