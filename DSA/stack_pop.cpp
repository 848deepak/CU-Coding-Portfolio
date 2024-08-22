#include <iostream>
using namespace std;

#define MAX_SIZE 100 // Define max size of the stack

class Stack
{
private:
    int arr[MAX_SIZE]; // Define max size of array
    int top;

public:
    Stack()
    { // Constructor
        top = -1;
    }

    void push(int val)
    {
        if (top == MAX_SIZE - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = val;
        cout << "Pushed " << val << " into stack" << endl;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Popped " << arr[top] << " from stack" << endl;
        top--;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element of stack: " << arr[top] << endl;
    }
};

int main()
{
    Stack myStack;

    // Pushing elements
    myStack.push(10);
    myStack.push(20);
    myStack.push(23);
    myStack.push(25);
    myStack.push(27);
    myStack.pop(); // Popping an element

    // Display top element
    myStack.peek();

    return 0;
}
