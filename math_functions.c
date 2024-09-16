#include <stdio.h>
#include <math.h>
/*
random math functions
*/
int main(){

    double A = sqrt(9);     // -> 3         same as square root of 9
    double B = pow(2,4);    // -> 16        same as 2**4
    int C = round(3.14);    // -> 3         rounds the number duh, basically 2.3 rounds to and 2.5 rounds to 3 when using round()
    int D = ceil(3.14);     // -> 4         rounds it up
    int E = floor(3.99);    // -> 3         always round it down
    double F = fabs(-100);  // -> 100       find absoloute value of a number (how far away it is from 0 (so it will take any negative numbers and make them positive))
    double G = log(3);      // -> 1.098612  gets the log of a number
    double H = sin(45);     // -> 0.850904  its in the name, its sine
    double I = cos(45);     // -> 0.525322  again, its cosine
    double J = tan(45);     // -> 1.619775  wowy its tangnet

    printf("%lf", J);

    return 0;
}

