#include <stdio.h>

int main() {
    int count = 0, N = 0, M = 0;
    
    printf("Enter the number of first: ");
    scanf("%d", &N);
    printf("Enter the number of last: ");
    scanf("%d", &M);
    for (count = N; count <= M; count++){
        if(count % 3 == 2 && count % 5 == 3 && count % 7 == 2){
            printf("%d\n", count);
        }
    }
    return 0;
}