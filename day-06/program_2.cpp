// CPP program to implement Function Overloading
#include<iostream>
using namespace std;
int add(int x,int y)//function with same name
{
    return x+y;
}
int add(int x,int y,int z)//function with same name
{
    return x+y+z;
}
int main()
{
    int a=10,b=5,c,d;
    c=add(a,b);
    d=add(a,b,c);
    cout<<c<<endl;
    cout<<d<<endl;

    return 0;
}