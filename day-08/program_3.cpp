// scope resolution operator
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breath = b;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter();
};

int Rectangle::perimeter()
{
    return 2 * (length * breath);
}
int main()
{
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
}