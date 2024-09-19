#include <stdio.h>
/*
UPC example
0 13800 15173 5
thing that checks if the code is valid or not, using the checkDigit
*/
int main(void) {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11, checkDigit;
    printf("Enter the first (single) digit: ");
    scanf("%1d", &n1);
    printf("Enter first group of five digits:  ");
    scanf("%1d%1d%1d%1d%1d", &n2,&n3,&n4,&n5,&n6);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &n7,&n8,&n9,&n10,&n11);
    printf("Enter the check digit: ");
    scanf("%1d", &checkDigit);
    int checkDigitEval = 9 - (((3 * (n1+n3+n5+n7+n9+n11)) + (n2+n4+n6+n8+n10))-1)%10;
    if (checkDigit == checkDigitEval) printf("\nyour UPC bar code is correct\n");
    else printf("\nyour UPC bar code is not correct\ncalculated value for check digit was %d\n", checkDigitEval);
    return 0;
}

