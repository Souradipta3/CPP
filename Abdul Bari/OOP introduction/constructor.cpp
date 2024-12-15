#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle()    // Not paramiterized constructor
    {
        length=1;
        breadth=1;
    }
    rectangle(int l, int b)     //Paramiterized constructor
    {
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }

    void setLength(int l)
    {
        if (l >= 0)
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b)
    {
        if (b >= 0)
            breadth = b;
        else
            breadth = 0;
    }

    float area()
    {
        return length * breadth;
    }
    float perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    //rectangle r1;    //for  not paramiterized constructor
    rectangle r1(10,5);  //for paramiterized constructor
    rectangle r2(r1);    //for copy constructor

    /*cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;*/      //cout fuction for not paramiterized & paramiterized constructor

    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;       //cout function for copy constructor

    return 0;
}

/*Not parameterized constructor is not need if we set the parameterized l=1 and b=1 respectively.
then by default if no value is passed or given then length and breadth will be 1.
the code will be-> 

rectangle(int l=1, int b=1)     
    {
        setLength(l);
        setBreadth(b);
    }*/