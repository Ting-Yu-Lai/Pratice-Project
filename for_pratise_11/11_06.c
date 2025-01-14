#include <stdio.h>

int main() {
    int n = 0, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    int prime_num = 0;
    for(count = 2; count < n; count++) {
        if (n % count == 0) {
            prime_num++;
        }
    }
    if (prime_num == 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}