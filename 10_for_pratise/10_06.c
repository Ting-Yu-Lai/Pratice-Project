#include <stdio.h>

int main() {
    int N = 0, count = 0;

    printf("N = ");
    scanf("%d", &N);

    for (count = 1; count <= N; count++) {
        printf("*");
    }
    printf("\n");
    return 0;
}