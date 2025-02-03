#include <stdio.h>
#include <math.h>


int main() {
    int i = 3;
    printf("%d\n", i); //3

    if(i == 3){
        i = i + 1; //main 的 i 會變成4
        int i = 6;
        printf("%d\n", i); // 6
        i = i + 1; // 7
    }

    if(i == 3){
        printf("%d\n", i); // i已經變成4不會印 
    }

    return 0;
}