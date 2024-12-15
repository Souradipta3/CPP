#include <iostream>
using namespace std;

class test
{
public:
    int a;
    static int count;
    test()
    {
        a = 10;
        count++;
    }
    static int getCount()
    {
        return count;
    }
};

int test::count = 0;

int main()
{
    temp t1, t2;
    cout << test::getCount() << endl;
    cout << t1.getCount() << endl;
    return 0;
}