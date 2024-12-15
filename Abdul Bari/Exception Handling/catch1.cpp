#include <iostream>
using namespace std;

class MyException1:exception
{

};
class MyException2:public MyException1
{

};

int main()
{
    int a=10,b=0,c;
    try
    {
        if(b==0)
        {
            throw MyException1();
        }
        c=a/b;
        cout<<"Divison:"<<c<<endl;
    }
    catch(MyException2 e) //child class must come first
    {
        cout<<"int catch"<<endl;
    }
    catch(MyException1 e)  //parent class should be next to the child class
    {
        cout<<"double catch"<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}
