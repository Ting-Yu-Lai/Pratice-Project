#include <stdio.h>
#include <math.h>

int main() {
    int i, n, m[10] = {0};
    for (i = 1; i <= 10; i++){
        scanf("%d", &n);
        m[n]++;
    }
    int ans = 0;
    for (n = 0; n < 10; n++){
        if(m[n] >= m[ans]){
            ans = n;
        }
    }
    printf("Ans: %d", ans);
    return 0;
}