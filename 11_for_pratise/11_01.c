#include <stdio.h>

int main() {
    int N = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (count = 1; count <= N; count++){
        if (N % count == 0){
            printf("N 的正因數: %d \n", count);
        }
    }
    return 0;
}