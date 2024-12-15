#include <iostream>
using namespace std;

template <typename T>
T maximum(T a,T b)
{
    return a>b?a:b;
}

/*template<>
string maximum<string> (string a, string b)
{
    if(a.length()>b.length())
    {
        return a;
        return b;
    }
}*/

template <class A,class B>
void func2c(A a, B b)
{
    cout<<a+b<<endl;
}
template <typename T>
class A
{
    T a;
    public:
    A(){}
    A(T a):a(a){}

    void show();
    void test(T m)
    {
        cout<<m+a<<endl;
    }
    template<typename M> M func(M b)
    {
        b+=10;
        return b;
    }
};

template <typename T>
void A<T>::show()
{
    cout<<this->a<<endl;
}

int main()
{
    //cout<<maximum<int>(1,2)<<endl;
    //cout<<maximum<string>("Hello","This is me")<<endl;
    //fun2<float, string>(1,"RAJ");
    //A<int>a(10);
    //a.show();
    A<int>a(10);
    a.test(20);
    cout<<a.func<int>(10)<<endl;
    return 0;
}