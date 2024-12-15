#include <iostream>
using namespace std;
class complex
{
private:
    int real, img;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, complex &c);
    // friend void operator<<(ostream &out, complex &c);
};

ostream &operator<<(ostream &out, complex &c)
// void operator<<(ostream &out, complex &c)
{
    out << c.real << "+i" << c.img << endl;
    return out;
}

int main()
{
    complex c(5, 10);
    cout << c << endl;
    // cout<<c;
    operator<<(cout, c);
    return 0;
}

/* Both the ostream function and the vooid function will work but the main diferrence 
is in case of void function with the insertion operator only one variable is allowed
to print and following others cannot be printed just like simple endl cannot be
added following with the "cout<<c". Whereas in case of ostream function multiple
variables can be printed along together. */