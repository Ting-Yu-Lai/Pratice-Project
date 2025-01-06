#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0;
    char op = 0;
    float result = 0;

    scanf("%d %c %d", &num1, &op, &num2);

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '-') {
        result =  num1 - num2;
    } else if (op == '/')  {
        result = (float) num1 / num2;
    }
    printf("ANSWER :%f", result);
    return 0;
}