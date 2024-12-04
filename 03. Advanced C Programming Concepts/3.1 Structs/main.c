#include <stdio.h>

// Define a struct
struct Point {
    int x;
    int y;
};

// Function to print a struct (passed by value)
void printPoint(struct Point p) {
    printf("Point: (%d, %d)\n", p.x, p.y);
}

// Function to update a struct (passed by reference)
void updatePoint(struct Point *p, int newX, int newY) {
    p->x = newX;
    p->y = newY;
}

// Function to create and return a struct
struct Point createPoint(int x, int y) {
    struct Point p;
    p.x = x;
    p.y = y;
    return p;
}

int main() {
    // Create and initialize a struct
    struct Point p1 = {10, 20};
    printf("Original Point: ");
    printPoint(p1); // Print struct using a function

    // Update the struct by reference
    updatePoint(&p1, 50, 60);
    printf("Updated Point: ");
    printPoint(p1);

    // Create a new struct using a function
    struct Point p2 = createPoint(30, 40);
    printf("Created Point: ");
    printPoint(p2);

    return 0;
}
