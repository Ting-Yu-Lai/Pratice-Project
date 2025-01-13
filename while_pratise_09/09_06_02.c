#include <stdio.h>

int main() {
    int m = 0, n = 0;
    printf("Count M to N\n");

    printf("Enter the number of first: ");
    scanf("%d", &m);
    printf("Enter the number of last: ");
    scanf("%d", &n);
    
    while(m != n){
        m++;
        printf("%d\n", m);
    }
    return 0;
}