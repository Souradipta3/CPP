#include <iostream>
using namespace std;

class student
{
    public:
    int roll;
    string name;
    static int addno;
    student(string n)
    {
        addno++;
        roll=addno;
        name=n;
    }
    void display()
    {
        cout<<"Name:"<<name<<" and Roll no.:"<<roll<<endl;
    }
};

int student::addno=0;

int main()
{
    student s1("Raj");
    student s2("Isha");
    student s3("Soham");
    student s4("Puja");
    student s5("Avik");
    student s6("Ria");

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s6.display();

    cout<<"Number of admissions:"<<student::addno<<endl;
    return 0;
}