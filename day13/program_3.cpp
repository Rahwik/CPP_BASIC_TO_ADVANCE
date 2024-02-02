#include<iostream>
using namespace std;

#define MAX(x, y) (x > y ? x : y)
#define msg(x) #x

#define PI 3.1425

int main()
{
    cout << PI << endl;
    cout << MAX(10, 12) << endl;
    cout << msg(hello) << endl;

    return 0;
}
