#include <stdio.h>
// do {程式片段} while(表示式);
// 當表示式成立的時候，就執行程式片段。

int main() {
    int guess = 0, answer = 5;
    do{
        printf("請猜一個數字：");
        scanf("%d", &guess);
        if(guess > answer){
            printf("太大了！\n");
        } else if (guess < answer){
            printf("太小了！\n");
        } else {
            printf("恭喜你猜對了！\n");
        }
    } while (guess != answer);
    return 0;
}