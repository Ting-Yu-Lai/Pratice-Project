#include <stdio.h>

int main() {
    int count = 0, count1 = 0;

    while (count < 10){
        printf("Count 1 to 10\n");
        count++;
        printf("Sum is %d\n", count);
    }
    while (count1 < 100){
        printf("Count 1 to 100\n");
        count1++;
        printf("Sum is %d\n", count);
    }

    return 0;
}