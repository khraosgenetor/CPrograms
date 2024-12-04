#include <stdio.h>

// Function declarations
int add(int a, int b);
void printMessage();
int factorial(int n);
void scopeExample();

int main() {
    // 1. Calling a function with return value
    int result = add(5, 3);
    printf("Sum: %d\n", result); // Output: Sum: 8

    // 2. Calling a function without return value
    printMessage(); // Output: Hello, World!

    // 3. Calling a recursive function (factorial)
    int fact = factorial(5);
    printf("Factorial of 5: %d\n", fact); // Output: Factorial of 5: 120

    // 4. Variable Scope Example
    scopeExample();

    return 0;
}

// Function definitions

// 1. Add function
int add(int a, int b) {
    return a + b;
}

// 2. Print message function (void, no return value)
void printMessage() {
    printf("Hello, World!\n");
}

// 3. Recursive function for factorial
int factorial(int n) {
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1); // Recursive case
}

// 4. Variable Scope Example (local and global)
int globalVar = 100; // Global variable

void scopeExample() {
    int localVar = 50; // Local variable
    printf("Local variable inside function: %d\n", localVar); // Output: 50
    printf("Global variable inside function: %d\n", globalVar); // Output: 100
}
