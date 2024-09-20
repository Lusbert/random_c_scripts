#include <stdio.h>

int main(void) {
    int mode, startRange,endRange,ascii;
    char input;
    printf( "choose a mode\n"
            "    [1] ASCII value to Character\n"
            "    [2] Character to ASCII value\n"
            "    [3] List ASCII Characters with their corresponding values\n");
    scanf("%d", &mode);
    switch(mode) {
        case 1:
            printf("enter an ASCII value: ");
            scanf("%d", &ascii);
            printf("%d in ASCII is %c\n", ascii,ascii);
            break;
        case 2:
            printf("enter a character: ");
            scanf("%c", &input);
            printf("%c is %d in ASCII\n", input,input);
            break;
        case 3:
            printf("what index to start printing ASCII characters from? ");
            scanf("%d", &startRange);
            if (startRange < 33) {
                printf("sorry bud we dont do below 33\njust run `man ascii` for crying out loud\n");
                return 0;
            }
            printf("what index to finish printing ASCII characters on?  ");
            scanf("%d", &endRange);
            for (int i = startRange; i <= endRange; i++)
                printf("%c is %d\n", i,i);
            break;
        default:
            printf("I SAID only 1, 2 or 3\n");
    }
    return 0;
}

