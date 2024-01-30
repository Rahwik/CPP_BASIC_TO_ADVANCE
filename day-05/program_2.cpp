//aloocation and deallocation in pointers
#include<iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    p[0]=12;//memory allocation
    p[1]=13;
    cout<<p[1]<<endl;
    delete []p;//memory deallocation 
    p=nullptr;

    return 0;
}