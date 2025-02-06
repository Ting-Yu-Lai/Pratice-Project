#include <stdio.h>

int main() {
    //計算1+2+3+...+100
    // int count = 0,sum = 0;
    // for (count = 1; count <= 100; count += 1){
    //     sum += count;
    // }
    // printf("sum = %d\n", sum);
    int count = 0,N = 0, sum = 0;
    printf("請輸入一個數字:");
    scanf("%d", &N);

    for (count = 1; count <= N; count += 1){
        sum += count;
    }
    printf("總和 = %d\n", sum);
    return 0;
}