#include <iostream>
using namespace std;

class rectangle
{
    public:
    void area()
    {
        cout<<"Area"<<endl;
    }
};
class cuboid:public rectangle
{
    public:
    void volume()
    {
        cout<<"volume"<<endl;
    }
};
int main()
{
    cuboid c;
    rectangle *ptr=&c;
    ptr->area();
    //ptr->volume();
    return 0;
}