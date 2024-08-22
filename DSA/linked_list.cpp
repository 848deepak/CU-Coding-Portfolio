/*
AIM: - Write a menu driven program that maintains a linear linked list whose elements are stored in ascending order and implement the following operations: (using separate functions):

a) Create a linked list

b) Search an element

c) Display all the elements.
*/
#include <iostream>
using namespace std;

class linklist
{
private:
    // Define a structure for a node in the linked list
    struct node
    {
        int data;   // Data stored in the node
        node *link; // Pointer to the next node
    } *p;           // Head pointer of the linked list

public:
    // Constructor to initialize the head pointer
    linklist();

    // Function to append an element to the end of the linked list
    void append(int num);

    // Function to add an element as the first node of the linked list
    void add_as_first(int num);

    // Function to add an element after a specific position in the linked list
    void addafter(int c, int num);

    // Function to delete a specified element from the linked list
    void del(int num);

    // Function to display all elements in the linked list
    void display();

    // Function to count the number of elements in the linked list
    int count();

    // Destructor to deallocate memory allocated for nodes
    ~linklist();
};

// Constructor definition
linklist::linklist()
{
    p = NULL; // Initialize head pointer to NULL
}

// Function to append an element to the end of the linked list
void linklist::append(int num)
{
    node *q, *t;
    if (p == NULL)
    {
        // If list is empty, create first node and assign data
        p = new node;
        p->data = num;
        p->link = NULL;
    }
    else
    {
        // Traverse to the end of the list and append new node
        q = p;
        while (q->link != NULL)
            q = q->link;
        t = new node;
        t->data = num;
        t->link = NULL;
        q->link = t;
    }
}

// Function to add an element as the first node of the linked list
void linklist::add_as_first(int num)
{
    node *q;
    q = new node;
    q->data = num;
    q->link = p;
    p = q;
}

// Function to add an element after a specific position in the linked list
void linklist::addafter(int c, int num)
{
    node *q, *t;
    int i;
    for (i = 0, q = p; i < c; i++)
    {
        q = q->link;
        if (q == NULL)
        {
            cout << "\nThere are less than " << c << " elements.";
            return;
        }
    }
    t = new node;
    t->data = num;
    t->link = q->link;
    q->link = t;
}

// Function to delete a specified element from the linked list
void linklist::del(int num)
{
    node *q, *r;
    q = p;
    if (q->data == num)
    {
        p = q->link;
        delete q;
        return;
    }
    r = q;
    while (q != NULL)
    {
        if (q->data == num)
        {
            r->link = q->link;
            delete q;
            return;
        }
        r = q;
        q = q->link;
    }
    cout << "\nElement " << num << " not Found.";
}

// Function to display all elements in the linked list
void linklist::display()
{
    node *q;
    cout << endl;
    for (q = p; q != NULL; q = q->link)
        cout << endl
             << q->data;
}

// Function to count the number of elements in the linked list
int linklist::count()
{
    node *q;
    int c = 0;
    for (q = p; q != NULL; q = q->link)
        c++;
    return c;
}

// Destructor definition to deallocate memory allocated for nodes
linklist::~linklist()
{
    node *q;
    if (p == NULL)
        return;
    while (p != NULL)
    {
        q = p->link;
        delete p;
        p = q;
    }
}

// Main function
int main()
{
    // Create an instance of linklist
    linklist ll;

    // Print the number of elements in the linked list
    cout << "No. of elements = " << ll.count();

    // Append elements to the linked list
    ll.append(12);
    ll.append(13);
    ll.append(23);
    ll.append(43);
    ll.append(44);
    ll.append(50);

    // Add elements as the first node of the linked list
    ll.add_as_first(2);
    ll.add_as_first(1);

    // Add elements after specific positions in the linked list
    ll.addafter(3, 333);
    ll.addafter(6, 666);

    ll.display();

    cout << "\nNo. of elements = " << ll.count();

    ll.del(333);
    ll.del(12);
    ll.del(98);

    cout << "\nNo. of elements = " << ll.count();

    return 0;
}
