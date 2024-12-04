#include <stdio.h>

// Function to find the length of a string
int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy one string to another
void string_copy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to concatenate two strings
void string_concat(char dest[], const char src[]) {
    int i = 0;
    while (dest[i] != '\0') {
        i++;  // Find the end of the first string
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';  // Add null terminator
}

// Function to compare two strings
int string_compare(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // Strings are not equal
        }
        i++;
    }
    return str1[i] == str2[i];  // Strings are equal if both have reached null terminator
}

// Function to reverse a string
void string_reverse(char str[]) {
    int length = string_length(str);
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to convert string to uppercase
void string_to_uppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main() {
    // Example usage of string functions
    char str1[] = "hello";
    char str2[] = "world";

    // Length of string
    printf("Length of str1: %d\n", string_length(str1));

    // String copy
    char copied[6];
    string_copy(copied, str1);
    printf("Copied string: %s\n", copied);

    // String concatenation
    string_concat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // String comparison
    if (string_compare("hello", "hello")) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    // String reversal
    string_reverse(str1);
    printf("Reversed string: %s\n", str1);

    // Convert to uppercase
    string_to_uppercase(str2);
    printf("Uppercase string: %s\n", str2);

    return 0;
}
