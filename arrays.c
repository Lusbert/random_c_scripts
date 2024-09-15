#include <stdio.h>
/*
example use case of arrays
*/

int main(void) {
    // double price = 5;                    // stores one value, to store multiple we use an array
    double prices[] = {5, 10, 15, 25, 20};

    printf("$%.2lf", prices[0]);            // [0] -> 5

    return 0;
}