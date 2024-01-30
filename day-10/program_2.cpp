/*
*IS-A relationship:
In object oriented programming, the concept of IS-A is a totally based on
Inheritance, which can be of two types class Inheritance or Interface Inheritance.
It is just like saying " A is B type of thing."
For Example, Apple is a fruit, Car is a Vehicale etc.
Inheritance is uni-directional. For Example, House is a building. But is not a house.
*/
#include<iostream>
#include<string.h>
using namespace std;

class Car
{
private:
    string color;
    int maxspeed;

public:
    void carInfo()
    {
        cout << "Car color: " << color << ", Max speed: " << maxspeed << " mph" << endl;
    }

    void setcolor(const string &newcolor)
    {
        color = newcolor;
    }

    void setmaxspeed(int newmaxspeed)
    {
        maxspeed = newmaxspeed;
    }
};

class SportsCar : public Car
{
private:
    bool isConvertible;

public:
    void sportsCarInfo()
    {
        carInfo(); // Calling the base class method
        cout << "Convertible: " << (isConvertible ? "Yes" : "No") << endl;
    }

    void setConvertible(bool convertible)
    {
        isConvertible = convertible;
    }
};

int main()
{
    SportsCar mySportsCar;

    // Setting Car properties
    mySportsCar.setcolor("Red");
    mySportsCar.setmaxspeed(200);

    // Setting SportsCar specific property
    mySportsCar.setConvertible(true);

    // Displaying information
    mySportsCar.sportsCarInfo();

    return 0;
}
