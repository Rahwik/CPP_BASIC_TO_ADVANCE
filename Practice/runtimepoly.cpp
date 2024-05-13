#include<iostream>
using namespace std;
class car
{
    public:
    virtual void start()=0;

};
class innova: public car
{
  public:
  void start()
  {
    cout<<"start the innova"<<endl;

  }
};
class swift:public car{
    public:
    void start()
    {
      cout<<"start the swift"<<endl;

    }
};
int main()
{
    car* p=new innova;
    p->start();
    delete p;
    p=new swift();
    p->start();
    delete p;
    return 0;
}