#include <stdio.h>
/*
random credit card admission script thing
*/
int main(){

    int age;

    printf("Enter your age:\t");
    scanf("%d", &age);

    if(age >= 18){
        printf("\nwell i'll be damned, you're old enough to get a credit card or smth");
    }
    else if(age == 0){
        printf("\nmf be patient, you were just born");
    }
    else if(age < 0){
        printf("\ndamn you're already signing up for a credit card before you're born? respect");
    }
    else{
        printf("\nyour dumbass is too young to get a credit card, womp womp!");
    }
    
    return 0;
}