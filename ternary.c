#include <stdio.h>
/*
show casing ternary
(condition) ? [value] `if true` : [value] `if false`
*/

int findMax(int x, int y) {
    /*
        if(x > y) {
        return x;
    }
    else {
        return y;
    }
    */
    return (x > y) ? x : y;     // basically if `x > y` return x and if false return y
}

int main(void) {
    int max = findMax(3, 4);
    printf("%d", max);

    return 0;
}

