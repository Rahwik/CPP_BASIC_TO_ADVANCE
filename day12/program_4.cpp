#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    string name;
    static int addno;

    student(string n)
    {
        addno++;
        roll=addno;
        name=n;
    }
    void display()
    {
        cout<<"name"<<name<<endl<<"roll"<<roll<<endl;
    }
};
int student::addno=0;

int main()
{
    student s1("rahul");
    student s2("yashoda");
    student s3("hammy");
    student s4("rahwik");
    student s5("soda");
    student s6("yotsuba");

    s1.display();
    s2.display();
    s3.display();
    cout<<"number admission"<<student::addno<<endl;

    return 0;
}