/*AIM: - Design a menu driven Program for the following operations on STACK of Integers (Array Implementation of Stack)

a) Push an Element on to Stack

b) Pop an Element from Stack

c) Demonstrate Overflow and Underflow situations on Stack.

d) Display the status of Stack.

Support the program with appropriate functions for each of the above operations.

*/

#include <iostream>

using namespace std;

class Stack {

private:

    static const int MAX_SIZE = 5;  // Maximum size of the stack

    int top;  // Top of the stack

    int arr[MAX_SIZE];  // Array to store stack elements

 

public:

    // Constructor to initialize the stack

    Stack() : top(-1) {}

 

    // Function to push an element onto the stack

    void push(int value) {

        if (top == MAX_SIZE - 1) {

            std::cout << "Stack Overflow! Cannot push element " << value << ".\n";

        } else {

            arr[++top] = value;

            std::cout << "Element " << value << " pushed onto the stack.\n";

        }

    }

 

    // Function to pop an element from the stack

    void pop() {

        if (top == -1) {

            std::cout << "Stack Underflow! Cannot pop from an empty stack.\n";

        } else {

            std::cout << "Element " << arr[top--] << " popped from the stack.\n";

        }

    }

 

    // Function to display the status of the stack

    void displayStatus() {

        if (top == -1) {

            std::cout << "Stack is empty.\n";

        } else if (top == MAX_SIZE - 1) {

            std::cout << "Stack is full.\n";

        } else {

            std::cout << "Stack is not empty and not full.\n";

        }

    }

};

 

int main() {

    Stack myStack;

    char choice;

 

    do {

        std::cout << "\nStack Operations Menu:\n";

        std::cout << "a) Push an Element\n";

        std::cout << "b) Pop an Element\n";

        std::cout << "c) Display Stack Status\n";

        std::cout << "d) Quit\n";

        std::cout << "Enter your choice: ";

        std::cin >> choice;

 

        switch (choice) {

            case 'a': {

                int value;

                std::cout << "Enter the element to push onto the stack: ";

                std::cin >> value;

                myStack.push(value);

                break;

            }

            case 'b':

                myStack.pop();

                break;

            case 'c':

                myStack.displayStatus();

                break;

            case 'd':

                std::cout << "Exiting the program.\n";

                break;

            default:

                std::cout << "Invalid choice. Please enter a valid option.\n";

        }

    } while (choice != 'd');

 

    return 0;

}

