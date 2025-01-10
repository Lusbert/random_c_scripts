#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double num;
    printf("Whats the speed of the wind in knots? ");
    scanf("%lf", &num);
    if (num < 1) puts("calm");
    else if (num >= 1 && num <= 3) puts("Light air");
    else if (num >= 4 && num <= 27) puts("Breeze");
    else if (num >= 28 && num <= 47) puts("Gale");
    else if (num >= 48 && num <= 63) puts("Storm");
    else if (num > 63) puts("Hurricane");
    else puts("i have no idea");

    return EXIT_SUCCESS;
}
