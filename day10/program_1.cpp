/*
Constructor is a class member function with the same name as
the class. The main job of the constructor is to allocate memory for class objects.
constructors is automatically called when the object is created.
*/
#include <iostream>
using namespace std;

class A1
{
public:
    A1()
    {
        int a = 20, b = 35, c = 0;
        c = a + b;
        cout << "sum is:" << c << endl;
    }
};
class A2
{
public:
    A2()
    {
        int x = 50, y = 42, z;
        z = x - y;
        cout << "difference is:" << z << endl;
    }
};
class s : public A1, public A2
{
public:
    s() : A1(), A2()
    {
        int r = 40, s = 8, t;
        t = r * s;
        cout << "product is:" << t << endl;
    }
};
int main()
{
    s obj;
    return 0;
}
