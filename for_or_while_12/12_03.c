#include <stdio.h>

int main() {
    int N;

    printf("N = ");
    scanf("%d", &N);

    int i,j;
    for (j = 1; j <= N; j++){
        printf("*");
    }
    printf("\n");
    for (i = 1; i <= N-2; i++){
        printf("*");    
        for (j = 1; j <= N; j++){
            printf(" ");
        }
        printf("*\n");
    }
    for (j = 1; j <= N; j++){
        printf("*");
    }
    return 0;
}