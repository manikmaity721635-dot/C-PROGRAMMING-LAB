#include <stdio.h>
#include <math.h>  // for sqrt()

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients a, b, and c (for ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    if (a == 0) {
        printf("This is not a quadratic equation (a must not be 0).\n");
    } 
    else {
        // Case 1: real and different roots
        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root1 = %.2lf, Root2 = %.2lf\n", root1, root2);
        }
        // Case 2: real and equal roots
        else if (discriminant == 0) {
            root1 = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("Root1 = Root2 = %.2lf\n", root1);
        }
        // Case 3: complex roots
        else {
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and conjugates.\n");
            printf("Root1 = %.2lf + %.2lfi\n", realPart, imagPart);
            printf("Root2 = %.2lf - %.2lfi\n", realPart, imagPart);
        }
    }

    return 0;
}

