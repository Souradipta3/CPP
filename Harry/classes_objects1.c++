#include <iostream>
using namespace std;
class employee
{
    public:
    string name;
    int code;
    float salary;
    void details()
    {
        cout<<"The e1 employee name is "<<this->name<<endl;
        cout<<"The e1 employee code is "<<this->code<<endl;
        cout<<"The e1 employee salary is "<<this->salary<<endl;
    }
};
int main()
{
    employee e1;
    e1.name="RAJ";
    e1.code=33;
    e1.salary=100.50;
    e1.details();
    return 0;
}
