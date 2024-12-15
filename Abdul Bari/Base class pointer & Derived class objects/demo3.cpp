#include <iostream>
using namespace std;

class basiccar
{
    public:
    void start()
    {
        cout<<"Car started"<<endl;
    }
};
class advancedcar:public basiccar
{
    public:
    void music()
    {
        cout<<"Play music"<<endl;
    }
};
int main()
{
    advancedcar a;
    basiccar *ptr=&a;
    ptr->start();
    //ptr->music();
    return 0;
}
