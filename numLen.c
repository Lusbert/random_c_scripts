#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num = 152;
    printf("%d\n", (int)floor(log10(abs(num))) + 1);

    return EXIT_SUCCESS;
}
