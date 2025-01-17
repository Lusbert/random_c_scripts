#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double income = 0, tax = 0;
    printf("input the amount of taxable income: ");
    scanf("%lf", &income);
    if (income <= 750.0) tax = 0.01 * income;
    else if (income >= 750.0 && income <= 2250.0) tax = 7.5 + (0.02 * (income - 750.0));
    else if (income >= 2250.0 && income <= 3750.0) tax = 37.50 + (0.03 * (income - 2250.0));
    else if (income >= 3750.0 && income <= 5250.0) tax = 82.50 + (0.04 * (income - 3750.0));
    else if (income >= 5250.0 && income <= 7000.0) tax = 142.5 + (0.05 * (income - 5250.0));
    else if (income > 7000.0) tax = 230.0 + (0.06 * (income - 7000.0));
    printf("Your tax is %.2lf\n", tax);

    return EXIT_SUCCESS;
}
