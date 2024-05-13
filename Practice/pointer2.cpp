#include<iostream>
using namespace std;
int main()
{
    int var=5;
    cout<<&var<<endl;
    cout<<*&var<<endl;

    int *p;
    p=&var;
    
    cout<<p<<endl;
    cout<<*p<<endl;
    
    int a =20;
    cout<<"a:"<<a<<endl;
    int *ptr=&a;
    *ptr=60;
    cout<<"a:"<<a<<endl;
    cout<<"*ptr"<<*ptr<<endl;

    int *const p_const=&a;
    const int *ptr1=&a;
    const int *const ptr2=&a;

    int myvar=0;
    int *my_p =&myvar;

    cout<<endl<<endl;
    cout<<*my_p<<endl;

    return 0;
}