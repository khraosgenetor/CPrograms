#include <stdio.h>

// Define an enumeration
enum Day {
    SUNDAY = 0,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

enum TrafficLight {
    RED = 1,
    YELLOW = 2,
    GREEN = 3
};

int main() {
    // Using enum to represent days
    enum Day today = WEDNESDAY;
    printf("Today is: ");
    switch (today) {
        case SUNDAY:
            printf("Sunday\n");
            break;
        case MONDAY:
            printf("Monday\n");
            break;
        case TUESDAY:
            printf("Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Wednesday\n");
            break;
        case THURSDAY:
            printf("Thursday\n");
            break;
        case FRIDAY:
            printf("Friday\n");
            break;
        case SATURDAY:
            printf("Saturday\n");
            break;
    }

    // Using enum to represent traffic light states
    enum TrafficLight signal = YELLOW;
    printf("Traffic light signal is: ");
    switch (signal) {
        case RED:
            printf("Red (Stop)\n");
            break;
        case YELLOW:
            printf("Yellow (Get Ready)\n");
            break;
        case GREEN:
            printf("Green (Go)\n");
            break;
    }

    // Printing raw enum values
    printf("\nRaw enum values:\n");
    printf("Monday = %d, Yellow = %d\n", MONDAY, YELLOW);

    return 0;
}
