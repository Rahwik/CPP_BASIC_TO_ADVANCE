//using pointer to function to find the min number
#include<iostream>
using namespace std;
int min(int x,int y)
{
    return(x<y)?x:y;
}
int main()
{
    int (*fp)(int,int);
    fp=min;
    int result=(*fp)(10,5);

    cout<<result<<endl;
    return 0;
}