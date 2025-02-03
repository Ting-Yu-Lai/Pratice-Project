#include <stdio.h>
#include <math.h>

void print_stars(int i){ // void 作為回傳值型態時，表示函數不回傳任何值
    int j;
    for (j = 1; j <= i; j++){
        printf("*");
    } //void函數不回傳任何值，所以不需要return
} 

void print_triangle(int N){
    int i;
    for (i = 1; i <= N; i++){
        print_stars(i);
        printf("\n");
    }
}

int main() {
    int N;
    printf("N = ");
    scanf("%d", &N);

    print_triangle(N);

    return 0;
}