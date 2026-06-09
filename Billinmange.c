#include <stdio.h>

int main()
{
    char name[50];
    int consumerNo, units;
    float bill = 0;

    printf("===== ELECTRICITY BILL SYSTEM =====\n");

    printf("Enter Consumer Name: ");
    scanf("%s", name);

    printf("Enter Consumer Number: ");
    scanf("%d", &consumerNo);

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = (100 * 1.5) + (units - 100) * 2.5;
    else if (units <= 300)
        bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4;
    else
        bill = (100 * 1.5) + (100 * 2.5) + (100 * 4) + (units - 300) * 6;

    printf("\n===== BILL RECEIPT =====\n");
    printf("Consumer Name   : %s\n", name);
    printf("Consumer Number : %d\n", consumerNo);
    printf("Units Consumed  : %d\n", units);
    printf("Bill Amount     : Rs. %.2f\n", bill);

    if (bill > 1000)
        printf("Status          : High Consumption\n");
    else
        printf("Status          : Normal Consumption\n");

    printf("\nThank You!\n");

    return 0;
}
