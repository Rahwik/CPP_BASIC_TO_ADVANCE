#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBreadth(b);
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    void setLength(int l)
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

    void setBreadth(int b)
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

    int area()
    {
        return length * breadth;
    }
};

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int l = 0, int b = 0, int h = 0) : Rectangle(l, b)
    {
        setHeight(h);
    }

    int getHeight()
    {
        return height;
    }

    void setHeight(int h)
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

    int volume()
    {
        return getLength() * getBreadth() * getHeight();
    }
};

int main()
{
    Rectangle r(10, 20);
    cout << "Rectangle Area: " << r.area() << endl;
    cout << "Length is: " << r.getLength() << endl;

    Cuboid c(5, 10, 15);
    cout << "Cuboid Volume: " << c.volume() << endl;

    return 0;
}
