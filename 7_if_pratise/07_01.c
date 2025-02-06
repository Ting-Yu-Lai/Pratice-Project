//輸入兩個整數值，輸出兩個中的最大值
//這我第一次寫的版本，這次主要的練習是換個方法寫出來
#include <stdio.h>

int main()
{
    int integer1 = 0, integer2 = 0;
    printf("Please enter first numbintegerer :");
    scanf("%d", &integer1);
    printf("Please enter sccond integer :");
    scanf("%d", &integer2);
    if(integer1 > integer2)
    {
        printf("The maxinum is :%d",integer1);
    }
    else if(integer2 > integer1)
    {
        printf("The maxinum is :%d",integer2);
    }
    else
    {
        printf("%d = %d",integer1,integer2);
    }
}