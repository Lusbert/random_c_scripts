#include <stdio.h>
#include <math.h>
/*
hypotenuse of a triangle
*/
int main(){

    double legA;
    double legB;
    printf("enter leg A's value\t");
    scanf("%lf",&legA);

    printf("enter leg B's value\t");
    scanf("%lf",&legB);

    double hypo1 = legA * legA;
    double hypo2 = legB * legB;

    double hypo = sqrt(hypo1) + sqrt(hypo2);    // formula for hypotenuse of a triangle
	
	printf("%.1lf", hypo);

    return 0;
}