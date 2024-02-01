/*
Friend Function and Classes
*friend functions are global functions.
*they can access member of a class upon their objects.
*a class can be declared as friend on another class.
*all the functions of friends class can access private and protected membersof other class.
*/
#include<iostream>
using namespace std;
class your;
class my
{
    private:int a;
    protected:int b;
    public:int c;
friend your;
};
class your{
    my m;
    void func()
    {
        m.a=10;
        m.b=10;
        m.c=10;
    }
};
int main()
{
    return 0;
}