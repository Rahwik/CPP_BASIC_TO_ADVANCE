// while loop implementation
#include<iostream>
using namespace std;
int main()
{
    int i=0;
    while(i<0)
    {
        cout<<"hello"<<endl;
        i++;
    }

    int j=10;
    while(j--)
    {
        cout<<j<<endl;
    }
    
    do{
        cout<<"hello"<<endl;
        i--;
    }
    while(i);

    return 0;

}