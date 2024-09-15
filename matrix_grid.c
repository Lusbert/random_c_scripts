#include <stdio.h>

int main(void) {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        };
//    printf("%d", matrix[1][0]);         // [0][0] -> 1 | [1][0] -> 4

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    printf("rows: %d\ncolumns: %d\n", rows, columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}