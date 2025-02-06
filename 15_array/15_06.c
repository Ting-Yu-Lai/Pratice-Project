#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int counter[11] = {0}; //最大是10 最小是0 代表2-12
    for (int i = 0; i < 100000; i++){
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;
        counter[sum - 2]++;
    }
    for (int i = 2; i <= 12; i++){
        printf("%d: %d\n", i, counter[i - 2]);
    }
    return 0;
}