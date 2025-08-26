#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input values
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate Area and Perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Display results
    printf("\nLength = %.2f", length);
    printf("\nWidth = %.2f", width);
    printf("\nArea of Rectangle = %.2f", area);
    printf("\nPerimeter of Rectangle = %.2f\n", perimeter);

    return 0;
}

