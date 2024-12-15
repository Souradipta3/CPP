#include <iostream>
using namespace std;
int main()
{
    int a=33;
    int *ptr=&a;
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of a is:"<<*ptr<<endl;
    //Any of the above ways can be used for printing the values
    cout<<"The address of a is:"<<&a<<endl;
    cout<<"The address of a is:"<<ptr<<endl;
    //Any of the avove ways can be used for printing the address 
    return 0;
}
