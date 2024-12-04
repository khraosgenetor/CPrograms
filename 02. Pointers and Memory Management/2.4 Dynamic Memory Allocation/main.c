#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Using malloc to allocate memory
    int *arr = (int*)malloc(5 * sizeof(int));  // Allocates memory for 5 integers
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;  // Assigning values: 10, 20, 30, 40, 50
    }

    // Print the array
    printf("Array elements using malloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 2. Using calloc to allocate and initialize memory
    int *arr2 = (int*)calloc(5, sizeof(int));  // Allocates and initializes memory for 5 integers
    if (arr2 == NULL) {
        printf("Memory allocation failed.\n");
        free(arr);  // Free previously allocated memory before returning
        return 1;
    }

    // Print the array initialized by calloc
    printf("Array elements using calloc (initialized to zero):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);  // All elements will be zero
    }
    printf("\n");

    // 3. Free the dynamically allocated memory
    free(arr);
    free(arr2);

    // 4. Attempting to use freed memory (undefined behavior)
    // Uncommenting the next line would cause undefined behavior, as arr is now a dangling pointer.
    // printf("%d\n", arr[0]);  // Accessing freed memory - undefined behavior!

    return 0;
}
