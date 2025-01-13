#include <stdio.h>

int main() {
    int count = 0;
    int N = 0;

    printf("Enter the what's you count number:");
    scanf("%d", &N);
    while (count != N){
        count++;
        printf("%d\n", count);
    }
    return 0;
}