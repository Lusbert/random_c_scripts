#include <stdio.h>

int main(void) {
    int num = 0;
    int sum = 0;

    do {
        printf("enter a number above 0.\t");
        scanf("%d", &num);
        if(num > 0) {
            sum = sum + num;
        }
    }
    while(num > 0);

    printf("\nsum:\t%d", sum);

    return 0;
}

