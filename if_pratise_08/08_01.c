//Enter score,if >= 60 printf pass else fail
#include <stdio.h>

int main(){

    int score = 0;
    printf("Please enter score :");
    scanf("%d", &score);

    if(score >= 60){
        printf("PASS");
    } 
    else{
        printf("FAIL");
    }
}