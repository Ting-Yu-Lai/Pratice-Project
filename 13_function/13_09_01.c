#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

    srand(time(NULL));
    int answer = rand() % 100 + 1;
    int guess = 0;

    do {
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        if (guess < answer) {
            printf("Too low! Try again.\n");
        } else if (guess > answer) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
        }
    } while (guess != answer);{}
    return 0;
}