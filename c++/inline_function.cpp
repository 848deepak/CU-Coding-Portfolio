/*When an instruction of a function call is encountered during the compilation of a program, its memory address is stored by the compiler. The function arguments are copied on the stack and after the execution of the code, the control is transferred to the calling instruction. This process can sometimes cause overhead in function calls, especially if the function is small and its execution time is less than the switching time. This issue is resolved by using the inline functions. These functions overcome the overhead and also make the program faster by reducing the execution time of the program.

In case of inline functions, the compiler does not go through the above process of switching between the stack and calling function. Instead, it copies the definition of the inline function and the calling instruction with that definition. The following demonstration illustrates the working of inline function in C++:

*/
// define an inline function

// that prints the sum of 2 integers
#include <iostream>
using namespace std;

// Define an inline function that prints the sum of two integers
inline void printSum(int num1, int num2) {
    cout << num1 + num2 << "\n";
}

int main() {
    // Call the inline function
    // First call
    printSum(10, 20);

    // Second call
    printSum(2, 5);

    // Third call
    printSum(100, 400);

    return 0;
}
/*Following are some key points that you need to keep in mind while dealing with inline functions:

Inline functions that are small have higher efficiency and better results than the lengthier inline functions. So, try to keep your inline functions small in length.
Although these functions increase the efficiency of the program and improve its execution, you should not convert all the functions into inline functions. If you convert larger functions to inline, it may lead to code bloat and reduce the functioning quality of the program.
Always try to define large functions outside the class, since functions defined inside a class are automatically defined as inline and this will affect the program negatively. You can use scope resolution  for this purpose.*/