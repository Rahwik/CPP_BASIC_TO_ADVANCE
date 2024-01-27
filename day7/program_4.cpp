// Data Hiding in CPP
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
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
    void setBreath(int b)
    {
        if (b >= 0)
        {
            breath = b;
        }
        else
        {
            breath = 0;
        }
    }
    int getLength()
    {
        return length;
    }
    int getbreath()
    {
        return breath;
    }
    int area()
    {
        return length * breath;
    }
};

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreath(20);
    cout << r.area() << endl;
    cout << "length is" << r.getLength() << endl;

    return 0;
}