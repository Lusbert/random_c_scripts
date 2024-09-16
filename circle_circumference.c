#include <stdio.h>
/*
get the circumference of a circle
*/
int main(){


    const double PI = 3.14159265358979;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of a circle:\t");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;        // formula for the circumference
    area = PI * radius * radius;            // formula for the area
    printf("\nCircumference:\t%lf\n", circumference);
    printf("Area:\t\t%lf", area);
    return 0;
}

