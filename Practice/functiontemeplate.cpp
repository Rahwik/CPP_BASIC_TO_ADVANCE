#include<iostream>
using namespace std;
template<class T>
T add(T x, T y)
{
    if (x>y)
    return x;
    else
    return y;
}
int main()
{
    int c=add<int>(10,5);
    float d=add<float>(10.5F,20.5f);
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}