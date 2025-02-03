#include <stdio.h>
#include <math.h>
int comparemax(int num1, int num2, int num3){
    int max = num1;
    if (num2 > max){
        max = num2;
    }
    if (num3 > max){
        max = num3;
    }
    return max;
}
int main() {
    printf("Enter three numbers: ");
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("The maximum number is %d", comparemax(num1, num2, num3));
    return 0;
}