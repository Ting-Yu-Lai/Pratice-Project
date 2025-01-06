#include <stdio.h>

int main() {
    int answer= 42, guess = 0, count = 0;
    while (guess != answer) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if (guess < answer) {
            printf("Too Low \n");
            count++;
            printf("Number of tries: %d\n", count);
        }else if (guess > answer){
            printf("Too High \n");
            count++;
            printf("Number of tries: %d\n", count);
        } else {
            count++;
            printf("Congratulations! You guessed the number in %d tries\n", count);
     }
    }
  return 0;
}
