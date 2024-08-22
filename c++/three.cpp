#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
int main()
{
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Term in sequence of at position " << a << " is " << fib(a);
    return 0;
}