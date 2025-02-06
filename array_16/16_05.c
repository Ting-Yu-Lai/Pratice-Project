#include <stdio.h>
#include <math.h>

int main() {
    int i, j, n, input[10] = {0};
    for (i = 1; i <= 10; i++){
        scanf("%d", &n);
        input[(n-1)/10]++;//怎麼樣在哪個節點計數
    }
    for (i = 1; i <= 10; i++){
        printf("%3d :", i * 10);
        for (j = 1; j <= input[i-1]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}