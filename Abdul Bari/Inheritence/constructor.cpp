#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Non-param base " << endl;
    }
    base(int x)
    {
        cout << "Param base " << x << endl;
    }
};

class derieved : public base
{
public:
    derieved()
    {
        cout << "Non-param derieved " << endl;
    }
    derieved(int y)
    {
        cout << "Param derieved " << y << endl;
    }

    derieved(int x, int y) : base(x)
    {
        cout << "Param derieved " << y << endl;
    }
};

int main()
{
    derieved d(10,5);
    return 0;
}
