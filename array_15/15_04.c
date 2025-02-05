#include <stdio.h>

int main() {
    int var[3] = {1, 2, 3};
    int i;
    int max = var[0];
    for (i = 0; i <= 3; i++){
        if (var[i] >= max){
            max = var[i];
        }
    }
    printf("%d\n", max);
    return 0;
}