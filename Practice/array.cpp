#include<iostream>
using namespace std;
int main()
{
    int array[4];

    array[0]=10;
    array[1]=20;
    array[2]=30;
    array[3]=40;

    cout<<"array[0]="<<array[0]<<",address ="<<&array[0]<<endl;
    cout<<"array[1]="<<array[1]<<",address ="<<&array[1]<<endl;
    cout<<"array[2]="<<array[2]<<",address ="<<&array[2]<<endl;
    cout<<"array[3]="<<array[3]<<",address ="<<&array[3]<<endl;

    if(&array[0]==array)
    {
        cout<<"True";
    }
return 0;
}