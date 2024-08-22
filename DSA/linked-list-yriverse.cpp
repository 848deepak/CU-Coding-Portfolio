//link list traverse
#include<iostream>
using namespace std;
//define the structure of node
struct node{
    int data;
    node* next;
};
//fn to create new node
node* createNode(int val){
    node* newNode=new node;
    newNode->data= val;
    newNode->next=nullptr;
    return newNode;
}
//fn to traverse and print linked list
void traverseLinklist(node* head){
    cout<<"Linked List";
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main()
{
    //creating a link list
    node* head=createNode(1);
    head->next=createNode(2);
    head->next->next=createNode(3);
    head->next->next->next=createNode(4);
    head->next->next->next->next=createNode(5);
    //traverse link list
    traverseLinklist(head);

    return 0;
}