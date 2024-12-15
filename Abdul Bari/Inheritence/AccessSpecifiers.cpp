#include <iostream>
using namespace std;

class base
{
    private: int a;
    protected: int b;
    public: int c;
        void funbase()
        {
            a=10;
            b=5;
            c=15;
        }
};
class derieved : public base
{
    public:
        void funderieved()
        {
            a=10;
            b=5;
            c=15;
            //in derived class which is inherited, only private is not accesscible and other two can be accessed.
        }
};
int main()
{
    base b;
    b.a=10;
    b.b=5;
    b.c=20;
    //on object only public is accessible and other two are not accessible.
    return 0;
}
