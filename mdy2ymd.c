#include <stdio.h>

int main(void) {
    int m,d,y;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m,&d,&y);
    printf("now in yyyy/mm/dd: %04d/%02d/%02d", y,m,d);

    /*
    ok so for example, if `x = 2`, and i want it to be returned as a 02, i can just use %02d
    like field size of 2, and if its not all numbers, fill the rest with 0s
    so like for the year, %04d, when x=145, instead of it returning just a normal 145, it'll return `0145`
    idk its just cool
    */

    return 0;
}

