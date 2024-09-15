#include <stdio.h>
#include <ctype.h>

void clear_scanf(void) {
    int c;
    while ( (c = getchar()) != '\n' && c != EOF ) { }   // i have no fucking idea what this does
}

int main(void) {
    char u_input;
    int score = 0;
    int failed;

    do {
        printf("Rock[R], Paper[P] or Scissors[S]?\n");
        printf(">");
        scanf("%c", &u_input);
        u_input = toupper(u_input);
        failed = 0;

        switch(u_input) {
            case 'R':
                printf("I do Paper, i win\n\n");
                clear_scanf();
                break;
            case 'P':
                printf("I do Scissors, i win\n\n");
                clear_scanf();
                break;
            case 'S':
                printf("I do Rock, i win\n\n");
                clear_scanf();
                break;
            default:
                printf("only input R, P or S\n\n");
                failed = 1;
                break;
        }

        if (failed == 0) {
            score++;
        }
        else {}
    }
    while(score < 3);

    printf("\nhaha yes, i finally won the rigged game of RPS\n");

    return 0;
}