#include <stdio.h>
//費波納契數列
int S(int N){
    if(N <= 2){
        return N;
    }
    return S(N - 1) + S(N - 2);
}
int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", S(N));
    return 0;
}