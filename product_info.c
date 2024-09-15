#include <stdio.h>
/*
i have no idea what structs are but i think i can remake this later on when i learn structs
cause yk like instea of doing y m and d, i can just have a structure kinda thing that holds the date for me right?
or is that not how it works wkldajwdahw
*/
int main(void) {
    int itmNum;
    double unitPrice;
    int y,m,d;
    printf("Enter product number: ");
    scanf("%d", &itmNum);
    printf("\nEnter unit price: ");
    scanf("%lf", &unitPrice);
    printf("\nEnter purchase date (yyyy/mm/dd): ");
    scanf("%d/%d/%d",&y,&m,&d);
    printf(
        "\n\n"
        "Item        Unit Price        Purchase Date\n"
        "%d          $%.2lf            %04d/%02d/%02d", itmNum, unitPrice, y,d,m
    );

    return 0;
}