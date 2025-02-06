#include <stdio.h>

int main() {
    int i, input[5] = {0}; //5個數字 0 1 2 3 4
    for (i = 0; i < 5; i++){    
        printf("%d: ", i+1);
        scanf("%d", &input[i]);
    }
    
    do {
        printf("Q: ");
        scanf("%d", &i);
        if (i < 6){
            printf("%d\n" , input[i-1]);
        } else {
            printf("error\n");
        }
    } while (i != 0);
    return 0;
}