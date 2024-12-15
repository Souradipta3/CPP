#include <iostream>
using namespace std;
int operations(int a, int b)
{
    int add,diff,mul,div;
    add=a+b;
    diff=a-b;
    mul=a*b;
    div=a/b;
    return add;
    return diff;
    return mul;
    return div;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"The mathematical operations are:"<<operations(a,b);
    return 0;
}
