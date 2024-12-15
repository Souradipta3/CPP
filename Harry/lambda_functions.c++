#include <iostream>
using namespace std;
/*
Syntax:-
[capture clause] (parameters)-> return type
{//block of statements
};
*/
void call(auto f)
{
    int a=1;
    int b=2;
    cout<<f(10)<<endl;
    cout<<"Internal "<<a<<" "<<b<<endl;
}
int main()
{
    int a=10;
    int b=20;

    auto func1=[&](int c)->int
    {
        a+=c;
        b+=c;
        return 100;
    };

    auto func2=[a,&b](int c)
    {
        b=a+c;
    };

    //call (func1);
    //cout<<func1(10)<<endl;
    cout<<a<<" "<<b<<endl;

    func2(100);
    cout<<a<<" "<<b<<endl;

    /*auto func3=[]()
    {
        int a=10;
        cout<<a<<endl;
    };
    func3();*/
    return 0;
}