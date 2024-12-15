#include <iostream>
#include <memory> //To include smart pointers
using namespace std;

class A
{
    public:
    A(){cout<<"Constructor"<<endl;}
    ~A(){cout<<"Deconstructor"<<endl;}
    void func()
    {
        cout<<"Welcome to C++"<<endl;
    }
};

int main()
{

 //UNIQUE POINTERS    
   /* //unique_ptr<A> ptr(new(A));
    unique_ptr<A> ptr=make_unique<A>();
    //unique_ptr<A> ptr2=ptr;
    //Copy constructor is deleted
    //So we cannot share this pointer
    ptr->func();
    cout<<"out of local scope"<<endl;*/

 //SHARED POINTERS
    /*shared_ptr<A> ptr01;
    shared_ptr<A> ptr02;
    weak_ptr<A> wp;
   {
      shared_ptr<A> ptr=make_shared<A>();
      cout<<ptr.use_count()<<endl;
      shared_ptr<A> ptr2=ptr;
      cout<<ptr.use_count()<<endl;
      //ptr01=ptr2;
      cout<<ptr.use_count()<<endl;
      ptr->func();
      ptr2->func();
      wp=ptr;   //same as wp=ptr2;
      cout<<ptr.use_count()<<endl;
    }*/

 //WEAK POINTERS
    /*if(wp.expired())
    {
      cout<<"Expired"<<endl;
    } 
   else
   {
      cout<<wp.use_count()<<endl;
      ptr02=wp.lock();
    }
    //cout<<ptr01.use_count()<<endl;
    cout<<"After all blocks"<<endl;*/
    return 0;
}
// All the smart pointers concepts are used here in this one code only, run the particular type of pointer to excecute the code.
//Don't run the whole code at once
