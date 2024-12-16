//輸入某三角形的三邊長(皆為整數)，判斷這三角形是不是等腰三角形
#include <stdio.h>

int main()
{
    int side1 = 0, side2 = 0, side3 = 0;
    printf("Please enter three of lengths :");
    scanf("%d%d%d", &side1, &side2, &side3);


    if(side1 == side2 || side1 == side3 || side2 == side3) //注意寫法(lengths_a == lengths_b == lengths_c) 是a == b 得出1 再拿1 == c 所以思路有錯誤
    {   
        printf("Isosceles triangle");
    }
    return 0;
}