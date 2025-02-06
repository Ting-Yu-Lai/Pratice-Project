#include <stdio.h>
#include <math.h>

int main() {
    int i, input[10] = {0};
    for (i = 0; i < 10; i++){
        printf("Enter ten of integers :");
        scanf("%d" ,&input[i]);
    }
    
    int close, max = -1;
    do {
        printf("Q: ");
        scanf("%d", &close);   
        printf("Ans: ");
        for (i = 0; i < 10; i++){
            if (input[i] <= close && input[i] > max)
            max = input[i];
        }
        printf("%d ", max);
        printf("\n");  
    }  while (close != 0);
    return 0;
}