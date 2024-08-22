#include <iostream>
using namespace std;
#define MAX 10
struct stack
{
    int items[MAX];
    int top;
};
// Function to create an empty stack
void createEmptyStack(stack *s)
{
    s->top = -1;
}
// Function to check if the stack is full
bool isFull(stack *s)
{
    return s->top == MAX - 1;
}
// Function to check if the stack is empty
bool isEmpty(stack *s)
{
    return s->top == -1;
}
// Function to add elements into stack (push operation)
void push(stack *s, int newItem)
{
    if (isFull(s))
    {
        cout << "STACK FULL" << endl;
    }
    else
    {
        s->top++;
        s->items[s->top] = newItem;
    }
}
// Function to remove element from stack (pop operation)
void pop(stack *s)
{
    if (isEmpty(s))
    {
        cout << "STACK EMPTY" << endl;
    }
    else
    {
        cout << "Item popped= " << s->items[s->top] << endl;
        s->top--;
    }
}
// Function to print elements of stack
void printStack(stack *s)
{
    cout << "Stack: ";
    for (int i = 0; i <= s->top; i++)
    {
        cout << s->items[i] << " ";
    }
    cout << endl;
}
// Driver code
int main()
{
    stack s;
    createEmptyStack(&s);
    // Push elements onto the stack
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    // Print the stack
    printStack(&s);
    // Pop an element from the stack
    pop(&s);
    cout << "After popping out:" << endl;
    printStack(&s);
    return 0;
}
