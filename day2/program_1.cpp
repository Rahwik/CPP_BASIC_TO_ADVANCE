// data types in cpp
#include<iostream>
using namespace std;
int main()
{
    int a=10,b=15;
    cout<<"values of a:"<<a<<"address of a"<<&a<<endl;
    cout<<"values of a:"<<b<<"address of a"<<&b<<endl;

    short s=20;
    cout<<"the value of s:"<<s<<endl;

    float f1=20.03;
    double d1=50.55416416;
    cout<<"value of f1:"<<f1<<endl;
    cout<<"value of d1:"<<d1<<endl;

    char c1='a';
    cout<<c1<<endl;

    string s1="hello world";
    cout<<s1<<endl;

    string s2="hollow purple";
    cout<<s2<<endl;

    string combinestrings=s1+ ',' +s2;
    cout<<combinestrings<<endl;

    return 0;
}