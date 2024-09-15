#include <stdio.h>

int main(void) {
    int mode;
    int num;

    printf("[1]sum [2]each\t");
    scanf("%d", &mode);
    
    if(!(mode == 1 || mode == 2)) {
        printf("\ndumbass, put 1 or 2\n");
        return 1;
    }

    /*
    used to be
    ```
    if(mode == 1 || mode == 2) {}
    else {
        printf("\ndumbass, put 1 or 2");
        return 1;
    }
    ```
    basically was trying to go
    "hey if its 1 or 2 dont bother, else stop them"

    the `!(mode == 1 || mode == 2)` allowed me to not use `else{}`
    or i could've used `(mode != 1 || mode != 2)`
    this just returns False if its not 1 or 2 which tells the if statement to skip it self
    so the `!(stuff)` was basically the same but just shorter
    like if `mode == 1 || mode == 2` returned True, which would have the if statement continue
    the NOT aka the ! would make it become False which would in turn have the If statement not run, and hence let us continue running
    */

    printf("\nHow many sides does the polygon have?\t");    
    scanf("%d", &num);

    if(mode == 1) {
        double result = (num - 2) * 180;
        printf("\n%.2lf\n", result);
    }
    else if(mode == 2) {
        double result = ((num - 2) * 180) / num;
        printf("\n%.2lf\n", result);
    }

    return 0;
}