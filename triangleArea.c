#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double triArea(double *base, double *height) {
    return (*base * *height)/2;
}
double triAreaGamma(double *line_a, double *line_b, double *gamma) {        // i have no idea if this works or not, cause idk gamma and shit
    return (1/2) * *line_a * *line_b * (sin( (PI * *gamma) / 180 ));        // i would test it but idk what to input and google doesnt help
}
double triAreaHeron(double *A, double *B, double *C) {
	double tmp = (*A + *B + *C) / 2;
	return sqrt( tmp * (tmp - *A) * (tmp - *B) * (tmp - *C) );
}

int main(void) {
    double base,height,line_a,line_b,gamma,A,B,C;
    int mode;
    printf( "[1] Area of Triangle Normal\n"
            "[2] Area of Triangle Gamma\n"
            "[3] Area of Triangle Heron\n"
            "[0] Exit\n");
    scanf("%d", &mode);
    switch(mode) {
    case 1:
        printf("whats the base? ");
        scanf("%lf",&base);
        printf("\nwhats the height? ");
        scanf("%lf",&height);
        printf("%lf", triArea(&base, &height));
        break;
    case 2:
        printf("whats the Side A? ");
        scanf("%lf", &line_a);
        printf("\nwhats the Side B? ");
        scanf("%lf", &line_b);
        printf("\nwhats the Gamma? ");
        scanf("%lf", &gamma);
        printf("%lf", triAreaGamma(&line_a, &line_b, &gamma));
        break;
    case 3:
        printf("whats the Side A? ");
        scanf("%lf", &A);
        printf("\nwhats the Side B? ");
        scanf("%lf", &B);
        printf("\nwhats the Side C? ");
        scanf("%lf", &C);
        printf("%lf", triAreaHeron(&A, &B, &C));
        break;
    case 0:
        printf("\nwhy did you even open this if you wanted to close it?!");
        return 0;
    default:
        printf("\nonly 1, 2 or 0");
        break;
    }
    return 0;
}