//輸入某三角形的三邊長(皆為整數)，判斷這三角形是不是正三角形
#include <stdio.h>

int main()
{
    int lengths_a = 0, lengths_b = 0, lengths_c = 0;
    printf("Please enter three of lengths :");
    scanf("%d%d%d", &lengths_a, &lengths_b, &lengths_c);


    if(lengths_a == lengths_b && lengths_b == lengths_c) //注意寫法(lengths_a == lengths_b == lengths_c) 是a == b 得出1 再拿1 == c 所以思路有錯誤
    {   
        printf("Regular triangle");
    }
    return 0;
}