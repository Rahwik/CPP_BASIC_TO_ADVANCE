//refernce in pointers
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x;//reference
    x++;
    y++;
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}