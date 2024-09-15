#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/*
a thing to mess around with generating rands
want to make coin flip
*/

int main(void) {
//    srand(1337);              // always returns 4404
//    srand(time(NULL));        // uses seconds | its random but if you run it within one second it returns the same thing

    struct timespec ts;         // uses nanoseconds, way better than seconds
    timespec_get(&ts, TIME_UTC);
    srand(ts.tv_nsec);

    int rand_num = rand();
//    printf("generated random number:\t%d\n", rand_num);   // idfk if you wanna debug, here

    if((rand_num % 2) == 1) {
        printf("It's Heads\n");
        //printf("i would put an ASCII art here but idfk how to have C not hate that and force me into spamming /n and \ all over the place");
    }
    else {
        printf("It's Tails\n");
        //printf("what the hell am i supposed to use");

    }

    return 0;
}