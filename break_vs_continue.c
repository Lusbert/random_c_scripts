#include <stdio.h>
/*
print every number from 1 to 20
*/
int main(void) {
    for(int i = 1; i <= 20; i++) {
        if(i == 13) {
            continue;           // doesnt print 13
                                // if it was break it would exit out of the loop.
        }
        printf("%d\n", i);
    }
    return 0;
}