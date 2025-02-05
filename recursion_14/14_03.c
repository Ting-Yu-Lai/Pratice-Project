#include <stdio.h>


int sum(int N) {
    if (N == 1) {
        return 1;
    }
    return sum(N-1)  + N;
}

int main() {
    int N;
    printf("Please enter a number: ");
    scanf("%d", &N);

    printf("%d", sum(N));
    return 0;
}