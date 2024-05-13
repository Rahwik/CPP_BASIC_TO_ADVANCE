#include<iostream>
using namespace std;
class rectangle{
    public:
    int length;
    int breath;

    int area()
    {
        return length*breath;
    }
    int perimeter(){
        return 2*(length+breath);
    }
};
int main()
{
    rectangle r1;
    rectangle *p;
    p=&r1;
    r1.length=10;
    r1.breath=20;
    p->length=5;
    p->breath=5;
    cout<<p->area()<<endl;

return 0;
}