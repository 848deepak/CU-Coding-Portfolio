#include <iostream>

 

class Queue {

private:

    static const int MAX_SIZE = 5;  // Maximum size of the queue

    int front;  // Front of the queue

    int rear;   // Rear of the queue

    int arr[MAX_SIZE];  // Array to store queue elements

 

public:

    // Constructor to initialize the queue

    Queue() : front(-1), rear(-1) {}

 

    // Function to enqueue an element into the queue

    void enqueue(int value) {

        if (rear == MAX_SIZE - 1) {

            std::cout << "Queue Overflow! Cannot enqueue element " << value << ".\n";

        } else {

            if (front == -1) {

                // If the queue is empty, set front to 0

                front = 0;

            }

            arr[++rear] = value;

            std::cout << "Element " << value << " enqueued into the queue.\n";

        }

    }

 

    // Function to dequeue an element from the queue

    void dequeue() {

        if (front == -1) {

            std::cout << "Queue Underflow! Cannot dequeue from an empty queue.\n";

        } else {

            std::cout << "Element " << arr[front] << " dequeued from the queue.\n";

            if (front == rear) {

                // If the dequeued element was the last element in the queue

                front = rear = -1;

            } else {

                // Move front to the next element

                front++;

            }

        }

    }

 

    // Function to traverse and display the elements in the queue

    void traverse() {

        if (front == -1) {

            std::cout << "Queue is empty.\n";

        } else {

            std::cout << "Queue elements: ";

            for (int i = front; i <= rear; ++i) {

                std::cout << arr[i] << " ";

            }

            std::cout << "\n";

        }

    }

 

    // Function to display the status of the queue

    void displayStatus() {

        if (front == -1) {

            std::cout << "Queue is empty.\n";

        } else if (rear == MAX_SIZE - 1) {

            std::cout << "Queue is full.\n";

        } else {

            std::cout << "Queue is not empty and not full.\n";

        }

    }

};

 

int main() {

    Queue myQueue;

    char choice;

 

    do {

        std::cout << "\nQueue Operations Menu:\n";

        std::cout << "a) Enqueue an Element\n";

        std::cout << "b) Dequeue an Element\n";

        std::cout << "c) Traverse the Queue\n";

        std::cout << "d) Display Queue Status\n";

        std::cout << "e) Quit\n";

        std::cout << "Enter your choice: ";

        std::cin >> choice;

 

        switch (choice) {

            case 'a': {

                int value;

                std::cout << "Enter the element to enqueue into the queue: ";

                std::cin >> value;

                myQueue.enqueue(value);

                break;

            }

            case 'b':

                myQueue.dequeue();

                break;

            case 'c':

                myQueue.traverse();

                break;

            case 'd':

                myQueue.displayStatus();

                break;

            case 'e':

                std::cout << "Exiting the program.\n";

                break;

            default:

                std::cout << "Invalid choice. Please enter a valid option.\n";

        }

    } while (choice != 'e');

 

    return 0;

}

