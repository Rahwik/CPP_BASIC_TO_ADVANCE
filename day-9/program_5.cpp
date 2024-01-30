#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double breadth;

public:
    Rectangle(double l = 0, double b = 0)
    {
        setLength(l);
        setBreadth(b);
    }

    double getLength()
    {
        return length;
    }

    double getBreadth()
    {
        return breadth;
    }

    void setLength(double l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            length = 0;
        }
    }

    void setBreadth(double b)
    {
        if (b >= 0)
        {
            breadth = b;
        }
        else
        {
            breadth = 0;
        }
    }

    double area()
    {
        return length * breadth;
    }
};

class Cuboid : public Rectangle
{
private:
    double height;

public:
    Cuboid(double l = 0, double b = 0, double h = 0) : Rectangle(l, b)
    {
        setHeight(h);
    }

    double getHeight()
    {
        return height;
    }

    void setHeight(double h)
    {
        if (h >= 0)
        {
            height = h;
        }
        else
        {
            height = 0;
        }
    }

    double volume()
    {
        return getLength() * getBreadth() * getHeight();
    }
};

int main()
{
    double length, breadth, height;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter breadth of the rectangle: ";
    cin >> breadth;

    Rectangle r(length, breadth);
    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Length is: " << r.getLength() << endl;

    cout << "\nEnter length of the cuboid: ";
    cin >> length;

    cout << "Enter breadth of the cuboid: ";
    cin >> breadth;

    cout << "Enter height of the cuboid: ";
    cin >> height;

    Cuboid c(length, breadth, height);
    cout << "Cuboid Volume: " << c.volume() << endl;

    return 0;
}
