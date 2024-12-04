#include <stdio.h>

int main() {
    // 1. For Loop
    printf("For Loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    // 2. While Loop
    printf("\nWhile Loop:\n");
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    // 3. Do-While Loop
    printf("\nDo-While Loop:\n");
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);

    // 4. Components of a Loop (Initialization, Condition, Increment)
    printf("\nFor Loop with initialization, condition, and increment:\n");
    for (int i = 0; i < 10; i++) {
        printf("Iteration %d\n", i);
    }

    // 5. Loop Control Statements

    // Break Statement
    printf("\nBreak Statement:\n");
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i equals 5
        }
        printf("%d\n", i);
    }

    // Continue Statement
    printf("\nContinue Statement:\n");
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // Skip iteration when i equals 5
        }
        printf("%d\n", i);
    }

    // 6. Infinite Loop
    // Uncomment to run the infinite loop:
    /*
    printf("\nInfinite Loop:\n");
    while (1) {
        printf("This will run forever unless stopped manually.\n");
        break; // Break out after one iteration to avoid infinite loop
    }
    */

    // 7. Nested Loops
    printf("\nNested Loops:\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }

    // 8. Loop Optimization (Using break)
    printf("\nLoop Optimization (Using break):\n");
    for (int i = 0; i < 1000; i++) {
        if (i == 500) {
            break; // Exit early when the value reaches 500
        }
        printf("%d\n", i);
    }

    // 9. Performance Considerations (Using efficient data structures)
    printf("\nPerformance Considerations (Using HashMap equivalent in C):\n");
    // In C, using arrays or structs to simulate HashMap:
    const char* keys[] = {"apple", "banana"};
    int values[] = {1, 2};
    int size = 2;

    for (int i = 0; i < size; i++) {
        printf("%s has value %d\n", keys[i], values[i]);
    }

    // 10. Loop Variables (Scope within the loop)
    printf("\nLoop Variables (Limited scope within the loop):\n");
    for (int i = 0; i < 10; i++) {
        int square = i * i; // Limited to the scope of the loop
        printf("Square of %d is %d\n", i, square);
    }

    // 11. If-Else Statement
    printf("\nIf-Else Statement:\n");
    int x = 7;
    if (x > 5) {
        printf("%d is greater than 5\n", x);
    } else {
        printf("%d is not greater than 5\n", x);
    }

    // 12. If-Else If-Else Chain
    printf("\nIf-Else If-Else Chain:\n");
    int y = 8;
    if (y < 5) {
        printf("%d is less than 5\n", y);
    } else if (y == 5) {
        printf("%d is equal to 5\n", y);
    } else {
        printf("%d is greater than 5\n", y);
    }

    // 13. Switch-Case Statement
    printf("\nSwitch-Case Statement:\n");
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
