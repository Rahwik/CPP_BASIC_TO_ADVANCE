// simple for loop using array
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<3;i++)
    cout<<"endl"<<endl;

    int array[4];
    for(int i=0;i<4;i++)
    array[i]=i;

    for(int i=0;i<4;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}
