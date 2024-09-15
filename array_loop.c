#include <stdio.h>

int main(void) {
    int prices[] = {5, 10, 15, 25, 20, 30};

    // printf("%lld\n", sizeof(prices));                      // -> 48
    // printf("%lld\n", sizeof(prices) / sizeof(prices[0]));  // -> 6

    for(long long unsigned int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
        printf("$%d\n", prices[i]);
    }

    return 0;
}