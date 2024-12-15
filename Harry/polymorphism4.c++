#include <iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        //cout <<"A"<<endl;
    }
    void show()
    {
        cout<<"A: "<<a<<endl;
    }
    void setA(int a)
    {
        this->a=a;
    }
    A operator- (A const &obj)
    {
        A intermediate;
        intermediate.a=this->a - obj.a;
        return intermediate;
    }
    friend ostream &operator<<(ostream &out,A &obj);
};
ostream &operator<<(ostream &out,A &obj)
{
    out<<obj.a;
    return out;
}
int main()
{
    A a,b;
    a.setA(10);
    b.setA(20);
    A c=a-b; //a.operator-(b);
    //c.show();
    cout<<c; //operator<<(cout,c); 
    cout<<"Hello!";
    c=b-a;
    //cout<<c<<endl;
    cout<<1-2<<endl;
    return 0;
} 