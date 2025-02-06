#include <stdio.h>
//無窮多個 所以該用while更好
int main() {
    int number = 0;

    while(!(number % 3 == 2 && number % 5 == 3 && number % 7 == 2)){
        number++;
    }
    printf("The number is %d\n", number);
    return 0;
}