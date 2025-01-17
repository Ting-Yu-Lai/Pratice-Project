#include <stdio.h>

int main() {
    int N, i, j, k, l;
    printf("N = ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            printf("(%d,%d)", i, j);
        }
        printf("\n");
    }

    for (k = 1; k <= N; ++k) {
        for (l = 1; l <= N; ++l) {
            if (k == 1 || l == 5 || k == l) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}