//Array implementation with for each loop.
//use of the Auto function
#include<iostream>
using namespace std;
int main()
{
    float a[]={2.3f,3.9f,6.2f,9.8f};
    //values in the float data type
    for(auto x:a)
    //x does not need to know thw data type of array
    {
        cout<<x<<endl;
    }
    return 0;
}