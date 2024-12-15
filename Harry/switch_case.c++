#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    switch(age)
    {
        case 18:
        cout<<"You are 18 years old";
        break;
        case 21:
        cout<<"You are 21 years old";
        break;
        default:
        cout<<"Your age is neither 18 nor 21";
    }
    return 0;
}
