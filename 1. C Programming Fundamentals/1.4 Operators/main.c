#include <stdio.h>

int main() {
    int a = 10, b = 9, c = 90, d = 8;

    // Post-increment and pre-increment for 'a'
    printf("%d ", a++);  // Post-increment
    printf("%d ", a++);  // Post-increment
    printf("%d ", ++a);  // Pre-increment
    a = 10;  // Reset a for the next set of operations

    // Post-decrement and pre-decrement for 'b'
    printf("%d ", b--);  // Post-decrement
    printf("%d ", b--);  // Post-decrement
    printf("%d ", --b);  // Pre-decrement
    b = 9;  // Reset b

    // Pre-decrement for 'c'
    printf("%d ", --c);  // Pre-decrement
    printf("%d ", --c);  // Pre-decrement
    printf("%d ", c--);  // Post-decrement
    c = 90;  // Reset c

    // Pre-increment for 'd'
    printf("%d ", ++d);  // Pre-increment
    printf("%d ", ++d);  // Pre-increment
    printf("%d ", d--);  // Post-decrement

    // Arithmetic Operations: addition, subtraction, multiplication, division, and modulus

    // Addition
    printf("%d ", a + b);  // a + b

    // Subtraction
    printf("%d ", a - b);  // a - b

    // Multiplication
    printf("%d ", a * b);  // a * b

    // Division (integer division)
    if (b != 0) {
        printf("%d ", a / b);  // a / b (integer division)
    } else {
        printf("Division by zero! ");
    }

    // Modulus (remainder of division)
    if (b != 0) {
        printf("%d ", a % b);  // a % b (modulus)
    } else {
        printf("Modulus by zero! ");
    }

    // Logical Operators

    // AND (&&)
    if (a > 5 && b < 10) {
        printf("a > 5 AND b < 10\n");
    }

    // OR (||)
    if (a > 5 || b < 5) {
        printf("a > 5 OR b < 5\n");
    }

    // NOT (!)
    if (!(a == b)) {
        printf("a is NOT equal to b\n");
    }

    return 0;
}
