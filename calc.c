#include <stdio.h>
/*
calculator only for + - * and /
*/
int main(void) {

    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an Operator [+ - * /]\t");
    scanf("%c", &operator);
// check if the operator typed is valid or not
    switch(operator) {
        case '+':
            break;
        case '-':
            break;
        case '*':
            break;
        case '/':
            break;
        default:
            printf("\n%c is not valid dumbass", operator);
            return 1;
    }

    printf("\nEnter the 1st number:\t\t");
    scanf("%lf", &num1);

    printf("\nEnter the 2nd number:\t\t");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf", result);
            break;

        case '-':
            result = num1 - num2;
            printf("\n%.2lf", result);
            break;

        case '*':
            result = num1 * num2;
            printf("\n%.2lf", result);
            break;

        case '/':
            result = num1 / num2;
            printf("\n%.2lf", result);
            break;
    }
    return 0;
}

