#include <stdio.h>

int main() {
    int number = 0;
    int sum = 0;
    printf("Enter the numbers(quit with 0): ");
    scanf("%d", &number);
    while(number != 0){
        sum = number + sum;
        scanf("%d", &number); 
    }
    printf("The sum of the numbers is: %d\n", sum);
    return 0;
}