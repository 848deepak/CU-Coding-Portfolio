#include <iostream>
#define MAX_SIZE 5

using namespace std;

class Queue {
private:
    int myqueue[MAX_SIZE], front, rear;

public:
    // Constructor to initialize front and rear
    Queue() {
        front = -1;
        rear = -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        if (front == 0 && rear == MAX_SIZE - 1) {
            return true;
        }
        return false;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        if (front == -1) {
            return true;
        }
        return false;
    }

    // Function to add an element to the queue (enqueue)
    void enQueue(int value) {
        if (isFull()) {
            cout << endl << "Queue is full!!";
        } else {
            if (front == -1) {
                front = 0;
            }
            rear++;
            myqueue[rear] = value;
            cout << value << " ";
        }
    }

    // Function to remove an element from the queue (dequeue)
    int deQueue() {
        int value;
        if (isEmpty()) {
            cout << "Queue is empty!!" << endl;
            return -1;
        } else {
            value = myqueue[front];
            if (front >= rear) { // Only one element in queue
                front = -1;
                rear = -1;
            } else {
                front++;
            }
            cout << endl << "Deleted => " << value << " from myqueue";
            return value;
        }
    }

    // Function to display elements of the queue
    void displayQueue() {
        int i;
        if (isEmpty()) {
            cout << endl << "Queue is Empty!!" << endl;
        } else {
            cout << endl << "Front = " << front;
            cout << endl << "Queue elements : ";
            for (i = front; i <= rear; i++) {
                cout << myqueue[i] << "\t";
            }
            cout << endl << "Rear = " << rear << endl;
        }
    }
};

int main() {
    Queue myq;

    // Dequeue operation (No elements in queue yet)
    myq.deQueue();

    cout << "Queue created:" << endl;
    myq.enQueue(10);
    myq.enQueue(20);
    myq.enQueue(30);
    myq.enQueue(40);
    myq.enQueue(50); // Enqueue 60 => queue is full
    myq.enQueue(60); // Queue is full

    myq.displayQueue();

    // Dequeue operation (Removes 10)
    myq.deQueue();

    // Queue after dequeue
    myq.displayQueue();

    return 0;
}
