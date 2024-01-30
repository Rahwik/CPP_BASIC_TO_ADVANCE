/*
Composition (Has-A) simply mean the use of instance variables that are references to other objects.
For Example Mariti has Engine, or House has a bathroom
*/

#include <iostream>
#include <string>

using namespace std;

class Engine
{
private:
    int maxSpeed;

public:
    Engine(int speed) : maxSpeed(speed) {}

    void displayInfo()
    {
        cout << "Max Speed: " << maxSpeed << " mph" << endl;
    }
};

class Car
{
private:
    string color;
    Engine carEngine;

public:
    Car(const string &carColor, int engineSpeed) : color(carColor), carEngine(engineSpeed) {}

    void carInfo()
    {
        cout << "Car color: " << color << endl;
        carEngine.displayInfo();
    }
};

class SportsCar
{
private:
    Car baseCar;
    bool isConvertible;

public:
    SportsCar(const string &carColor, int engineSpeed, bool convertible)
        : baseCar(carColor, engineSpeed), isConvertible(convertible) {}

    void sportsCarInfo()
    {
        baseCar.carInfo();
        cout << "Convertible: " << (isConvertible ? "Yes" : "No") << endl;
    }
};

int main()
{
    SportsCar mySportsCar("Red", 200, true);
    mySportsCar.sportsCarInfo();

    return 0;
}
