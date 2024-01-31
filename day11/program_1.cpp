/*
Function Overloading:
*Redine a function of a base class in the derieved class.
*/
#include<iostream>
using namespace std;
class base{
    public:
    void fun()
    {
        cout<<"function of the base"<<endl;
    }
};
class derieved:public base
{
  public:
  void fun()
  {
    cout<<"function of the derieved"<<endl;
  }
};
int main()
{
    derieved d;
    d.fun();
    return 0;
}