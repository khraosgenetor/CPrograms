#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Stack Overflow example (due to infinite recursion)
void recursive_function() {
    recursive_function();  // Infinite recursion leading to stack overflow
}

// Memory Leak example
void memory_leak_example() {
    int *ptr = malloc(sizeof(int) * 10);  // Dynamically allocating memory
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // Forgetting to free the memory
    // free(ptr);  // This line should be added to avoid memory leak
}

// Buffer Overflow example
void buffer_overflow_example() {
    char buffer[10];
    strcpy(buffer, "This is a very long string");  // Causes buffer overflow
    printf("Buffer: %s\n", buffer);  // Undefined behavior due to buffer overflow
}

int main() {
    // Stack Overflow example
    // Uncomment to observe stack overflow
    /*
    printf("Calling recursive function...\n");
    recursive_function();  // This will cause a stack overflow
    */

    // Memory Leak example
    printf("Demonstrating Memory Leak:\n");
    memory_leak_example();  // This causes a memory leak because memory is not freed

    // Buffer Overflow example
    printf("\nDemonstrating Buffer Overflow:\n");
    buffer_overflow_example();  // This causes a buffer overflow

    // Example of Stack and Heap usage

    // Stack example
    int stack_var = 10;
    printf("\nStack Memory:\n");
    printf("Value of stack_var: %d\n", stack_var);
    printf("Address of stack_var: %p\n", (void*)&stack_var);

    // Heap example
    int *heap_var = malloc(sizeof(int));  // Allocating memory on the heap
    if (heap_var == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    *heap_var = 20;
    printf("\nHeap Memory:\n");
    printf("Value of heap_var: %d\n", *heap_var);
    printf("Address of heap_var: %p\n", (void*)heap_var);

    // Freeing dynamically allocated memory
    free(heap_var);  // Avoiding memory leak

    return 0;
}
