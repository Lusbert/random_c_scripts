#include <stdio.h>
// idk i call this the magic number
// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
int main(void) {
    /*visualization or smth
    x1  x2  x3  x4
    x5  x6  x7  x8
    x9  x10 x11 x12
    x13 x14 x15 x16
    */
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;
    printf("Enter numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10,&x11,&x12,&x13,&x14,&x15,&x16);
    int row1= x1  + x2  + x3  + x4;
    int row2= x5  + x6  + x7  + x8;
    int row3= x9  + x10 + x11 + x12;
    int row4= x13 + x14 + x15 + x16;
    int column1= x1 + x5 + x9  + x13;
    int column2= x2 + x6 + x10 + x14;
    int column3= x3 + x7 + x11 + x15;
    int column4= x4 + x8 + x12 + x16;
    int diag1= x1  + x6  + x11 + x16;
    int diag2= x13 + x10 + x7  + x4;
    printf("\n%2d %2d %2d %2d\n"
             "%2d %2d %2d %2d\n"
             "%2d %2d %2d %2d\n"
             "%2d %2d %2d %2d\n\n",x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16);
    printf("Row sums:       %d %d %d %d\n"
           "Column sums:    %d %d %d %d\n"
           "Diagonal sums:  %d %d\n", row1,row2,row3,row4, column1,column2,column3,column4, diag1,diag2);

    return 0;
}

