#include <stdio.h>
#include <stdlib.h>

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"

int main(void) {
    int cmd;
    double balance = 0.0, credit, debit;
    /* Print introduction message */
    printf(BOLD RED "*** ACME checkbook-balancing program ***" RESET "\n"
                    "Commands: 0: [CLEAR], 1: [CREDIT], 2: [DEBIT], 3: [BALANCE], 4: [EXIT]\n\n");

    for (;;) {
        printf("Enter a command: ");
        scanf("%d", &cmd);
        switch (cmd) {
            case 0:
                balance = 0.0;
                break;
            case 1:
                printf("Enter the amount of credit: ");
                scanf("%lf", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter the amount of debit: ");
                scanf("%lf", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current balance is $%.2lf\n", balance);
                break;
            case 4:
                return EXIT_SUCCESS;
            default:
                fprintf(stderr, "Error, unknown command");
                printf("Commands: 0: Clear, 1: credit, 2: debit, 3: balance, 4: exit\n");
                break;
        }
    }

    return EXIT_FAILURE;
}
