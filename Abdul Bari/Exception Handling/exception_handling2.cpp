#include <iostream>
using namespace std;

int main()
{
    int a=10,b=0,c;
    try
    {
        if(b==0)
        {
            throw 404;
        }
        c=a/b;
        cout<<"Divison:"<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero! Error "<<e<<endl;
    }
    cout<<"Done!"<<endl;
    return 0;
}
