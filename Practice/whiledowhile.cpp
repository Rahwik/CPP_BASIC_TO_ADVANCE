#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(i<10)
    {
        cout<<"hey"<<endl;
        i++;
    }
    int j=10;
    while(j--)
    {
        cout<<j<<endl;
    }
    do{
        cout<<"bye"<<endl;
        i--;
    }
    while(i);
    return 0;
}