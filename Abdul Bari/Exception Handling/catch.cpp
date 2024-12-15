#include <iostream>
using namespace std;

int main()
{
    int a=10,b=0,c;
    try
    {
        if(b==0)
        {
            //throw 1;
            //throw 1.5;
            throw "hi";
        }
        c=a/b;
        cout<<"Divison:"<<c<<endl;
    }
    catch(int e)
    {
        cout<<"int catch"<<endl;
    }
    catch(double e)
    {
        cout<<"double catch"<<endl;
    }
    catch(...) //this "..." is called elipses to denote all the datatypes of thorws if its not mentioned separately.
    {
        cout<<"all catch"<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}
