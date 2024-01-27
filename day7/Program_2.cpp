// Pointer to class in CPP
#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breath;

    int area()
    {
        return length * breath;
    }

    int perimeter()
    {
        return 2 * (length + breath);
    }
};
int main()
{
    Rectangle r;
    Rectangle *p;
    p = &r;
    p->length = 10;
    p->breath = 20;
    cout << p->area() << endl;
    cout << p->perimeter() << endl;

    return 0;
}