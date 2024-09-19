#include <stdio.h>
/*
check if a given temprature falls within a range
*/
int main(void) {

    float temp;                                     // using celsius

    printf("What's the temprature (Celsius)?\t");
    scanf("%f", &temp);

    if(temp >= 19 && temp <= 32) {                  // check if temprature is withing range of 19-32
        printf("\nthe weather isnt cooking you!");
    }
    else if(temp < 19) {
        printf("\nare you in a freezer or smth?");
    }
    else {
        printf("\nYou're genuinely being cooked alive");
    }
    return 0;
}

