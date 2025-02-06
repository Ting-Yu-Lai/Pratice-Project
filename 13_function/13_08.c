#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0)); //在rand使用之前先用srand(1)來設定隨機數的起始值
    int i;
    for (i = 0; i <= 5; i++){
        printf("%d\n",rand());
    }
    return 0;
}