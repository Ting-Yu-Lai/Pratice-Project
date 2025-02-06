#include <stdio.h>

int main() {
    int count = 0, i = 0;

    printf("Enter the number : ");
    scanf("%d", &count);

    for (i = 1; i <= count ; i++){
        printf("%d\n", i);
    }
    return 0;
}