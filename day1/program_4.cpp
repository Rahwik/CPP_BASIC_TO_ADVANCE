// conditional if else statement
#include<iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"enter the savings"<<endl;
    cin>>savings;
    if(savings>50000)
    {
        cout<<"it's time to party"<<endl;
    }
    else
    {
        cout<<"you are broke."<<endl;
    }
    return 0;

}