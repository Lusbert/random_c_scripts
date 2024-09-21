#include <stdio.h>
/*
program to calculate the check digit on those barcode things on stuff you 
examples
    0 13800 15173  5    UPC
    0 51500 24128  ?
    4 003994 15548 6    EAN
    8 691484 26000 ?
the ? is the check digit that this program is supposed to calculate
*/
void us(void) {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
    int sum = (3 * (n1+n3+n5+n7+n9+n11)) + (n2+n4+n6+n8+n10);
    int checkDigit = 9 - ((sum-1)%10);
    printf("Check Digit: %d\n", checkDigit);    
}
void eu(void) {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11,&n12);
    int sum = (3 * (n2+n4+n6+n8+n10+n12)) + (n1+n3+n5+n7+n9+n11);
    int checkDigit = 9 - ((sum-1)%10);
    printf("Check Digit: %d\n", checkDigit);
}
int main(void) {
    int mode;
    printf("[1] EAN or [2] UPC?\n    EAN is for EU and UPC is for other countries (i think, idk, google it) ");
    scanf("%d",&mode);
    switch(mode) {
        case 1:
            eu();
            break;
        case 2:
            us();
            break;
        default:
            printf("only 1 or 2!!\n");
            break;
    }
    return 0;
}

