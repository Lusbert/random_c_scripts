#include <stdio.h>
#include <string.h>

int main(void) {
    char name[25];
    thing:
    printf("Whats your name?\t");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';


    while(strlen(name) == 0) {
        printf("\nYou didn't enter your name\n");
        goto thing;
    }

    printf("\nHello %s!", name);

    return 0;
}

