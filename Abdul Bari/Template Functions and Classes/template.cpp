#include <iostream>
using namespace std;

template <class t>
class stack
{
private:
    t *stk;
    int top;
    int size;

public:
    stack(int n)
    {
        size = n;
        top = -1;
        stk = new t[size];
    }
    void push(t x);
    t pop();
};

template <class t>
void stack<t>::push(t x)
{
    if (top == -1)
    {
        cout << "Stack is full!" << endl;
    }
    else
    {
        top++;
        stk[top] = x;
    }
}

template <class t>
t stack<t>::pop()
{
    t x=0;
    if (top == -1)
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        top--;
        x = stk[top];
    }
    return x;
}

int main()
{
    stack<float> s(5);
    s.push(3);
    s.push(7);
    s.push(13);
    s.pop();
    s.pop();
    return 0;
}