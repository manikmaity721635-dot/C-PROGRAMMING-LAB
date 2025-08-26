#include <stdio.h>
#include <math.h>  // for pow()

int main() {
    double principal, rate, time, compoundInterest, amount;
    int n; // number of times interest is compounded per year

    // Input values
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    // Calculate Amount
    amount = principal * pow((1 + (rate / (n * 100))), n * time);

    // Calculate Compound Interest
    compoundInterest = amount - principal;

    // Display results
    printf("\nPrincipal Amount = %.2lf", principal);
    printf("\nTotal Amount after %.2lf years = %.2lf", time, amount);
    printf("\nCompound Interest = %.2lf\n", compoundInterest);

    return 0;
}

