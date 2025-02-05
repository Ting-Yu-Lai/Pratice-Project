#include <stdio.h>
#include <math.h>

int main() {

    int i, input[10] = {0};
    for (i = 0; i < 10; i++){
        printf("Enter ten of integers :");
        scanf("%d" ,&input[i]);
    }
    
    int L, R;
    do {
        printf("L R: ");
        scanf("%d %d", &L, &R);   
        printf("Ans: "); 
        for (i = 0; i < 10; i++) {
            if (input[i] >= L && input[i] <= R) {
                printf("%d ", input[i]); 
            }
        }
        printf("\n");  
    }  while (L != 0 || R != 0);

    return 0;
}