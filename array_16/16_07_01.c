#include <stdio.h>
#include <math.h>
// Use Array
int main() {
    int i, avg, n[10];
    for(i = 1; i <= 10; i++){
        scanf("%d", &n[i-1]);
    }
    int max = n[0];
    for (i = 1; i < 10; i++){
        if (n[i] > max){
            max = n[i];
        }
    }

    int sum = n[0];
    for (i = 0; i < 10; i++){
        sum += n[i];
    }
    avg = sum / 10;



    printf("Max : %d\t", max);
    printf("Avg : %d", avg);
    return 0;
}