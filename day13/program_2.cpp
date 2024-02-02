#include<iostream>
using namespace std;

template<class T>
class Stack
{
private:
    T* stk;
    int top;
    int size;

public:
    Stack(int s2)
    {
        size = s2;
        top = -1;
        stk = new T[size];
    }

    void push(T x)
    {
        if (top == size - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            top++;
            stk[top] = x;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Popped element: " << stk[top] << endl;
            top--;
        }
    }
};

int main()
{
    Stack<int> intStack(5);
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    intStack.pop();

    Stack<double> doubleStack(5);
    doubleStack.push(1.1);
    doubleStack.push(2.2);
    doubleStack.push(3.3);
    doubleStack.pop();

    return 0;
}
