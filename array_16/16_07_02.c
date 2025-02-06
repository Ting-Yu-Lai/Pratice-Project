#include <stdio.h>
#include <math.h>
// Use Array

int max10(int n[10]) {
    int max = n[0];
    for (int i = 1; i < 10; i++){
        if (n[i] > max){
            max = n[i];
        }
    }
    return max;
}

int sum10 (int n[10]){
    int sum = n[0];
    for (int i = 0; i < 10; i++){
        sum += n[i];
    }
    return sum / 10;
}

int main() {
    int i, n[10];
    for(i = 1; i <= 10; i++){
        scanf("%d", &n[i-1]);
    }
    printf("Max : %d\t", max10(n));
    printf("Avg : %d", sum10(n));
    return 0;
}