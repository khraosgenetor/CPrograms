#include <stdio.h>

void process(int a, int b, int (*callback)(int, int)) {
    int result = callback(a, b);  // Call the callback function
    printf("Callback result: %d\n", result);
}

// Function to be passed as a callback
int multiply(int a, int b) {
    return a * b;
}

// Function to be used with a function pointer
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer
    int (*func_ptr)(int, int);

    // Assign the add function to the function pointer
    func_ptr = &add;

    // Use the function pointer to call the function
    int result = func_ptr(5, 3);  // Calls add(5, 3)
    printf("Result: %d\n", result);  // Output: Result: 8

    process(5, 3, multiply);  // Output: Callback result: 15


    return 0;
}
