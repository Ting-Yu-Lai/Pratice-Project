#include <stdio.h>

int main() {
    int n = 0, m = 0;

    printf("Enter the number of first: ");
    scanf("%d", &n);
    printf("Enter the number of last: ");
    scanf("%d", &m);
    int count = 0;
    for (count = n; count <= m; count++){
        printf("%d\n", count);
    }
    return 0;
}