#include <stdio.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data d;

    d.i = 10;
    printf("Integer: %d\n", d.i);

    d.f = 3.14;
    printf("Float: %.2f\n", d.f);

    // Assign a string
    sprintf(d.str, "Hello");
    printf("String: %s\n", d.str);

    // Observe overwriting
    printf("After String Assignment, Integer: %d\n", d.i);

    return 0;
}
