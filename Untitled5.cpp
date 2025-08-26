#include <stdio.h>
#include <math.h>  // for floor() and ceil()

int main() {
    double num, fVal, cVal;

    // Input number
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);

    // Calculate floor and ceiling
    fVal = floor(num);
    cVal = ceil(num);

    // Display results
    printf("\nNumber = %.2lf", num);
    printf("\nFloor Value = %.2lf", fVal);
    printf("\nCeiling Value = %.2lf\n", cVal);

    return 0;
}

