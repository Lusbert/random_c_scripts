#include <stdio.h>
/*
i have no idea what structs are but i think i can remake this later on when i
learn structs cause yk like instea of doing y m and d, i can just have a
structure kinda thing that holds the date for me right? or is that not how it
works wkldajwdahw
*/
int main(void) {
    int itmNum, y, m, d;
    double price;
    printf("Enter item number: ");
    scanf("%d", &itmNum);
    printf("Enter unit price: ");
    scanf("%lf", &price);
    printf("Enter purchase date (yyyy/mm/dd): ");
    scanf("%d/%d/%d", &y, &m, &d);

    printf("\nItem#        Unit Price        Purchase Date\n"
           "%3d           %.2lf             %4d/%.2d/%.2d\n",
           itmNum, price, y, m, d);

    return 0;
}
