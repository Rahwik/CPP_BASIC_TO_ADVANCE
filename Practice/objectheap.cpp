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
    int perimeter()
    {
        return 2*(length+breath);
    }
};
int main()
{
    rectangle *p;
    p=new rectangle;
    rectangle *q=new rectangle;
    p->length=10;
    p->breath=20;
    q->length=5;
    q->breath=5;
    cout<<p->area()<<endl;
    cout<<q->area()<<endl;
    return 0;
}