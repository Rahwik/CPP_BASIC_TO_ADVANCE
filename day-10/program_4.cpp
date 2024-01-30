/*
Access Specifiers
*Public: All memebers of base will have same accessibility in derieved class.
*Protected: All members of base will become protected in derieved class.
*private: All members of base will become private in derieved class.
*/
#include <iostream>
using namespace std;

class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funcparent()
    {
        a = 10; // Private member, not accessible in derived classes
        b = 20; // Accessible in derived classes
        c = 30; // Accessible everywhere
    }
};

class Child : private Parent
{
private:
    // a, b, and c are not directly accessible in Child
public:
    void funcChild()
    {
        // a = 10;  // Not accessible, as 'a' is private in the base class
        b = 5;  // Accessible, as 'b' is protected in the base class
        c = 15; // Accessible, as 'c' is public in the base class
    }
};

class Grandchild : public Child
{
public:
    void funcgrandchild()
    {
        // a = 10;  // Not accessible, as 'a' is private in the base class
        // b = 5;   // Not accessible directly in the derived class
        //c = 15; // Accessible, as 'c' is public in the base class
    }
};

int main()
{
    Child c1;
    // c1.a = 10;  // 'a' is private and not accessible in Child
    // c1.b = 5;   // 'b' is protected and accessible in Child
    //c1.c = 20; // Accessible, as 'c' is public

    return 0;
}