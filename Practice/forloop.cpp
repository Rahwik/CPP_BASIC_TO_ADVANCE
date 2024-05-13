#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    cout<<"array"<<endl;

    int array[5];

    for(int i=0;i<5;i++)
       array[i]=i;

    for(int i=0;i<5;i++)
    cout<<array[i]<<endl;

    return 0;       
}