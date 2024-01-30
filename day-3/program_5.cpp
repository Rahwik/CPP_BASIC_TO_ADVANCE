//Progarm for binary search in the Array
#include<iostream>
using namespace std;
int main()
{
    int a[]={6,8,13,17,20,22,25,28,30,35};
    cout<<"enter the element to be searched=";
    int b;
    cin>>b;

    for(auto x:a)
    {
        if(b==x)
        {
            cout<<"the element is present"<<endl;
            return 0;
        }
    }
        
    cout<<"the elemenmt is not present check it again"<<endl;
    return 0;
}