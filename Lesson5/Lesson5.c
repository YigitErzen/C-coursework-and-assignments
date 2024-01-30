#include <stdio.h>
#include <stdlib.h>

int main() {
    // Prices in a cinema; Popcorn: 2$, Cola: 2$, Water: 1$, Ticket: 8$
    int popcorncount, cokecount, watercount, ticketcount, totalcost;

    printf("Number of popcorns bought: ");
    scanf("%d", &popcorncount);

    printf("Number of cokes bought: ");
    scanf("%d", &cokecount);

    printf("Number of waters bought: ");
    scanf("%d", &watercount);

    printf("Number of tickets bought: ");
    scanf("%d", &ticketcount);

    totalcost = popcorncount * 2 + cokecount * 2 + ticketcount * 8 + watercount * 1;

    printf("Total cost to be paid: %d $", totalcost);

    return 0;
}

