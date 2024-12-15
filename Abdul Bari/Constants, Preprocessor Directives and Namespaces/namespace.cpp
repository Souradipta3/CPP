#include <iostream>
using namespace std;

namespace first
{
    void func()
    {
        cout << "First!" << endl;
    }
}

namespace second
{
    void func()
    {
        cout << "Second!" << endl;
    }
}

using namespace second;
int main()
{
    first::func();
    func();
    return 0;
}
