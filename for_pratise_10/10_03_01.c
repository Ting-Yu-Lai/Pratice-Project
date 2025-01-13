#include <stdio.h>

int main() {
    // 印出奇數
    int count = 0, count1 = 0, odd = 0;
    for (count= 1; count <= 9; count += 2){
        printf("%d\n", count);
    }
    for (count1 = 9; count1 >= 1; count1 -= 2){
        odd = 10 - count1;
        printf("%d\n", odd);
    }
    return 0;
}