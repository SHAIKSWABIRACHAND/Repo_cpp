#include <iostream>
using namespace std;

class stack
{
public:
    int size;
    int *a;
    int top;

    stack(int s) : size(s)
    {
        a = new int[size];
        top = -1;
    }
    ~stack() {}

    void push(int x)
    {
        if (top < size)
        {
            a[top + 1] = x;
            top = top + 1;
        }
        else
        {
            cout << "Stack is full" << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            top = top - 1;
        }
    }

    int peek()
    {
        if (!isEmpty())
        {
            return a[top];
        }
        else
        {
            cout << "Stack is Empty";
        }
        return -1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    void sort()
    {
        StackSSL *s2 = new StackSSL();

        while (!isEmpty())
        {
            Node *temp = pop(); // Get top element
            if (!temp)
                break; // Handle empty stack case
            int tempVal = temp->val;

            // Move elements from s2 back to this if they are greater than tempVal
            while (!s2->isEmpty() && s2->peek() > tempVal)
            {
                push(s2->pop()->val);
            }

            // Push the element into s2
            s2->push(tempVal);
        }

        // Move elements back from s2 to this
        while (!s2->isEmpty())
        {
            push(s2->pop()->val);
        }
    }
};
int main()
{
    stack *s = new stack(4);
    s->push(4);
    s->push(5);
    s->push(6);
    s->push(7);
    s->display();
    s->pop();
    s->display();
}