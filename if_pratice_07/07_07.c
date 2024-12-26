//put the numbers in ascending order
//重點:先搞清楚哪些部分需要做處理，不需要做處理的可以省略，前面我有很多程式碼特別去處理不需要處理的部分
#include <stdio.h>

int main()
{
    //two state one of already greatest to leats one of leats to greatest
    int int1 = 0, int2 = 0;
    int reg = 0;

    printf("Please enter two integers :");
    scanf("%d%d", &int1, &int2);
    printf("least og greatest : %d %d", int1, int2);
    if(int1 > int2){
        reg = int1;
        int1 = int2;
        int2 = reg;
    }
    if(old_int1 == old_int2){
        printf("they are eqaul");
    }
    printf("least og greatest : %d %d", int1, int2);
    return 0;
}