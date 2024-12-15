#include <iostream>
using namespace std;

class parent
{
    private: int a;
    protected: int b;
    public: int c;
        void funParent()
        {
            a=10;
            b=5;
            c=15;
        }
};
class child : private parent
{
    public:
        void funChild()
        {
            a=10;
            b=5;
            c=15;
            //in derived class which is inherited, only private is not accesscible and other two can be accessed.
        }
};
class grandchild : public child
{
    public:
        void funGrandchild()
        {
            a=10;
            b=5;
            c=15;
            
        }
};
int main()
{
    child c;
    c.a=10;
    c.b=5;
    c.c=20;
    return 0;
}