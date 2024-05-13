#include<iostream>
using namespace std;
class base{
    public:
    virtual void print()
    {
        cout<<"print the base class\n";
    }
    void show()
    {
        cout<<"show the base class"<<endl;

    }
};
class derived:public base{
    public:
    void print()
    {
        cout<<"print the derived class\n";
    }
    void show()
    {
        cout<<"show the derived class\n";

    }
};
int main()
{
    derived d;
    base *btpr;
    btpr=&d;
    btpr ->print();
    btpr ->show();
return 0;
}