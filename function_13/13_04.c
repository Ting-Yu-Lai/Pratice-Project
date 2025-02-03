#include <stdio.h>
#include <math.h>
//思考函式回傳值是誰
//參數放在參數列int f(int x, int y)
//運用函示找出最大值
int max(int, int);

// //另類函式寫法
// int max2(int a, int b){
//     int a, b;
//     if (a >= b){
//         return a; 
//     } else {
//         return b;
//     }
// }

int max2(int a, int b){
    int max;
    if (a >= b){
        max = a;
    } else {
        max = b;
    }
    return max;
}

int main() {
    int a, b;
    printf("Please enter first integer: ");
    scanf("%d", &a);
    printf("Please enter second integer: ");
    scanf("%d", &b);
    printf("The maximum value is %d\n", max2(a, b));
}