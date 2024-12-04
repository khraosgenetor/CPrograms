#include <stdio.h>

// Define a structure
struct Rectangle {
    float length;
    float width;
};

int main() {
    // Implicit Casting
    printf("Implicit Casting:\n");
    int intVal = 42;
    float floatVal = intVal; // Automatic promotion
    printf("Integer value: %d\n", intVal);
    printf("Converted to float: %.2f\n\n", floatVal);

    // Explicit Casting
    printf("Explicit Casting:\n");
    float f = 3.99;
    int i = (int)f; // Forced truncation
    printf("Float value: %.2f\n", f);
    printf("Converted to integer: %d\n\n", i);

    // Pointers and Type Casting
    printf("Pointers and Type Casting:\n");
    int num = 0x12345678; // Example value in hexadecimal
    int *pNum = &num;     // Pointer to integer
    char *pChar = (char *)&num; // Cast to char pointer to access bytes
    printf("Original Integer: 0x%X\n", *pNum);
    printf("First byte of integer (as char): 0x%X\n\n", *pChar);

    // Structures and Void Pointer Casting
    printf("Structures and Void Pointer Casting:\n");
    struct Rectangle rect = {10.5, 20.25}; // Initialize structure
    void *voidPtr = &rect;                 // Generic void pointer
    struct Rectangle *rectPtr = (struct Rectangle *)voidPtr; // Cast back
    printf("Rectangle dimensions: Length = %.2f, Width = %.2f\n\n",
           rectPtr->length, rectPtr->width);

    // Reinterpreting a Float as Bytes
    printf("Reinterpreting a Float as Bytes:\n");
    float pi = 3.141592;
    char *piBytes = (char *)&pi; // Cast float pointer to char pointer
    printf("Float value: %.6f\n", pi);
    printf("Bytes in memory: ");
    for (int j = 0; j < sizeof(float); j++) {
        printf("0x%X ", piBytes[j]);
    }
    printf("\n");

    return 0;
}
