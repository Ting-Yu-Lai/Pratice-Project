#include <stdio.h>
#include <math.h>
int i = 5;

int f(){
        i = i + 1;
        printf("%d\n", i);
        return 0;
    }

int main() {
    printf("%d\n", i); //5 會先看到全域變數的i 
    int i = 6;
    i = i + 1; 
    f(); //6 運用全域變數的i 去執行函式加法印出i
    printf("%d\n", i); //7 會看到區域變數的i
    return 0;
}