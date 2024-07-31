#include <stdio.h>

int main() {
    char day;  // Use int instead of char for numerical input

    printf("Enter day (A-E): ");
    scanf("%s", &day);  // Use %d for integers, and fix the typo in the scanf

    switch (day) {
        case 'm': 
            printf("Monday\n");
            break;
        case 't': 
            printf("Tuesday\n");
            break;
        case 'w': 
            printf("Wednesday\n");
            break;
        case 'T': 
            printf("Thursday\n");
            break;
        case 'F': 
            printf("Friday\n");
            break;
        case 's': 
            printf("Saturday\n");
            break;
        case 'S': 
            printf("Sunday\n");
            break;
        default: 
            printf("Not a valid day!\n");
    }

    return 0;
}
