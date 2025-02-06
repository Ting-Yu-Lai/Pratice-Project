#include <stdio.h>

void countTo3(int i){
    if(i <= 3){
        printf("%d\n", i);
        countTo3(i+1);
    }
}

void count1To3(int i){
    if(i <= 3){
        countTo3(i+1);
        printf("%d\n", i);
    }
}
void count3To1(int i){
    if(i >= 1){
        printf("%d\n", i);
        count3To1(i-1);
    }
}

int main() {
    // countTo3(1);
    // count3To1(3);
    count1To3(1);
    return 0;
}