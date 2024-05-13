#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int coutdigit1(long n)
{
    int cout=0;
    while(n!=0)
    {
        n=n/10;
        ++cout;
    }
    return cout;
}
int coutdigit2(long n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+coutdigit1(n/10);
}
int coutdigitt3(long n)
{
    return floor(log10(n)+1);
}
int main()
{
    long n;
    cout<<"enter a number to find the number of digits"<<endl;
    cin>>n;
    int a=coutdigit1(n);
    int b=coutdigit2(n);
    int c=coutdigitt3(n);
    cout<<a<<b<<c<<"is the number of digits in the number input"<<endl;
    return 0;
}