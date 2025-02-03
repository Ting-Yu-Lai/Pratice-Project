#include <stdio.h>

double div2(double N){
    return N/2;
}


int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", div2(N));
    return 0;
}