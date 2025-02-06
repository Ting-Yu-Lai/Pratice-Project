#include <stdio.h>

int main() {
    int num1 = 0;
    float sum = 0;
    float average = 0;
    int count = 1;
    printf("Enter of numbers(quit with 0) : ");
    scanf("%d", &num1);
    while(num1 != 0) {
        count = count + 1;
        sum = sum + num1;
        printf("Enter of numbers(quit with 0) : ");
        scanf("%d", &num1);
    }

    count = count - 1;
    average = sum / count;
    printf("The average is : %.2f", average);
    return 0;
}