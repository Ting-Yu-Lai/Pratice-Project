//輸入3個整數值，輸出3個中的最大值
#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    printf("Please enter three of numbers :");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b || b > c)
    {
        printf("The maxinum is :%d",a);
    }
    else if (b > a || a > c)
    {
        printf("The maxinum is :%d",b);
    }
    else if
    {
        printf("The maxinum is :%d",c);
    }
    else
    {
        printf("Is equal :%d", a);
    }
    return 0;
}