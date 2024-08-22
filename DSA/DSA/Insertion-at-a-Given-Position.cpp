#include <iostream>
#include <string>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

// display the list
void printList()
{
    struct node *p = head;
    cout << "\n[";

    // start from the beginning
    while (p != NULL)
    {
        cout << " " << p->data << " ";
        p = p->next;
    }
    cout << "]";
}

// insertion at the beginning
void insertatbegin(int data)
{

    // create a link
    struct node *lk = (struct node *)malloc(sizeof(struct node));
    lk->data = data;

    // point it to old first node
    lk->next = head;

    // point first to new first node
    head = lk;
}
void insertafternode(struct node *list, int data)
{
    struct node *lk = (struct node *)malloc(sizeof(struct node));
    lk->data = data;
    lk->next = list->next;
    list->next = lk;
}
int main()
{
    insertatbegin(12);
    insertatbegin(22);
    insertatbegin(30);
    insertafternode(head->next, 44);
    insertafternode(head->next->next, 50);
    cout << "Linked List: ";

    // print list
    printList();
}