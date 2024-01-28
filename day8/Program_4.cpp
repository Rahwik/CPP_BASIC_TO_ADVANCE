// Inline Functions
#include <iostream>
using namespace std;
class Test
{
public:
    void func()
    {
        cout << "Inline" << endl;
        ;
    }
    void func2();
};

void Test::func2()
{
    cout << "non-inline" << endl;
    ;
}
int main()
{
    Test T;
    T.func();
    T.func2();

    return 0;
}