#include <stdio.h>

int main(void) {
    int mode;
    int n;

    printf("\nODD[1] EVEN[2]\t");
    scanf("%d", &mode);

    if(!(mode == 1 || mode == 2)) {
        printf("\ndumbass, put 1 or 2\n");
        return 1;
    }

    printf("what will N be?\t");
    scanf("%d", &n);

    if(mode == 1) {                 // odd
        int result = (2 * n) - 1;
        printf("%d", result);
    }
    else if(mode == 2) {            // even
        int result = 2 * n;
        printf("%d", result);
    }

    return 0;
}

