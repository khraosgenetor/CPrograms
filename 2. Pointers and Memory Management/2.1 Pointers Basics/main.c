#include <stdio.h>

int main() {
    // 1. Pointer Declaration
    int num = 100;
    int *ptr;  // Pointer to an integer

    // 2. Assign the address of num to the pointer
    ptr = &num;

    // 3. Dereferencing the Pointer
    printf("Value of num: %d\n", *ptr);  // Dereferencing ptr to get the value of num
    printf("Value of num: %p\n", (void *)ptr); //Printing memory Location of ptr -> num

    // 4. Pointer Types and Dereferencing
    char letter = 'A';
    char *cptr = &letter;  // Pointer to a char

    printf("Value of letter: %c\n", *cptr);  // Dereferencing cptr to get the value of letter

    // 5. Pointer Arithmetic
    int arr[] = {10, 20, 30, 40};
    int *arr_ptr = arr;

    printf("First element of array: %d\n", *arr_ptr);  // Output: 10
    arr_ptr++;  // Move pointer to the next element
    printf("Second element of array: %d\n", *arr_ptr);  // Output: 20

    // 6. Null Pointer
    int *null_ptr = NULL;
    if (null_ptr == NULL) {
        printf("The pointer is NULL.\n");
    }

    return 0;
}
