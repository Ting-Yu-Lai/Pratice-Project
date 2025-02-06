#include <stdio.h>

int main() {
    int answer = 42, guess = 0;
    while (guess != answer){
        printf("please enter a number: ");
        scanf("%d", &guess);
        if(guess > answer){
            printf("too high\n");
        } else if(guess < answer){
            printf("too low\n");
        } else {
            printf("correct\n");
        }
    }
    return 0;
}