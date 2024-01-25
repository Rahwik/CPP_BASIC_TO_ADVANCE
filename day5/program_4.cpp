//pointer to function
#include<iostream>
using namespace std;
void display()
{
    cout<<"hello world";

}
int main()
{
    void(*fp)();
    fp=&display;
    (*fp)();
    return 0;
}
