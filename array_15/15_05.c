#include <stdio.h>

int main() {
    int prices[5] = {90, 75, 83, 89, 71};
    int total = 0, id;
    do {
        scanf("%d", &id);
        total += prices[id - 1];
    } while (id != 0);
    printf("%d", total);
    return 0;
}