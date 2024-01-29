// Insertion Operator Overloading
#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend ostream &operator<<(ostream &out, const Complex &c);
    Complex operator+(const Complex &other)
    {
        Complex temp;
        temp.real = this->real + other.real;
        temp.img = this->img + other.img;
        return temp;
    }
};
ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real << "+ " << c.img;
    return out;
}
int main()
{
    Complex c1(4, 3);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;

    cout << "c1:" << c1 << endl;
    cout << "c2:" << c2 << endl;
    cout << "c3:" << c3 << endl;

    return 0;
}