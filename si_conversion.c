#include <stdio.h>
#include <ctype.h>

/*
SI conversion supports:
    C/F to Kelvin
    g/ounce/lbs to kilogram
    h/min to second
    mile/yard/foot/inch to meter

gave up cause switches cant do strings so i just couldnt add more and i was too lazy to use if else if ladders
it'd prob be way slower as well cause its so many stuff, i could have it be categorized but ye no, not doing that
*/

int main(void) {
    char unit;
    float value;

    printf("(warning, because of freedom units, some of those are an estimate and not exact)");
    printf("What unit is the input?\nCelsius[C] Fahrenheit[F]\nGram[G] Pound[P] Ounce[O]\nHour[H] Minute[M]\nMile[I] Yard[Y] Foot[T] Inch[N] ");

    scanf("%c", &unit);
    unit = toupper(unit);

    switch(unit) {
    case 'C':
        printf("Input the value ");
        scanf("%f", &value);

        value = value + 273.15;
        printf("\nCelsius to Kelvin -> %.2f", value);
        break;

    case 'F':
        printf("Input the value ");
        scanf("%f", &value);

        value = (value - 32) * 5/9 + 273.15;
        printf("\nFahrenheit to Kelvin -> %.2f", value);
        break;

    case 'G':
        printf("Input the value ");
        scanf("%f", &value);

        value = value / 1000;
        printf("\nGram to Kilogram -> %.2f", value);
        break;

    case 'P':
        printf("Input the value ");
        scanf("%f", &value);

        value = value / 2.205;
        printf("\nPound to Kilogram -> %.2f", value);
        break;

    case 'O':
        printf("Input the value ");
        scanf("%f", &value);

        value = value / 35.274;
        printf("\nOunce to Kilogram -> %.2f", value);
        break;

    case 'H':
        printf("Input the value ");
        scanf("%f", &value);

        value = value * 3600;
        printf("\nHour to Second -> %.2f", value);
        break;

    case 'M':
        printf("Input the value ");
        scanf("%f", &value);

        value = value * 60;
        printf("\nMinute to Second -> %.2f", value);
        break;

    case 'I':
        printf("Input the value ");
        scanf("%f", &value);

        value = value * 1609;
        printf("\nMile to Meter -> %.2f", value);
        break;

    case 'Y':
        printf("Input the value ");
        scanf("%f", &value);

        value = value / 1.094;
        printf("\nYard to Meter -> %.2f", value);
        break;

    case 'T':
        printf("Input the value ");
        scanf("%f", &value);

        value = value / 3.281;
        printf("\nFoot to Meter -> %.2f", value);
        break;

    case 'N':
        printf("Input the value ");
        scanf("%f", &value);

        value = value / 39.37;
        printf("\nInch to Meter -> %.2f", value);
        break;

    default:
        printf("\nonly use units that are in [ ]");
        break;
    }

    return 0;
}

