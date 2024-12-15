#include <iostream>
using namespace std;

class overflow : exception
{
public:
    void display()
    {
        cout << "Can't PUSH! Stack overflow!" << endl;
    }
};
class underflow : exception
{
public:
    void display()
    {
        cout << "Can't POP! Stack underflow!" << endl;
    }
};
class stack
{
private:
    int *stk;
    int size;
    int top = -1;

public:
    stack(int sz)
    {
        size = sz;
        stk = new int[size];
    }
    void push(int n)
    {
        if (top == top - 1)
        {
            throw overflow();
        }
        top++;
        stk[top] = n;
    }
    int pop()
    {
        if (size == -1)
        {
            throw underflow();
        }
        return stk[top--];
    }
};
int main()
{
    stack s(1);
    s.push(8);
    s.push(6);
    s.push(9);
    s.pop();
    s.push(3);
    s.push(5);
    s.pop();
    s.pop();
    return 0;
}