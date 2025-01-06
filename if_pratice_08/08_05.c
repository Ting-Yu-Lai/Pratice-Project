#include <stdio.h>

int main(){
    int num1 = 0, num2 = 0, num3 = 0;
    int max = 0;

    printf("Please enter three of integers :");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 >=num2){
        max = num1;
    } else if(max > num2) {
        max = num2;
    } else {
        max = num3;
    }
    printf("The maxinum is :%d", max);
    return 0;
}