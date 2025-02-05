#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int counter[6] = {0, 0, 0, 0, 0, 0};
    int i;
    for (i = 0; i < 6000; i++) {
        int dice = rand() % 6 + 1;
        counter[dice - 1]++;
    }
    int j;
    for (j = 0; j < 6; j++){
        printf("%d: %d\n", j + 1, counter[j]);
    }
    return 0;
}