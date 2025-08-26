#include <stdio.h>

int main() {
    int number, lastDigit;

    // Input number from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Find last digit using modulus operator
    lastDigit = number % 10;

    // If number is negative, make last digit positive
    if (lastDigit < 0) {
        lastDigit = -lastDigit;
    }

    printf("The last digit of %d is: %d\n", number, lastDigit);

    return 0;
}

