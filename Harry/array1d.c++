#include <iostream>
using namespace std;
int main()
{
    int marks[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the marks of "<<i+1<<"th students"<<endl;
        cin>>marks[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<"The marks of "<<i+1<<"th student is:"<<marks[i]<<endl;
    }
    return 0;
}
