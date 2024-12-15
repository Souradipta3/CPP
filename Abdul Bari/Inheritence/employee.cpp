#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    string name;

public:
    employee(int e, string n)
    {
        id = e;
        name = n;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};

class fulltime : public employee
{
private:
    int salary;

public:
    fulltime(int e, string n, int sal) : employee(e, n)
    {
        salary = sal;
    }
    int getSalary()
    {
        return salary;
    }
};

class parttime : public employee
{
private:
    int wage;

public:
    parttime(int e, string n, int wag) : employee(e, n)
    {
        wage = wag;
    }
    int getWage()
    {
        return wage;
    }
};

int main()
{
    fulltime f(9, "SANKU", 30000);
    parttime p(3, "RAJ", 12000);
    cout << "Salary of " << f.getName() << " is " << f.getSalary() << endl;
    cout << "Wage of " << p.getName() << " is " << p.getWage() << endl;
    return 0;
}
