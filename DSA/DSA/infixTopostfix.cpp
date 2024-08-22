/*Aim: - Write a program to demonstrate the use of stack (implemented using linear array) in converting arithmetic expression from infix notation to postfix notation.

*/
#include <iostream>

#include <cstring>

using namespace std;

bool isOperator(char c) {

    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';

}

int precedence(char op) {

    switch(op) {

        case '+':

        case '-':

            return 1;

        case '*':

        case '/':

            return 2;

        case '^':

            return 3;

        default:

            return 0;

    }

}

void infixToPostfix(const char* expression, char* postfix) {

    int len = strlen(expression);

    int j = 0; // Index for postfix

    char stack[len]; // Stack for operators

    int top = -1; // Initialize stack top

    for (int i = 0; i < len; i++) {

        char c = expression[i];

        if (isalnum(c)) {

            postfix[j++] = c;

        } else if (c == '(') {

            stack[++top] = c;

        } else if (c == ')') {

            while (top != -1 && stack[top] != '(') {

                postfix[j++] = stack[top--];

            }

            top--; // Remove '('

        } else if (isOperator(c)) {

            while (top != -1 && precedence(c) <= precedence(stack[top])) {

                postfix[j++] = stack[top--];

            }

            stack[++top] = c;

        }

    }

    while (top != -1) {

        postfix[j++] = stack[top--];

    }

    postfix[j] = '\0'; // Null-terminate the postfix expression

}

int main() {

    char expression[100], postfix[100];

    cout << "Enter an expression in infix form: ";

    cin.getline(expression, 100);

    infixToPostfix(expression, postfix);

    cout << "The postfix expression is: " << postfix << endl;

    return 0;

}

