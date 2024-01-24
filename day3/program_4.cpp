//Program to find the max element in the array
#include<iostream>
using namespace std;
int main()
{
    int a[]={4,8,6,9,5,2,7};
    int max=a[0];
    for(auto x:a)
    {
        if(max<x)
        {
            max=x;
        }
    }
    cout<<"the biggest element in the array="<<max<<endl;
    return 0;
}