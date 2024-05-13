#include<iostream>
using namespace std;
int main()
{
    double var1,var2;
    beginning:
    cout<<"enter the value of the first number"<<endl;
    cin>>var1;
    cout<<"enter the value of second number"<<endl;
    cin>>var2;

    char decision;
    cout<<"what calculation do you want to perform"<<endl;
    cout<<"+ add the numbers"<<endl;
    cout<<"- subtract the numbers"<<endl;
    cout<<"* multiply the numbers"<<endl;
    cout<<"/ divide the number"<<endl;
    cin>>decision;

    switch(decision)
    {
        case'+':
        cout<<var1<<"+"<<var2<<"="<<var1+var2<<endl;
        break;
        case'-':
        cout<<var1<<"-"<<var2<<"="<<var1-var2<<endl;
        break;
        case'*':
        cout<<var1<<"*"<<var2<<"="<<var1*var2<<endl;
        break;
        case'/':
        cout<<var1<<"/"<<var2<<"="<<var1/var2<<endl;
        break;
        default:
        cout<<"wrong character entered"<<endl;

    }
    char decision2;
    cout<<"Do you wnat to continue the process(y/n)"<<endl;
    cin>>decision2;

    if(decision2=='y'||decision2=='Y')
    goto beginning;

    return 0;
}