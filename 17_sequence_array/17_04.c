#include <stdio.h>
#include <math.h>

int main() {
    int i, j, v[5];
    for (i = 0; i < 5; i++){
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j <= 3; j++){
            if ( v[j] > v[j+1]){
                int reg;
                reg = v[j+1];
                v[j+1] = v[j]; 
                v[j] = reg;
            }
        }
    }

    for (i = 0; i < 5; i++){
        printf("%d\t", v[i]);
    }
    return 0;
}