#include <stdio.h>
#include <stdlib.h>

#define DATE "%.2d/%d/%d is earlier than %.2d/%d/%d\n"
#define YEAR1 y1, m1, d1
#define YEAR2 y2, m2, d2

int main(void) {
    int y1, m1, d1, y2, m2, d2;
    printf("Enter the first date (yy/mm/dd): ");
    scanf("%d/%d/%d", &y1, &m1, &d1);
    printf("Enter the second date (yy/mm/dd): ");
    scanf("%d/%d/%d", &y2, &m2, &d2);
    if (y1 > y2) {
        printf(DATE, YEAR2, YEAR1);
    } else if (y1 < y2) {
        printf(DATE, YEAR1, YEAR2);
    } else {
        if (m1 > m2) {
            printf(DATE, YEAR2, YEAR1);
        } else if (m1 < m2) {
            printf(DATE, YEAR2, YEAR1);
        } else {
            if (d1 > d2) {
                printf(DATE, YEAR2, YEAR1);
            } else if (d1 < d2) {
                printf(DATE, YEAR2, YEAR1);
            } else {
                fprintf(stderr, "They're both the same date\n");
                exit(EXIT_FAILURE);
            }
        }
    }
    return EXIT_SUCCESS;
}
