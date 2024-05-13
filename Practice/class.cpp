#include<iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breath;

    int area() {
        return length * breath;
    }

    int perimeter() {
        return 2 * (length + breath);
    }
};

int main() {
    Rectangle r1, r2;
    r1.length = 10;
    r1.breath = 5;
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Perimeter of r1: " << r1.perimeter() << endl;

    r2.length = 20;
    r2.breath = 10;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Perimeter of r2: " << r2.perimeter() << endl;

    return 0;
}