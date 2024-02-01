//CPP program to implement Abstract class
#include<iostream>
using namespace std;
class base{
    public:
    virtual void fun1()=0;
    virtual void fun2()=0;
};
class derieved: public base
{
    public:
    void fun1()
    {
        cout<<"func1 of derieved class"<<endl;
    }
    void fun2()
    {
        cout<<"fun2 of derieved"<<endl;
    }
};
int main()
{
    derieved d;
    d.fun1();
    d.fun2();
    return 0;
}