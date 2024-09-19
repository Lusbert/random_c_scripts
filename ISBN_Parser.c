#include <stdio.h>
// Example ISBN 978-0-593-15813-5
int main(void) {
    int GS1,GroupID,PubCode,ItmNum,CheckDigit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1,&GroupID,&PubCode,&ItmNum,&CheckDigit);
    printf("\nGS1 prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\nItem number: %d\nCheck Digit: %d\n", GS1,GroupID,PubCode,ItmNum,CheckDigit);

    return 0;
}

