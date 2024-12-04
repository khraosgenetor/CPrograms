#include <stdio.h>

// Function to print binary representation of a number
void printBinary(int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

// Function to count the number of set bits in a number
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += (num & 1); // Add 1 if the least significant bit is 1
        num = num >> 1;     // Shift right by 1
    }
    return count;
}

int main() {
    int num = 0b00101100; // Initial binary number (44 in decimal)

    printf("Original number: ");
    printBinary(num);

    // Set the 5th bit
    num = num | (1 << 5);
    printf("After setting 5th bit: ");
    printBinary(num);

    // Clear the 3rd bit
    num = num & ~(1 << 3);
    printf("After clearing 3rd bit: ");
    printBinary(num);

    // Toggle the 2nd bit
    num = num ^ (1 << 2);
    printf("After toggling 2nd bit: ");
    printBinary(num);

    // Check the 4th bit
    if (num & (1 << 4)) {
        printf("4th bit is set.\n");
    } else {
        printf("4th bit is not set.\n");
    }

    // Extract the 7th bit
    int bit = (num >> 7) & 1;
    printf("7th bit is: %d\n", bit);

    // Count the number of set bits
    int setBitsCount = countSetBits(num);
    printf("Number of set bits: %d\n", setBitsCount);

    return 0;
}
