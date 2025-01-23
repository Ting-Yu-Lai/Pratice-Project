#include <stdio.h>

int main() {
    
    // //其中一種寫法
    // int i,j;
    // for(i = 1; i <= 30/2; i++){
    //     for(j = 30/2; j <= 30; j++){
    //         if (i + j == 30 && i * j == 221){
    //             printf("i = %d, j = %d\n", i, j);
    //         }
    //     }
    // }
    
    int i;
    for(i = 1; i <= 30/2; i++){
        int j = 30 - i;
        if (i * j == 221){
            printf("i = %d, j = %d\n", i, j);
        }
    }
    return 0;
}