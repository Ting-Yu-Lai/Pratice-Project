#include <stdio.h>
#include <math.h>
int i = 5;

int f(){
        i = i + 1;
        printf("%d\n", i);
        return 0;
    }

int main() {
    printf("%d\n", i); //5
    int i = 6;
    i = i + 1; 
    f(); //6
    printf("%d\n", i); //7
    return 0;
}