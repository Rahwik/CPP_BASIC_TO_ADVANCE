// Writing a class
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
    Rectangle r1, r2;
    r1.length = 10;
    r1.breath = 20;
    cout << r1.area() << endl;
    r2.length = 21;
    r2.breath = 10;
    cout << r2.perimeter() << endl;

    return 0;
}