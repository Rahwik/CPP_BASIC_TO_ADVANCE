#include<iostream>
using namespace std;

class complex
{
    private:

    int real;
    int img;

    public:
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend ostream& operator<<(ostream& out,const complex &c);

    complex operator+(const complex &other)
    {
        complex temp;
        temp.real=this->real+other.real;
        temp.img=this->img+other.img;
        return temp;

    }
};

ostream& operator<<(ostream& out, const complex &c)
{
    out<<c.real<<"+i"<<c.img;
    return out;
}
int main()
{
    complex c1(4,3);
    complex c2(3,4);
    complex c3;
    c3=c1+c2;

cout<<"c1:"<<c1<<endl;
cout<<"c2:"<<c2<<endl;
cout<<"c3:"<<c3<<endl;
return 0;

}