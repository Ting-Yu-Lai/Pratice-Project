//Use if-else enter two of integers,High numbers win!

#include <stdio.h>

int main(){
    int a = 0, b =0
    printf("Please enter two of integers :");
    scanf("%d%d", &a, &b);
    if (a > b) {
        printf("a bigger than b !");
    }
    else if (a < b) {
            printf("b bigger than a");
    }else {
        printf("they r eqaul");
    }
    return 0;
}

