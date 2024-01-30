#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breath;

public:
    Rectangle()
    {
        length = 0;
        breath = 0;
    } // Default Constructors

    Rectangle(int l, int b)
    {
        length = l;
        breath = b;
    } // Parameterized Constructors

    Rectangle(Rectangle &r)
    {
        length = r.length;
        breath = r.breath;
    } // Copy Constructors

    void setLength(int l)
    {
        length = l;
    } // Accessor

    void setBreath(int b)
    {
        breath = b;
    } // Accessor

    int getLength()
    {
        return length;
    } // Mutator

    int getBreath()
    {
        return breath;
    } // Mutator

    int perimeter()
    {
        return 2 * (length + breath);
    } // Facilitaors

    ~Rectangle(); // destructor
};

int main()
{
    Rectangle r;
    cout << "Length: " << r.getLength() << ", Breath: " << r.getBreath() << endl;

    Rectangle r1(5, 10);
    cout << "Length: " << r1.getLength() << ", Breath: " << r1.getBreath() << endl;

    Rectangle r2(r1);
    cout << "Length: " << r2.getLength() << ", Breath: " << r2.getBreath() << endl;

    r.setLength(3);
    r.setBreath(6);
    cout << "Perimeter of r: " << r.perimeter() << endl;

    return 0;
}
