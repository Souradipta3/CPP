#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int roll, phymarks, chemmarks, mathmarks, biomark, compmark;

public:
    student(string n, int r, int p, int ch, int m, int b, int co)
    {
        name = n;
        roll = r;
        phymarks = p;
        chemmarks = ch;
        mathmarks = m;
        biomark = b;
        compmark = co;
    }
    int getRoll()
    {
        return roll;
    }
    int total()
    {
        return (phymarks + chemmarks + mathmarks + biomark + compmark);
    }
    float average()
    {
        return (total() / 5);
    }
    char grade()
    {
        if (average() >= 60)
            return 'A';
        else if (average() >= 40 && average() < 60)
            return 'B';
        else
            return 'C';
    }
};

int main()
{
    string name;
    cout << "Enter the name: " << endl;
    cin >> name;
    int roll;
    cout << "Enter the roll no. " << endl;
    cin >> roll;
    int p, ch, m, b, co;
    cout << "Enter the marks of the 5 subjects- phy,chem,math,bio,comp: " << endl;
    cin >> p >> ch >> m >> b >> co;
    student s(name, roll, p, ch, m, b, co);
    cout<<"Name: "<<name<<endl;
    cout << "Roll no.: " << s.getRoll() << endl;
    cout << "Total: " << s.total() << endl;
    cout << "Average: " << s.average() << endl;
    cout << "Grade is " << s.grade() << endl;
    return 0;
}
