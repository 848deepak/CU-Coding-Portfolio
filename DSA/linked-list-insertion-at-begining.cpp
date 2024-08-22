//link list insertion at beginning
#include<iostream>
using namespace std;

//defination of node structure
struct Node{
    int data;
    Node* next;
};

//insertion at beginning
void insertAtBeginning(Node* &head, int newData){
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}
//fn to print the link list
void printList(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int main(){
    //iniatialise an empty link list
    Node* head=nullptr;
    //insert same element to the link list
    insertAtBeginning(head,3);
    insertAtBeginning(head,5);
    insertAtBeginning(head,7);
    insertAtBeginning(head,9);
    insertAtBeginning(head,21);

    cout<<"Linked list: ";
    printList(head);
    return 0;
}