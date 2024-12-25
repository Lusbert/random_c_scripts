#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n[3] = {11, 5, 1};
    int isPossible = 0;

    for (int i = 0; i <= 2; i++) {
        printf("%d < %d + %d ", n[i], n[(i+1)%3], n[(i+2)%3]);
        if (n[i] < (n[(i+1)%3] + n[(i+2)%3])) printf("correct\n");
        else {
            printf("false\n");
            isPossible = 1;
        }
    }
    switch (isPossible) {
        case 0:
            printf("\n\nThis triangle is possible\n");
            break;
        case 1:
            printf("\n\nThis triangle is not possible\n");
            break;
    }

    return EXIT_SUCCESS;
}