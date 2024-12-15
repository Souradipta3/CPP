#include <iostream>
using namespace std;
class employee
{
    public:
    string name;
    int code;
    float salary;
    employee(string n,int c,float s)
    {
        this->name=n;
        this->code=c;
        this->salary=s;
    }
    void details()
    {
        cout<<"The e1 employee name is "<<this->name<<endl;
        cout<<"The e1 employee code is "<<this->code<<endl;
        cout<<"The e1 employee salary is "<<this->salary<<endl;
    }
};
int main()
{
    employee e1("RAJ",33,100.50);
    e1.details();
    return 0;
}
