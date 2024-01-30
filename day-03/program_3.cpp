//Program for the sum of the elements
#include<iostream>
using namespace std;
int main()
{
    int a[]={4,8,6,9,5,2,7};
    int sum=0;
    for(auto x:a)
    {
        sum=sum+x;
        //sums all the elemnts one by one
    }
    cout<<"sum of the array elemnts="<<sum<<endl;
    return 0;
}