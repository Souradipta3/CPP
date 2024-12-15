#include <iostream>
using namespace std;

int divison(int a,int b) //throw(int)  //not mandatory to write it since it only helps to understand the developer about what data type is going to be thrown
{
    if(b==0)
    {
        throw 404;
    }
    return a/b;
}

int main()
{
    int a=10,b=0,c;
    try
    {
        c=divison(a,b);
        cout<<"Divison:"<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero! Error "<<e<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}
