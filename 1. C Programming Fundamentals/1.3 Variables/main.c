#include <stdio.h>

int main()
{
    int c = 10; //initialization
    int b; //declaration
    int a = b + c; // variable manipulation
    printf("%d\n", a); // Unexpected error ( b initially stored as -12906 )
    b = 5;
    a = b + c;
    printf("%d\n", a);
    return 0;
}
