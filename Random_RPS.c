#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
void clear_scanf(void) {
    int c;
    while ( (c = getchar()) != '\n' && c != EOF ) { }   // i have no fucking idea what this does
}
void RPS_rand(int bleh, int *hand) {
    if (bleh == 0){
        printf("\nI did Rock");
        *hand = 0;
    }
    else if (bleh == 1) {
        printf("\nI did Paper");
        *hand = 1;
    }
    else {
        printf("\nI did Scissors");
        *hand = 2;
    }
}
void U_RPS(char input, int *hand) {
    switch(input) {
        case 'R':
            printf("\nYou did Rock");
            *hand = 0;
            break;
        case 'P':
            printf("\nYou did Paper");
            *hand = 1;
            break;
        case 'S':
            printf("\nYou did Scissors");
            *hand = 2;
            break;
        default:
            printf("\nonly input R, P or S");
            exit(1);
    }
}
/*
| R | P | S |
| 0 | 1 | 2 |

possible RPS outcomes:
	Y M || (Y)ou (M)achine
Tie
	0 0
	1 1
	2 2
Win
	0 2
	1 0
	2 1
Lose
	0 1
	1 2
	2 1
*/
int main(void) {
    char u_input;
    int RPS_hand;
    int U_hand = 0;
    int score = 0;
    do {
        // get input
        printf("\nRock[R], Paper[P] or Scissors[S]?\n");
        printf(">");
        scanf("%c", &u_input);
        clear_scanf();
        u_input = toupper(u_input);

        U_RPS(u_input, &U_hand);
        // randomize the RPS
        struct timespec ts;
        timespec_get(&ts, TIME_UTC);
        srand(ts.tv_nsec);
        RPS_rand(rand() % 3, &RPS_hand);
        // check if its a Tie, Win or Lose
        if (U_hand == RPS_hand) {
            printf("\nIt's a tie\n");
        }
        else if ((U_hand == 0 && RPS_hand == 2) || (U_hand == 1 && RPS_hand == 0) || (U_hand == 2 && RPS_hand == 1)) {
            printf("\nYou won\n");
            score++;
            printf("current score: %d\n", score);
        }
        else {
            printf("\nYou lost\n");
            score--;
            printf("current score: %d\n", score);
        }
        // printf("\n\nU_hand: %d \nRPS_hand: %d\n", U_hand, RPS_hand);
        // literally just used this to see what the variables are so that i can make sure its working
    }
    while(score > -3 && score < 3);
    if (score > 0) {
        printf("\ndamn, luck was LITERALLY on your side\n");
    }
    else {
        printf("\nig it's your unlucky day today.\n");
    }
    return 0;
}

