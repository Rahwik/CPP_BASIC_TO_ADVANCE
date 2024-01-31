//CPP program to implement the Virtual Polymorphism
#include<iostream>
using namespace std;
class base{
    public:
    virtual void print()
    {
        cout<<"print the base class"<<endl;
    }
    void show()
    {
        cout<<"show the base class"<<endl;
    }
};
class derieved:public base{
    public:
    void print()
    {
        cout<<"print the derieved class"<<endl;
    }
    void show()
    {
        cout<<"show the derieved class"<<endl;
    }
};
int main()
{
    base *p;
    derieved d;
    p=&d;
    //virual function, bineded at runtime
    p->print();
    //virtaul function , binded at compile time.
    p->show();

    return 0;
}