#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define GREEN "\033[32m"
#define RED "\033[31m"
#define BLUE "\033[34m"

static int total = 0;

void pause(void) { scanf("%*c"); }

void printTable(int *scoreP1, int *scoreP2) {
    /* clang-format off */
    printf(BOLD BLUE "Player 1" RESET "'s score: " BOLD BLUE "%d" RESET "\n"
           BOLD BLUE "Player 2" RESET "'s score: " BOLD BLUE "%d" RESET,
           *scoreP1, *scoreP2);
    /* clang-format on */
}

int roll(int *total) {
    int rolled = 0;
    /* clang-format off */
    switch (rand() % 6) {
        case 1 : printf("Player rolled the dice and got " GREEN "2" RESET "\n"); *total += 2; rolled = 1; break;
        case 0 : printf("Player rolled the dice and got " GREEN "1" RESET "\n"); *total += 1; rolled = 0; break;
        case 2 : printf("Player rolled the dice and got " GREEN "3" RESET "\n"); *total += 3; rolled = 2; break;
        case 3 : printf("Player rolled the dice and got " GREEN "4" RESET "\n"); *total += 4; rolled = 3; break;
        case 4 : printf("Player rolled the dice and got " GREEN "5" RESET "\n"); *total += 5; rolled = 4; break;
        case 5 : printf("Player rolled the dice and got " GREEN "6" RESET "\n"); *total += 6; rolled = 5; break;
    }
    /* clang-format on */
    return rolled;
}

int rollDice(void) {
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    srand(ts.tv_nsec);

    int rolled1 = roll(&total);
    int rolled2 = roll(&total);

    if (rolled1 == rolled2) {
        printf("its a " BOLD GREEN "double!" RESET "\nthey get to play again\n");
        roll(&total);
    }

    return total;
}

void doRound(int *score, int *lossCheck) {
    *score = rollDice();
    printf("Their score is " BLUE "%d" RESET "\n", *score);
    if (*score % 2 == 0) {
        printf("Player's got an " BOLD GREEN "even score!" RESET "\n" BOLD GREEN "Adding 10!" RESET "\n");
        *score += 10;
    } else {
        printf("Player's got an " BOLD RED "odd score..." RESET "\n" BOLD RED "Removing 5..." RESET "\n");
        *score -= 5;
    }
    if (*score < 0) {
        printf("Player got to a " BOLD RED "negative score!" RESET "\n"
               "They have " BOLD RED "lost" RESET "\n"
               "Their score was" BOLD RED " %d" RESET "\n",
               *score);
        *lossCheck = 1;
    }
    if (*lossCheck != 1) printf("Their score is now " BLUE "%d" RESET "\n", *score);
}

void game(int *lossCheck, int *scoreP1, int *scoreP2, int *i) {
    if (*i != 127) { printf(BOLD RED ">Round %d" RESET, *i + 1); }

    printf("\n" BOLD BLUE "Player 1" RESET " is playing, with a current score of " BOLD BLUE "%d" RESET "\n\n",
           *scoreP1);
    doRound(&*scoreP1, &*lossCheck);
    if (*lossCheck == 1) {
        printf("\n" BOLD RED "Player 1" RESET " has lost\n");
        exit(EXIT_FAILURE);
    }
    pause();

    printf("\n" BOLD BLUE "Player 2" RESET " is playing, with a current score of " BOLD BLUE "%d" RESET "\n\n",
           *scoreP2);
    doRound(&*scoreP2, &*lossCheck);
    if (*lossCheck == 1) {
        printf("\n" BOLD RED "Player 2" RESET " has lost\n");
        exit(EXIT_FAILURE);
    }
    pause();
}

int main(void) {
    printf(RED "      ___                       ___           ___      \n"
               "     /\\  \\          ___        /\\  \\         /\\  \\     \n"
               "    /::\\  \\        /\\  \\      /::\\  \\       /::\\  \\    \n"
               "   /:/\\:\\  \\       \\:\\  \\    /:/\\:\\  \\     /:/\\:\\  \\   \n"
               "  /:/  \\:\\__\\      /::\\__\\  /:/  \\:\\  \\   /::\\~\\:\\  \\  \n"
               " /:/__/ \\:|__|  __/:/\\/__/ /:/__/ \\:\\__\\ /:/\\:\\ \\:\\__\\ \n"
               " \\:\\  \\ /:/  / /\\/:/  /    \\:\\  \\  \\/__/ \\:\\~\\:\\ \\/__/ \n"
               "  \\:\\  /:/  /  \\::/__/      \\:\\  \\        \\:\\ \\:\\__\\   \n"
               "   \\:\\/:/  /    \\:\\__\\       \\:\\  \\        \\:\\ \\/__/   \n"
               "    \\::/__/      \\/__/        \\:\\__\\        \\:\\__\\     \n"
               "     ~~                        \\/__/         \\/__/     \n" RESET);
    int lossCheck, scoreP1 = 0, scoreP2 = 0;

    for (int i = 0; i <= 4; i++) {
        game(&lossCheck, &scoreP1, &scoreP2, &i);
    }

checkScore:
    if (scoreP1 > scoreP2) {
        printTable(&scoreP1, &scoreP2);
        printf("\n" BOLD BLUE "Player 1" RESET " has won!\n");
    } else if (scoreP1 < scoreP2) {
        printTable(&scoreP1, &scoreP2);
        printf("\n" BOLD BLUE "Player 2" RESET " has won!\n");
    } else {
        printTable(&scoreP1, &scoreP2);
        printf("\nIt's a " BOLD BLUE "match!" RESET " we'll roll again until someone " BOLD GREEN "wins" RESET "\n");
        while (scoreP1 == scoreP2) {
            int i = 127;
            game(&lossCheck, &scoreP1, &scoreP2, &i);
        }
        goto checkScore;
    }

    return EXIT_SUCCESS;
}
