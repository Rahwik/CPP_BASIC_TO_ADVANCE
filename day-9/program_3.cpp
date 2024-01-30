// Inheritance
#include <iostream>
using namespace std;
class Base
{
public:
    int x;

    void show()
    {
        cout << x << endl;
    }
};
class Derieved : public Base
{
public:
    int y;
    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    Base b;
    b.x=25;
    b.show();
    Derieved d;
    d.x = 10;
    d.y = 15;
    d.show();
    d.display();

    return 0;
}