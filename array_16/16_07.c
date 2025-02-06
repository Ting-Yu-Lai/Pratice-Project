#include <stdio.h>
#include <math.h>

int main() {
    int i, n, sum, avg, a[10] = {0}, max;
    for(i = 1; i <= 10; i++){
        scanf("%d", &n);
        max = sum = n;
        if (n > max){
            max = n;
        }
        sum += n;
    }
    avg = sum / 10;
    printf("MAX = %d", max);
    printf("SUM = %d", avg);
    return 0;
}