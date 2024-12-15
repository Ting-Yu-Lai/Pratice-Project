#include <stdio.h>

int main()
{
    int customers, total = 0;

    printf("Please enter the number of customers :");
    scanf("%d", &customers);

    if (customers >= 10) {
        total = customers * 300 * 0.8;
        printf("Total = %d", total);
    } else {
        total = customers * 300;
        printf("Total = %d", total);
    }
}
