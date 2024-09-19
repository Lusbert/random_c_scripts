#include <stdio.h>
#include <string.h>

int main(void) {
    char cars[][10] = {"mustang","Corvette","Camaro"};

    printf("%s\n", cars[0]);

    // cars[0] = "Tesla";
    // doesnt work cause this is C, so we use strcpy
    strcpy(cars[0], "Tesla");

    printf("%s\n", cars[0]);

    return 0;
}

