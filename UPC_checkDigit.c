#include <stdio.h>
/*
program to calculate the check digit on those barcode things on stuff you 
examples
    0 13800 15173 5
    0 51500 24128 ?
the ? is the check digit that this program is supposed to calculate
*/
int main(void) {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
    int sum = (3 * (n1+n3+n5+n7+n9+n11)) + (n2+n4+n6+n8+n10);
    int checkDigit = 9 - ((sum-1)%10);
    printf("Check Digit: %d\n", checkDigit);
    return 0;
}

