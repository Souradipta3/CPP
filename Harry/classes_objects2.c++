#include <iostream>
using namespace std;
class employee
{
    public:
    string name;
    int code;
    float salary;
    employee(string n,int c,float s,int p)
    {
        this->name=n;
        this->code=c;
        this->salary=s;
        this->password=p;
    }
    void details()
    {
        cout<<"The e1 employee name is "<<this->name<<endl;
        cout<<"The e1 employee code is "<<this->code<<endl;
        cout<<"The e1 employee salary is "<<this->salary<<endl;
        cout<<"The e1 employee password is "<<this->password<<endl;
        //if we want to print the private class details then we need create a function outside of main to print ta details private class
    }
    private:
    int password;
};
int main()
{
    employee e1("RAJ",33,100.50,3113);
    e1.details();
    //cout<<e1.password;
    //in private class we cannot access the details within in as it is private for that reason using cout<< in main function will not print the private details.
    return 0;
}
