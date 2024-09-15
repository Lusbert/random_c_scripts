#include <stdio.h>
/*
example for this useless script
2*3 would be 2+2+2
so ye this just does that
*/
int main(void) {
    int num1;
    int num2;

    printf("\nEnter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);
    printf("\n");

    for (int i = 0; i < num2; i++) {

        if (i < num2-1){
            printf("%d + ", num1);
        }
        else if (i == num2-1){
            printf("%d", num1);
        }

    }

    return 0;
}