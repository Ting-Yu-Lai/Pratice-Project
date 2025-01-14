#include <stdio.h>

int main() {
    int count = 0, N = 0;
    
    printf("Enter the number of : ");
    scanf("%d", &N);

    for (count = 1; count <= N; count++){
        if(count % 3 == 2 && count % 5 == 3 && count % 7 == 2){
            printf("%d\n", count);
        }
    }
    return 0;
}