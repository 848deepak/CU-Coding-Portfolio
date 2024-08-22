int Factorial(int n) {
    if (n <= 1) {  // Base case: factorial of 0 or 1 is 1
        return 1;
    }
    return n * Factorial(n - 1); 

    int fibonacci(int N) {
    if (N < 0) {
        throw invalid_argument("N must be a non-negative integer.");
    }
    if (N == 0) return 0;
    if (N == 1) return 1;

    int a = 0; // F(0)
    int b = 1; // F(1)
    int c;

    for (int i = 2; i <= N; i++) {
        c = a + b; // Calculate the next Fibonacci number
        a = b;     // Update a to be the previous Fibonacci number
        b = c;     // Update b to be the current Fibonacci number
    }

    return c;
}