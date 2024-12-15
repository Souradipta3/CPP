#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if(age>100||age<5)
    {
        cout<<"Invalid age for vote";
    }
    else if(age>=18)
    {
        cout<<"Eligible for vote";
    }
    else
    {
        cout<<"Not eligible for vote";
    }
    return 0;
}
