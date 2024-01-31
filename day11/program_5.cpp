//CPP program to implement runtime polymorphism
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a rectangle" << endl;
    }
};

int main()
{
    // Using pointers to the base class to achieve runtime polymorphism
    Shape *shapePtr = new Circle();
    shapePtr->draw();

    shapePtr = new Rectangle();
    shapePtr->draw();

    delete shapePtr; // Don't forget to release the allocated memory

    return 0;
}
