#include <stdio.h>
#include <string.h> // will be used to get rid of the new line character that fgets() function adds by default
/*
random script for getting user input
*/
int main(){

    char name[25];
    printf("What's your name?\t");

    // scanf("%s", &name); 
    // used to get input from the user, in this case its a string
    // doenst work with white spaces in input.

    fgets(name, 25, stdin);         // can read white spaces
    name[strlen(name)-1] = '\0';    // \0 being a null character, which means the end of a string


    int age;
    printf("how old are you?\t");
    scanf("%d", &age);              // used for getting input from user, in this case its an integer

    printf("your name is %s.\n\n", name);
    printf("You are %d years old.", age);

    return 0;
}

