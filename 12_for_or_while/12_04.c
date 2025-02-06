#include <stdio.h>

int main() {
    int N, i, j;
    printf("N = ");
    scanf("%d", &N);

    // for (i = 1; i <= 1; i++){
    //     printf("*");
    // }
    // printf("\n");
    // for (i = 1; i <= 2; i++){
    //     printf("*");
    // }
    // printf("\n");
    // for (i = 1; i <= 3; i++){
    //     printf("*");
    // }
    // printf("\n");


    // 實心三角形印製練習
    // for (i = 1; i <= N; i++) {
    //     for (j = 1; j <= i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // } 
    
    // 空心三角形印製練習
    // 1.觀察規律
    // printf("*\n");        //印1個星星                    + 換行
    // printf("**\n");       //印1個星星 + i個空格 + 1個星星 + 換行 (i = 0) 2.
    // printf("* *\n");      //印1個星星 + i個空格 + 1個星星 + 換行 (i = 1) 
    // printf("*  *\n");     //印1個星星 + i個空格 + 1個星星 + 換行 (i = 2)
    // printf("*****\n");    //印1個星星 + 3個星星 + 1個星星 + 換行
    // 2.找出規律


    printf("*\n");      //印1個星星                + 換行
    for (i = 0; i <= N-3; ++i) {   
        printf("*");        //印1個星星
        for (j = 1; j <= i; ++j) {
            printf(" ");      //印i個空格
        }
        printf("*\n");        //印1個星星 + 換行
    }
    for (j = 1; j <= N; ++j) { //printf("*****\n");印1個星星 + 3個星星 + 1個星星 + 換行
        printf("*");
    }
    return 0;
}