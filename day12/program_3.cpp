/*
*Static Members
*static members are memebers of class.
*only one instance of static members is created and shared by all objects;
*they can be accessed directly using class name.
*static memeber functions are functions of class, they can be called using class name, without creating object of a class.
*they can access only static data memebers of class, they cannot access non-static memebers.
*/
#include<iostream>
using namespace std;
class test
{
    public:
    int a ;
    static int count;

    test()
    {
        a=10;
        count++;
    }
    static int getcount()
    {
        return count;
    }
};
int test::count=0;
int main()
{
    test t1,t2;
    cout<<test::getcount()<<endl;
    cout<<t1.getcount()<<endl;
    return 0;
}