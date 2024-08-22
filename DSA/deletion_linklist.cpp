#include <iostream>

using namespace std;

// Define the structure of a Node
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the linked list
Node* append(Node* head, int data) {
    Node* new_node = new Node;
    new_node->data = data;
    new_node->next = nullptr;
    if (head == nullptr) {
        head = new_node;
        return head;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}

// Function to delete a node with a given value
Node* deleteNode(Node* head, int key) {
    Node* temp = head;
    Node* prev = nullptr;

    // If the key is found at the head of the list
    if (temp != nullptr && temp->data == key) {
        head = temp->next;
        delete temp;
        return head;
    }

    // Search for the key to delete
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key is not found
    if (temp == nullptr) {
        cout << "Key not found in the list." << endl;
        return head;
    }

    // Unlink the node from the list
    prev->next = temp->next;
    delete temp;
    return head;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = nullptr;

    // Append some elements to the linked list
    head = append(head, 1);
    head = append(head, 2);
    head = append(head, 3);
    head = append(head, 4);

    cout << "Original Linked List: ";
    printList(head);
    // Delete a node
    head = deleteNode(head, 3);
    cout << "Linked List after deleting node with value 3: ";
    printList(head);
    return 0;
}