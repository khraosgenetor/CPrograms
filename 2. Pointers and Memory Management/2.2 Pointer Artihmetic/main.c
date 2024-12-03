#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr1 = &arr[1];  // Pointer to second element (20)
    int *ptr2 = &arr[4];  // Pointer to fifth element (50)
    int *ptr3 = &arr[1];  // Pointer to second element again

    // Pointer Comparison
    if (ptr1 == ptr3) {
        printf("ptr1 and ptr3 point to the same memory location.\n");  // This will print
    }

    if (ptr1 != ptr2) {
        printf("ptr1 and ptr2 point to different memory locations.\n");  // This will print
    }

    if (ptr1 < ptr2) {
        printf("ptr1 is before ptr2 in memory.\n");  // This will print
    }

    ptr1 += 3;

    if (ptr1 < ptr2) {
        printf("ptr1 is before ptr2 in memory.\n");  // This will not print
    } else if (ptr2 < ptr1) {
        printf("ptr2 is before ptr1 in memory.\n");  // This will not print
    } else {
        printf("ptr1 and ptr2 point to the same memory location.\n");  // This will print
    }

    int a = 10, b = 5;
    int ar[] = {a, b};

    // Pointer arithmetic: Difference between pointers
    int diff = &ar[1] - &ar[0];  // This will be 1, since they are adjacent elements
    printf("Difference between pointers: %d\n", diff);  // Output the difference as an integer

    return 0;
}
