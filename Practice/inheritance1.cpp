#include<iostream>
using namespace std;
class Rectangle
{
    protected:
    double length ;
    double breadth;

    public:
    Rectangle (double l,double b):length(l),breadth(b){}
    // {
    //     length=l;
    //     breath=b;
    // }
    double getlength()
    {
        return length;
    }
    double getbreadth()
    {
        return breadth;
    }
};
class Cuboid:public Rectangle
{
  private:
  double height;

  public:
  Cuboid (double l,double b, double h):Rectangle(l,b),height(h){}
//   {
//      length=l;
//      breath=b;
//      height=h;
//   }
  double getheight()
  {
    return height;
  }
  double calculateVolume()
{
    return length*breadth*height;
}
};

int main()
{
    double length,breadth,height;
    cout<<"enter the length of the cuboid"<<endl;
    cin>>length;
    cout<<"enetr the breadth of cuboid"<<endl;
    cin>>breadth;
    cout<<"enter the height of the cuboid"<<endl;
    cin>>height;

    Cuboid cuboid(length,breadth,height);

    cout<<"cuboid volume:"<<cuboid.calculateVolume()<<endl;

    return 0;
}