#include <stdio.h>
int main(){
    int answer = 10, guess = 0;
    printf("Please enter your guess :");
    scanf("%d", &guess);

    if (guess > answer){
        printf("Too big");
    }
    else {
        if (guess < answer)
        printf("Too small");
        else{
        printf("Bingo");
        }
    }
    return 0;
}