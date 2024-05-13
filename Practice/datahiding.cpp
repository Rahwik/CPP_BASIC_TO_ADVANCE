#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breath;
    public:
    int setLength(int l)
    {
        if(l>=0)
        length=l;
        else 
        length=0;
    }
    int setBreath(int b)
    {
        if(b>=0)
        breath=b;
        else
        breath=0;
    }
    int getLength()
    {
        return length;
    }
    int getBreath()
    {
      return breath;
    }
    int area()
    {
        return length *breath;
    }
};
int main()
{
    rectangle r;
    r.setLength(10);
    r.setBreath(5);
    cout<<r.area()<<endl;
    cout<<"length="<<r.getLength()<<endl;
    cout<<"breath="<<r.getBreath()<<endl;
    return 0;
}