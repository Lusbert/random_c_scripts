#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TIE (usrHand == 'R' && hand == 0) || (usrHand == 'P' && hand == 1) || (usrHand == 'S' && hand == 2)
#define WIN (usrHand == 'R' && hand == 2) || (usrHand == 'P' && hand == 0) || (usrHand == 'S' && hand == 1)
/*
patterns:
if opp wins , more likely to stay with previous choice
if opp loses, more likely to shift choice by one in a list of [r,p,s]
to win:
if you win
    go to the next one in the list of [r,p,s]
            if you beat with rock, play with paper now
if you lose
    go backwards by one in the list of [r,p,s]
            if you lose with scissors, play with paper now
*/
void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { } // i have no fucking idea what this does
}
void handConv(int *hand) {
    switch (*hand) {
        case 0:
            puts("I did Rock");
            break;
        case 1:
            puts("I did Paper");
            break;
        case 2:
            puts("I did Scissors");
            break;
    }
}
void usrHandConv(char *usrHand) {
    switch (*usrHand) {
        case 'R':
            puts("You did Rock");
            break;
        case 'P':
            puts("You did Paper");
            break;
        case 'S':
            puts("You did Scissors");
            break;
        default:
            fprintf(stderr, "user failed to put correct input (Rock, Paper, Scissors)\n");
            exit(EXIT_FAILURE);
    }
}

int main(void) {
    int score = 0;
    printf("Rock[R], Paper[P] or Scissors[S]?\n"
           "> ");
    do {
        srand(time(NULL));
        int hand = rand() % 3;

        char usrHand;
        scanf("%c", &usrHand);
        clearBuffer();
        usrHand = toupper(usrHand);

        usrHandConv(&usrHand);
        handConv(&hand);
        if (TIE) {
            puts("It's a tie");
        } else if (WIN) {
            puts("You win");
            score++;
            hand = (hand - 1 + 3) % 3; // moves back
            // its disgusting but it gets the job done
        } else {
            puts("You lose");
            score--;
            hand = (hand - 1) % 3; // moves forward
            // spent 10 minutes trying to figure this out, succumbed and asked ChatGPT, it was smth as simple as a `+3`
        }
        printf("Current Score: %d\n" "> ", score);
    } while (score > -3 && score < 3);
    score > 0 ? puts("you deserve a clap") : puts("as expected, I won");

    return EXIT_SUCCESS;
}
