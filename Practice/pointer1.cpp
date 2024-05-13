#include<iostream>
using namespace std;
int main()
{
    int a=19;
    int*p=&a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    return 0;
}