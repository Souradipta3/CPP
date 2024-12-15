#include <stdio.h>
using namespace std;

class your;
class my
{
    private: int a;
    protected: int b;
    public: int c;
        friend your;
};

class your
{
    public:
    my m;
    void func()
    {
        m.a=30;
        m.b=20;
        m.c=30;
    }
};

int main()
{
    return 0;
}
