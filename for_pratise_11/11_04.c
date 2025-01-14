#include <stdio.h>

int main() {
    // 韓信點兵當中最大值
    // int Max = 0;
    
    // printf("Enter the number of first: ");
    // scanf("%d", &Max);

    // while (Max > 0 && !(Max % 3 == 2 && Max % 5 == 3 && Max % 7 == 2)){
    //     Max--;
    // }
    // if (Max > 0){
    //     printf("The number is %d\n", Max);
    // }


    int Max1 = 0, number = 0;

    printf("Enter the number of first: ");
    scanf("%d", &Max1);

    int answer = 0;

    for (number = 1; number <= Max1; number++){
        if(number % 3 == 2 && number % 5 == 3 && number % 7 == 2){
            answer = number;
        }
    }
    printf("The number is %d\n", answer);
    return 0;
}