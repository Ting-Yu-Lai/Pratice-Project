//輸入某三角形的三邊長(皆為整數)，判斷這三角形是不是直角三角形
#include <stdio.h>

int main()
{
    int side1 = 0, side2 = 0, side3 = 0;
    int square_side1 = 0, square_side2 = 0, square_side3 = 0;
    int square_side12 = 0, square_side23 = 0, square_side13 = 0;
    
    printf("Please enter three of lengths :");
    scanf("%d%d%d", &side1, &side2, &side3);

    square_side1 = side1 * side1;
    square_side2 = side2 * side2;
    square_side3 = side3 * side3;
    square_side12 = square_side1 + square_side2;
    square_side23 = square_side2 + square_side3;
    square_side13 = square_side1 + square_side3;

    if (square_side12 == square_side3 || square_side23 == square_side1 || square_side13 == square_side3) 
    {
        printf("Right triangle");
    }
    return 0;
}