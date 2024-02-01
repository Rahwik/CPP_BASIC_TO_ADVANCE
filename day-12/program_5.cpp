//Nested classes in CPP
#include<iostream>
using namespace std;

class enclosing {
private:
    int x;

public:
    class Nested {
    private:
        int y;

    public:
        void nestedfun(enclosing *e) {
            cout << e->x << endl;
        }
    };

    enclosing(int val) : x(val) {}
};

int main() {
    enclosing obj(10);
    enclosing::Nested nestedObj;

    nestedObj.nestedfun(&obj);

    return 0;
}
