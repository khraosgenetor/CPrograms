#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to the first element of the array

    // Access array elements using pointer arithmetic
    printf("Accessing elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));  // Equivalent to arr[i]
    }

    // Pointer navigation with increment
    printf("\nPointer navigation with increment:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *ptr);  // Access element using pointer
        ptr++;  // Move pointer to next element
    }

    // Reset pointer to the start of the array
    ptr = arr;

    // Pointer comparison
    int *ptr1 = &arr[1];
    int *ptr2 = &arr[4];
    if (ptr1 < ptr2) {
        printf("\nptr1 is before ptr2 in memory.\n");
    }

    // Pointer subtraction (difference in elements)
    int diff = ptr2 - ptr1;
    printf("Difference between ptr1 and ptr2: %d elements\n", diff);

    return 0;
}
