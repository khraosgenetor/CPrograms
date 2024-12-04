#include "stdio.h"

int main()
{
    // Primitive data types
    short sa, sb, sc;
    unsigned short usa, usb, usc;
    int a, b, c;
    unsigned int ua, ub, uc;
    long la, lb, lc;
    unsigned long ula, ulb, ulc;
    long long lla, llb, llc;
    unsigned long long ulla, ullb, ullc;
    float af, bf, cf;
    double ad, bd, cd;
    long double ald, bld, cld;
    char ac, bc, cc;
    unsigned char uac, ubc, ucc;

    // Printing size of each data type
    printf("Size of short: %zu bytes\n", sizeof(sa));
    printf("Size of unsigned short: %zu bytes\n", sizeof(usa));
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of unsigned int: %zu bytes\n", sizeof(ua));
    printf("Size of long: %zu bytes\n", sizeof(la));
    printf("Size of unsigned long: %zu bytes\n", sizeof(ula));
    printf("Size of long long: %zu bytes\n", sizeof(lla));
    printf("Size of unsigned long long: %zu bytes\n", sizeof(ulla));
    printf("Size of float: %zu bytes\n", sizeof(af));
    printf("Size of double: %zu bytes\n", sizeof(ad));
    printf("Size of long double: %zu bytes\n", sizeof(ald));
    printf("Size of char: %zu bytes\n", sizeof(ac));
    printf("Size of unsigned char: %zu bytes\n", sizeof(uac));

    return 0;
}
