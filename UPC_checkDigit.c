#include <stdio.h>
/*
program to calculate the check digit on those barcode things on stuff you 
examples
    0 51500 24128 ?
    0 31200 01005 ?
the ? is the check digit that this program is supposed to calculate
*/
int main(void) {
    printf("Enter the first (single) digit: ");
    printf("\nEnter first group of five digits: ");
    printf("\nEnter second group of five digits: ");
    printf("\nCheck Digit: ", checkDigit);

    return 0;
}

