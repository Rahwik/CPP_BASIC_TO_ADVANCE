#include<iostream>
using namespace std;

int division(int a, int b)
{
    if (b == 0)
    {
        throw 1;
    }
    return a / b;
}

int main()
{
    int x = 10, y = 0, z;  // Setting y to 0 to trigger the division by zero exception
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (int e)
    {
        cerr << "Exception: Division by zero" << endl;
    }
    cout << "Bye" << endl;
    return 0;
}
