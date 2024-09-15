#include <stdio.h>

int main(void) {
    int rows;
    int columns;
    char symbol;

    printf("Enter numbers of rows:\t\t");
    scanf("%d", &rows);

    printf("\nEnter numbers of columns:\t");
    scanf("%d", &columns);

    int c;
    while ( (c = getchar()) != '\n' && c != EOF ) { }
    // could've done another scanf() to have it skip that but i didnt see anyone recommend that so ig its even more "unsafe"

    printf("Enter a symbol to use:\t\t");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++) {

        for(int j = 1; j <= columns; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}