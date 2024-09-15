#include <stdio.h>
#include <ctype.h>
/*
conversion of Celsius and Fahrenheit
*/
int main(){

    char unit;
    float temp;

    printf("Freedom units or sane units?\t");
    scanf("%c", &unit);
    unit = toupper(unit);                       // change to upper case if the user types lower case

    switch(unit){
        case 'C':
            printf("\nenter your temp in C:\t");
            scanf("%f", &temp);

            temp = (temp * 9 / 5) + 32;         // formula for converting Celsius to Fahrenheit
            printf("temp in F is\t%.1f", temp);

            break;

        case 'F':
            printf("\nenter your temp in F:\t");
            scanf("%f", &temp);

            temp = ((temp - 32) * 5) / 9;       // formula for converting Fahrenheit to Celsius
            printf("temp in C is\t%.1f", temp);

            break;
        default:
            printf("\nwtf is your unit? kelvin or smth?!");
    }



    return 0;
}