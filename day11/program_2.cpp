/*
Virtual Functions:
*virtual functions are used for achieveing polymorphism.
*base class can have virtual functions.
*virtual class can be overrided class.
*/
#include<iostream>
using namespace std;
class BasicCar
{
    public:
    virtual void start()
    {
        cout<<"Basic car Started"<<endl;
    }
};
class Advancecar:public BasicCar
{
    void start()
    {
        cout<<"Advance car Started"<<endl;
    }
};
int main()
{
    BasicCar *p=new Advancecar();
    p->start();

    return 0;
}