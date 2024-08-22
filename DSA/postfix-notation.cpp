#include<iostream>
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

float scanNum(char ch) {
   int value = ch;
   return float(value - '0'); // Return float from character
}

int isOperator(char ch) {
   if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
      return 1; // Character is an operator
   return -1; // Not an operator
}

int isOperand(char ch) {
   if(ch >= '0' && ch <= '9')
      return 1; // Character is an operand
   return -1; // Not an operand
}

float operation(float a, float b, char op) {
   // Perform operation
   if(op == '+')
      return b + a;
   else if(op == '-')
      return b - a;
   else if(op == '*')
      return b * a;
   else if(op == '/')
      return b / a;
   else if(op == '^')
      return pow(b, a); // Find b^a
   else
      return INT_MIN; // Return negative infinity
}

float postfixEval(string postfix) {
   stack<float> stk;
   for(char& c : postfix) {
      // Read elements and perform postfix evaluation
      if(isOperator(c) != -1) {
         float a = stk.top();
         stk.pop();
         float b = stk.top();
         stk.pop();
         stk.push(operation(a, b, c));
      } else if(isOperand(c) > 0) {
         stk.push(scanNum(c));
      }
   }
   return stk.top();
}

int main() {
   string post = "21+3*";
   cout << "Result: " << postfixEval(post) << endl;
   return 0;
}
