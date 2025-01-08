//從結果去看條件
//哪個先做，考慮兩個條件的動作去判斷誰先做
//還是在找最小值一樣去兩兩判斷最小是誰。
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int reg = 0;

    printf("Before :");
    scanf("%d%d%d", &a, &b, &c);

    if(b < a){
        reg = a;
        a = c;
        c = reg;
    }
    if(c < a){
        reg = a;
        a = b;
        b = reg;
    }
    if(c < b){
        reg = b; 
        b = c;
        c = reg;
    }
    printf("After : %d %d %d", a, b, c);
    // int a = 0, b = 0, c = 0;
    // int reg = 0;

    // printf("Before :");
    // scanf("%d%d%d", &a, &b, &c);

    // if(b < a && a <= c || b <= c && c < a){
    //     reg = a;
    //     a = b;
    //     b = reg;
    // }
    // if(c < a && a <= b || c < b && b < a){
    //     reg = c;
    //     c = a;
    //     a = reg;
    // }
    // if(a <= b && c < b || b <= c && c < a || c < a && a <= b){
    //     reg = c;
    //     c = b;
    //     b = reg;
    // }
    // printf("After : %d %d %d", a, b, c);
    
}