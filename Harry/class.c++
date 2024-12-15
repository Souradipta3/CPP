#include <iostream>
using namespace std;
class Car
{
    string name="Some name";
    string id;
    float mileage;
    float distanceTravelled=0;

    public:
    string getName()
    {
        return name;
    }

    string getId()
    {
        return id;
    }

    float getMileage();
    void travel(float);
    float getDistanceTravelled();
};

float Car::getMileage()
{
    return mileage;
}

void Car::travel(float kmsTravelled)
{
    distanceTravelled+=kmsTravelled;
}

float Car::getDistanceTravelled()
{
    return distanceTravelled;
}

int main()
{
    Car c1;
    cout<<c1.getName()<<endl;
    cout<<c1.getDistanceTravelled()<<endl;
    c1.travel(199);
    cout<<c1.getDistanceTravelled()<<endl;
    return 0;
}
