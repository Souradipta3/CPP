#include <iostream>
using namespace std;

class MyException:exception  //this exception is a built in class in C++ which is inheriting here. It is not compulsory to inherit it.
{

};

int main()
{
    int a=10,b=0,c;
    try
    {
        if(b==0)
        {
            //throw 404;     //Throw can be of any datatypes and also a class or a object of a class.
            //throw 1;
            //throw 1.5;
            //throw string ("Error");
            throw MyException();
        }
        c=a/b;
        cout<<"Divison:"<<c<<endl;
    }
    catch(MyException e)
    {
        cout<<"Division by zero!"<<e<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}
