#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("\nask your question\n");
    scanf("%*c");                       // so this doesnt require me to store it to any value,
                                        // basically lets me have the user type anything without me having to store it
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    srand(ts.tv_nsec);
    int rand_num = rand() % 20;

    switch(rand_num) {
    case 0:
        printf("\nIt is certain\n");
        break;
    case 1:
        printf("\nIt is decidedly so\n");
        break;
    case 2:
        printf("\nWithout a doubt\n");
        break;
    case 3:
        printf("\nYes definitely\n");
        break;
    case 4:
        printf("\nYou may rely on it\n");
        break;
    case 5:
        printf("\nAs I see it, yes\n");
        break;
    case 6:
        printf("\nMost likely\n");
        break;
    case 7:
        printf("\nOutlook good\n");
        break;
    case 8:
        printf("\nYes\n");
        break;
    case 9:
        printf("\nSigns point to yes\n");
        break;
    case 10:
        printf("\nReply hazy, try again\n");
        break;
    case 11:
        printf("\nAsk again later\n");
        break;
    case 12:
        printf("\nBetter not tell you now\n");
        break;
    case 13:
        printf("\nCannot predict now\n");
        break;
    case 14:
        printf("\nConcentrate and ask again\n");
        break;
    case 15:
        printf("\nDon't count on it\n");
        break;
    case 16:
        printf("\nMy reply is no\n");
        break;
    case 17:
        printf("\nMy sources say no\n");
        break;
    case 18:
        printf("\nOutlook not so good\n");
        break;
    case 19:
        printf("\nVery doubtful\n");
        break;
    }

    return 0;
}

