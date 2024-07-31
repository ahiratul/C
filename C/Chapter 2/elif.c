#include<stdio.h>

int main() {
    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an Adult\n");
    } else if (age > 13 && age < 18) {
        printf("You are a teenager\n");
    } else {
        printf("Not an adult\n");
    }

    printf("Thank You");
    return 0;
}
