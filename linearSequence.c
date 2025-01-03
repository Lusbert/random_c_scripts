#include <stdio.h>
#include <stdlib.h>

#define DIFF1 seq[1] - seq[0]
#define DIFF2 seq[2] - seq[1]
#define SHIFT seq[0] - (diff * 1)
// example
//   3n-1
//-> 2, 5, 8, 11, 14...

int main(void) {
    int seq[3];
    printf("input your sequence\n"
           "     seperated by , > ");
    scanf("%d, %d, %d", &seq[0], &seq[1], &seq[2]);
    int diff = 0;
    if ((DIFF1) == (DIFF2)) {
        diff = (DIFF1);
    }
    if ( ((diff*1) + (SHIFT)) == seq[0] && (((diff*2) + (SHIFT))) == seq[0]) {
        fprintf(stderr, "Impossible Sequence\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 1; i <= 10; i++) {
        if (i == 10) {
            printf("%d...\n", (diff * i) + (SHIFT));
        } else {
            printf("%d, ", (diff * i) + (SHIFT));
        }
    }
    return EXIT_SUCCESS;
}
