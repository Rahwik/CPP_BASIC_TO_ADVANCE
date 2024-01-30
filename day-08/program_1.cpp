// Write CPP program to implement Constructors
#include <iostream>
using namespace std;

class Test
{
public:
    int a;
    int *p;

    Test(int x)
    {
        a = x;
        p = new int[a];
    }
    Test(Test &T)
    {
        a = T.a;
        p = new int[a];
    }
};
int main()
{
    Test T(5);
    Test T2(T);
    return 0;
}