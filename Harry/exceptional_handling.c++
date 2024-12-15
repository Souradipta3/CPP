#include <iostream>
#include <limits>
#include <exception> //Includes exceptional handling in c++
using namespace std;
int main()
{
    int x;
    cout<<"Enter a value: "<<endl;
    cin>>x;
    try{
        if(x<0) throw 'c'; //whenever the contditon satisfies it will throw c and will look the suitable exceptional catch statement
        x+=1;
    }
    catch(int i) //For int exceptional it will follow this set of codes
    {
        cout<<"Exception: "<<i<<endl;
    }
    catch(char ch) //For char exceptional it will follow this set of codes
    {
        cout<<"Exception ch: "<<ch<<endl;
    }
    catch(...) //For other exceptional which is not mentioned it will follow this set of codes a it is specified by 3 dots(...)
    {
        cout<<"Generic exception "<<endl;
    }
    cout<<"x: "<<x<<endl; //Lastly it prints the value of the inputed data after going through exceptional handling
    return 0;
}
