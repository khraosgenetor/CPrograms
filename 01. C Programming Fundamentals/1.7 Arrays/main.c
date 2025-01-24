#include <stdio.h>

int main() {
    // 1. One-Dimensional Array
    int arr1[5] = {1, 2, 3, 4, 5};
    printf("One-Dimensional Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // 2. Two-Dimensional Array
    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("\nTwo-Dimensional Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    // 3. Array Initialization
    int arr3[5] = {10, 20}; // Partial initialization
    printf("\nPartially Initialized Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    // 4. Accessing Multidimensional Array
    int arr4[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    printf("\n3D Array Access: arr4[1][0][1] = %d\n", arr4[1][0][1]); // Output: 6

    // 5. Array Traversal (One-Dimensional)
    printf("\nArray Traversal (One-Dimensional):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // 6. Array Traversal (Two-Dimensional)
    printf("\nArray Traversal (Two-Dimensional):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
