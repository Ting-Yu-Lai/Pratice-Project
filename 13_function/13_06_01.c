#include <stdio.h>
#include <math.h>
//運用Max2函數找出三個數字中的最大值，輸入c重新比一次
int max2(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

int max3(int a, int b, int c) {
    return max2(max2(a, b), c);
}

int main() {
    int a, b, c;
    printf("Please enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The maximum value is: %d\n", max3(a, b, c));
    return 0;
}