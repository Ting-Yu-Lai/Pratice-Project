#include <stdio.h>

int main() {
    //韓信點兵數三次 找最小的
    int count = 0, number = 0;

    for (number = 1; number <= 1000; number++) {
        if (number % 3 == 2 && number % 5 == 3 && number % 7 == 2) {
            count++;
            if (count <= 3){
                printf("%d\n", number);
            }
        }
    }

    //找前三大
    int count1 = 0, number1 = 0;

    for (number1 = 1000; number1 >= 1; number1--) {
        if (number1 % 3 == 2 && number1 % 5 == 3 && number1 % 7 == 2) {
            count1++;
            if (count1 <= 3){
                printf("%d\n", number1);
            }
        }
    }

    //找第三個
    int count2 = 0, number2 = 0;

    for (number2 = 1; number2 <= 1000; number2++) {
        if (number2 % 3 == 2 && number2 % 5 == 3 && number2 % 7 == 2) {
            count2++;
            if (count2 == 3){
                printf("%d\n", number2);
            }
        }
    }
    return 0;
}