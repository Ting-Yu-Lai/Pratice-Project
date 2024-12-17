//輸入某三角形的三邊長(皆為整數)，判斷這三角形是不是下列三角型
// * 正三角形
// * 等邀三角形
// * 直角三角形
//因為條件有可能會一樣，像是等邀直角三角形，或是等腰正三角形，這次的例子不會有先後順序問題，但在之後有條件可以組合但不相同，就要注意有無需要先後順序
#include <stdio.h>

int main()
{
    int side1 = 0, side2 = 0, side3 = 0;
    printf("Please enter three of lengths :");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1 == side2 && side2 == side3) 
    {
        printf("Regular triangle\n");
    }
    if(side1 == side2 || side1 == side3 || side2 == side3) 
    {   
        printf("Isosceles triangle\n");
    }
    if (side1 * side1 + side2 * side2 == side3 * side3 || side3 * side3 + side2 * side2 == side1 * side1 || side1 * side1 + side3 * side3 == side2 * side2) 
    {
        printf("Right triangle");
    }

}
