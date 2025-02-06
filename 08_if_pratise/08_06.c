#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0;
    char op = '0';
    float answer = 0;

    scanf("%d %c %d", &num1, &op, &num2);
    switch(op) {
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            answer = (float)num1 / num2;
            break;
    }
    printf("Answer: %f", answer);
    return 0;
}