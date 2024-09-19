#include <stdio.h>
/*
script for squaring a number
*/
double square(double x) {
    return x * x;
}

int main(void) {
    double num;
    printf("what number to square?\t");
    scanf("\n%lf", &num);
    num = square(num);
    printf("%lf", num);

    return 0;
}

