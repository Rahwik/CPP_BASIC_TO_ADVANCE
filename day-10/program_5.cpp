/*
*Base class pointer can point on derieved class object.
*But only those functions which are in base class, can be called.
*If derieved class is having overrides functions they will not be called unless base class functions
are declared as virtual.
*Derieved class pointer cannot point on base class object.
*/
#include <iostream>

using namespace std;

class Base
{
public:
    virtual void fun1()
    {
        cout << "fun1 of Base" << endl;
    }

    void fun2()
    {
        cout << "fun2 of Base" << endl;
    }

    void fun3()
    {
        cout << "fun3 of Base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun4()
    {
        cout << "fun4 of Derived" << endl;
    }

    void fun5()
    {
        cout << "fun5 of Derived" << endl;
    }
};

int main()
{
    Base *p;
    p = new Derived();

    p->fun1();  // This will call the overridden function in Derived if it is declared virtual
    p->fun2();
    p->fun3();
    // p->fun4();  // This line will cause a compilation error because fun4 is not in the Base class
    // p->fun5();  // This line will cause a compilation error for the same reason

    delete p;  // Always delete dynamically allocated memory

    return 0;
}